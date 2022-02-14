
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int string; } ;
struct string_list {int nr; struct string_list_item* items; } ;
struct strbuf {int buf; } ;
struct argv_array {int argv; } ;


 struct argv_array VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 struct string_list VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct argv_array*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (char const**) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int*,char const***) ;
 int FUNC_9 (int,char const**) ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (struct strbuf*,char*,int ) ;
 int FUNC_12 (struct strbuf*,char*) ;
 int FUNC_13 (struct string_list*,char const*) ;
 int FUNC_14 (struct string_list*,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,char*) ;
 struct string_list_item* FUNC_17 (struct string_list*,char const*) ;

__attribute__((used)) static int FUNC_18(int *VAR_7, const char ***VAR_8)
{
 int VAR_9 = 0;
 struct string_list VAR_10 = VAR_5;
 struct string_list_item *VAR_11;

 while (1) {
  if (!VAR_9)
   FUNC_9(*VAR_7, *VAR_8);
  else if (FUNC_6(**VAR_8)) {
   struct argv_array VAR_12 = VAR_0;
   int VAR_13;
   FUNC_15("_run_git_alias_");

   if (FUNC_7())
    FUNC_3("%s doesn't support --super-prefix", **VAR_8);

   FUNC_2();

   FUNC_1(&VAR_12, "git");
   for (VAR_13 = 0; VAR_13 < *VAR_7; VAR_13++)
    FUNC_1(&VAR_12, (*VAR_8)[VAR_13]);

   FUNC_16(VAR_12.argv, "trace: exec:");





   VAR_13 = FUNC_10(VAR_12.argv, VAR_3 |
        VAR_2, "git_alias");
   if (VAR_13 >= 0 || VAR_6 != VAR_1)
    FUNC_5(VAR_13);
   FUNC_3("could not execute builtin %s", **VAR_8);
  }


  FUNC_4(*VAR_8);

  VAR_11 = FUNC_17(&VAR_10, *VAR_8[0]);
  if (VAR_11) {
   int VAR_14;
   struct strbuf VAR_15 = VAR_4;
   for (VAR_14 = 0; VAR_14 < VAR_10.nr; VAR_14++) {
    struct string_list_item *VAR_16 = &VAR_10.items[VAR_14];

    FUNC_11(&VAR_15, "\n  %s", VAR_16->string);
    if (VAR_16 == VAR_11)
     FUNC_12(&VAR_15, " <==");
    else if (VAR_14 == VAR_10.nr - 1)
     FUNC_12(&VAR_15, " ==>");
   }
   FUNC_3(FUNC_0("alias loop detected: expansion of '%s' does"
         " not terminate:%s"), VAR_10.items[0].string, VAR_15.buf);
  }

  FUNC_13(&VAR_10, *VAR_8[0]);






  if (!FUNC_8(VAR_7, VAR_8))
   break;
  VAR_9 = 1;
 }

 FUNC_14(&VAR_10, 0);

 return VAR_9;
}
