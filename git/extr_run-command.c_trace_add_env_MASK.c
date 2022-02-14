
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {char const* const buf; } ;
struct TYPE_4__ {char* util; } ;
struct TYPE_3__ {char* string; char* util; } ;


 struct strbuf VAR_0 ;
 struct string_list VAR_1 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct strbuf*,char const*) ;
 int FUNC_2 (struct strbuf*,char const* const,int) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char*,char const*) ;
 int FUNC_5 (struct strbuf*,char*) ;
 int FUNC_6 (struct strbuf*) ;
 char* FUNC_7 (char const* const,char) ;
 int FUNC_8 (char const*,char const*) ;
 int FUNC_9 (struct string_list*,int ) ;
 TYPE_2__* FUNC_10 (struct string_list*,char const* const) ;

__attribute__((used)) static void FUNC_11(struct strbuf *VAR_2, const char *const *VAR_3)
{
 struct string_list VAR_4 = VAR_1;
 const char *const *VAR_5;
 int VAR_6;
 int VAR_7 = 0;


 for (VAR_5 = VAR_3; VAR_5 && *VAR_5; VAR_5++) {
  struct strbuf VAR_8 = VAR_0;
  char *VAR_9 = FUNC_7(*VAR_5, '=');

  if (VAR_9) {
   FUNC_2(&VAR_8, *VAR_5, VAR_9 - *VAR_5);
   FUNC_10(&VAR_4, VAR_8.buf)->util = VAR_9 + 1;
  } else {
   FUNC_10(&VAR_4, *VAR_5)->util = ((void*)0);
  }
  FUNC_6(&VAR_8);
 }


 for (VAR_6 = 0; VAR_6 < VAR_4.nr; VAR_6++) {
  const char *VAR_10 = VAR_4.items[VAR_6].string;
  const char *VAR_11 = VAR_4.items[VAR_6].util;

  if (VAR_11 || !FUNC_0(VAR_10))
   continue;

  if (!VAR_7) {
   FUNC_5(VAR_2, " unset");
   VAR_7 = 1;
  }
  FUNC_4(VAR_2, " %s", VAR_10);
 }
 if (VAR_7)
  FUNC_3(VAR_2, ';');


 for (VAR_6 = 0; VAR_6 < VAR_4.nr; VAR_6++) {
  const char *VAR_12 = VAR_4.items[VAR_6].string;
  const char *VAR_13 = VAR_4.items[VAR_6].util;
  const char *VAR_14;

  if (!VAR_13)
   continue;

  VAR_14 = FUNC_0(VAR_12);
  if (VAR_14 && !FUNC_8(VAR_13, VAR_14))
   continue;

  FUNC_4(VAR_2, " %s=", VAR_12);
  FUNC_1(VAR_2, VAR_13);
 }
 FUNC_9(&VAR_4, 0);
}
