
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct ref_sorting {int dummy; } ;
struct ref_format {char* format; int use_color; } ;
struct ref_filter {int kind; scalar_t__ verbose; } ;
struct ref_array {int nr; int * items; } ;
typedef int array ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 char* FUNC_2 (struct ref_filter*,int,char const*) ;
 int FUNC_3 (struct ref_array*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct ref_array*,struct ref_filter*,int) ;
 scalar_t__ FUNC_7 (int ,struct ref_format*,struct strbuf*,struct strbuf*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int,int ,int ) ;
 int FUNC_10 (struct ref_array*,int ,int) ;
 int VAR_5 ;
 int FUNC_11 (char) ;
 int FUNC_12 (struct ref_array*) ;
 int FUNC_13 (struct ref_sorting*,struct ref_array*) ;
 int VAR_6 ;
 int FUNC_14 (struct strbuf*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (char const*) ;
 scalar_t__ FUNC_17 (struct ref_format*) ;

__attribute__((used)) static void FUNC_18(struct ref_filter *VAR_7, struct ref_sorting *VAR_8, struct ref_format *VAR_9)
{
 int VAR_10;
 struct ref_array VAR_11;
 int VAR_12 = 0;
 const char *VAR_13 = "";
 char *VAR_14 = ((void*)0);






 if (VAR_7->kind != VAR_1)
  VAR_13 = "remotes/";

 FUNC_10(&VAR_11, 0, sizeof(VAR_11));

 FUNC_6(&VAR_11, VAR_7, VAR_7->kind | VAR_0);

 if (VAR_7->verbose)
  VAR_12 = FUNC_3(&VAR_11, FUNC_16(VAR_13));

 if (!VAR_9->format)
  VAR_9->format = VAR_14 = FUNC_2(VAR_7, VAR_12, VAR_13);
 VAR_9->use_color = VAR_3;

 if (FUNC_17(VAR_9))
  FUNC_5(FUNC_0("unable to parse format string"));

 FUNC_13(VAR_8, &VAR_11);

 for (VAR_10 = 0; VAR_10 < VAR_11.nr; VAR_10++) {
  struct strbuf VAR_15 = VAR_2;
  struct strbuf VAR_16 = VAR_2;
  if (FUNC_7(VAR_11.items[VAR_10], VAR_9, &VAR_15, &VAR_16))
   FUNC_5("%s", VAR_16.buf);
  if (FUNC_4(VAR_4)) {
   FUNC_1(!VAR_7->verbose && "--column and --verbose are incompatible");

   FUNC_15(&VAR_5, VAR_15.buf);
  } else {
   FUNC_9(VAR_15.buf, 1, VAR_15.len, VAR_6);
   FUNC_11('\n');
  }
  FUNC_14(&VAR_16);
  FUNC_14(&VAR_15);
 }

 FUNC_12(&VAR_11);
 FUNC_8(VAR_14);
}
