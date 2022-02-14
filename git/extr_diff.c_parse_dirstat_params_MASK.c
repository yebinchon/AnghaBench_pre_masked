
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int dummy; } ;
struct TYPE_4__ {int dirstat_by_line; int dirstat_by_file; int dirstat_cumulative; } ;
struct diff_options {int dirstat_permille; TYPE_2__ flags; } ;
struct TYPE_3__ {char* string; } ;


 struct string_list VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (struct strbuf*,int ,char const*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (struct string_list*,int ) ;
 int FUNC_6 (struct string_list*,char*,char,int) ;
 int FUNC_7 (char const*,char**,int) ;
 char* FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(struct diff_options *VAR_1, const char *VAR_2,
    struct strbuf *VAR_3)
{
 char *VAR_4 = FUNC_8(VAR_2);
 struct string_list VAR_5 = VAR_0;
 int VAR_6 = 0;
 int VAR_7;

 if (*VAR_4)
  FUNC_6(&VAR_5, VAR_4, ',', -1);
 for (VAR_7 = 0; VAR_7 < VAR_5.nr; VAR_7++) {
  const char *VAR_8 = VAR_5.items[VAR_7].string;
  if (!FUNC_4(VAR_8, "changes")) {
   VAR_1->flags.dirstat_by_line = 0;
   VAR_1->flags.dirstat_by_file = 0;
  } else if (!FUNC_4(VAR_8, "lines")) {
   VAR_1->flags.dirstat_by_line = 1;
   VAR_1->flags.dirstat_by_file = 0;
  } else if (!FUNC_4(VAR_8, "files")) {
   VAR_1->flags.dirstat_by_line = 0;
   VAR_1->flags.dirstat_by_file = 1;
  } else if (!FUNC_4(VAR_8, "noncumulative")) {
   VAR_1->flags.dirstat_cumulative = 0;
  } else if (!FUNC_4(VAR_8, "cumulative")) {
   VAR_1->flags.dirstat_cumulative = 1;
  } else if (FUNC_2(*VAR_8)) {
   char *VAR_9;
   int VAR_10 = FUNC_7(VAR_8, &VAR_9, 10) * 10;
   if (*VAR_9 == '.' && FUNC_2(*++VAR_9)) {

    VAR_10 += *VAR_9 - '0';

    while (FUNC_2(*++VAR_9))
     ;
   }
   if (!*VAR_9)
    VAR_1->dirstat_permille = VAR_10;
   else {
    FUNC_3(VAR_3, FUNC_0("  Failed to parse dirstat cut-off percentage '%s'\n"),
         VAR_8);
    VAR_6++;
   }
  } else {
   FUNC_3(VAR_3, FUNC_0("  Unknown dirstat parameter '%s'\n"), VAR_8);
   VAR_6++;
  }

 }
 FUNC_5(&VAR_5, 0);
 FUNC_1(VAR_4);
 return VAR_6;
}
