
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {char* string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct string_list VAR_15 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 () ;
 int FUNC_8 (char const*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (struct string_list*,int ) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_18 ;
 int FUNC_13 (int ,char const*,int) ;
 int FUNC_14 (int ,char const*,int) ;
 scalar_t__ FUNC_15 (char const*,char*,char const**) ;
 int VAR_19 ;
 int FUNC_16 (char const*,char*) ;
 int FUNC_17 (struct string_list*,int ) ;
 int FUNC_18 (int ) ;
 int VAR_20 ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ) ;
 int VAR_21 ;
 char* FUNC_21 () ;

__attribute__((used)) static int FUNC_22(const char ***VAR_22, int *VAR_23, int *VAR_24)
{
 const char **VAR_25 = *VAR_22;

 while (*VAR_23 > 0) {
  const char *VAR_26 = (*VAR_22)[0];
  if (VAR_26[0] != '-')
   break;






  if (!FUNC_16(VAR_26, "--help") || !FUNC_16(VAR_26, "--version"))
   break;




  if (FUNC_15(VAR_26, "--exec-path", &VAR_26)) {
   if (*VAR_26 == '=')
    FUNC_8(VAR_26 + 1);
   else {
    FUNC_12(FUNC_7());
    FUNC_19("_query_");
    FUNC_3(0);
   }
  } else if (!FUNC_16(VAR_26, "--html-path")) {
   FUNC_12(FUNC_18(VAR_2));
   FUNC_19("_query_");
   FUNC_3(0);
  } else if (!FUNC_16(VAR_26, "--man-path")) {
   FUNC_12(FUNC_18(VAR_7));
   FUNC_19("_query_");
   FUNC_3(0);
  } else if (!FUNC_16(VAR_26, "--info-path")) {
   FUNC_12(FUNC_18(VAR_5));
   FUNC_19("_query_");
   FUNC_3(0);
  } else if (!FUNC_16(VAR_26, "-p") || !FUNC_16(VAR_26, "--paginate")) {
   VAR_21 = 1;
  } else if (!FUNC_16(VAR_26, "-P") || !FUNC_16(VAR_26, "--no-pager")) {
   VAR_21 = 0;
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "--no-replace-objects")) {
   VAR_18 = 0;
   FUNC_14(VAR_14, "1", 1);
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "--git-dir")) {
   if (*VAR_23 < 2) {
    FUNC_4(VAR_19, "%s", FUNC_0("no directory given for --git-dir\n" ));
    FUNC_20(VAR_16);
   }
   FUNC_14(VAR_0, (*VAR_22)[1], 1);
   if (VAR_24)
    *VAR_24 = 1;
   (*VAR_22)++;
   (*VAR_23)--;
  } else if (FUNC_15(VAR_26, "--git-dir=", &VAR_26)) {
   FUNC_14(VAR_0, VAR_26, 1);
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "--namespace")) {
   if (*VAR_23 < 2) {
    FUNC_4(VAR_19, "%s", FUNC_0("no namespace given for --namespace\n" ));
    FUNC_20(VAR_16);
   }
   FUNC_14(VAR_8, (*VAR_22)[1], 1);
   if (VAR_24)
    *VAR_24 = 1;
   (*VAR_22)++;
   (*VAR_23)--;
  } else if (FUNC_15(VAR_26, "--namespace=", &VAR_26)) {
   FUNC_14(VAR_8, VAR_26, 1);
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "--work-tree")) {
   if (*VAR_23 < 2) {
    FUNC_4(VAR_19, "%s", FUNC_0("no directory given for --work-tree\n" ));
    FUNC_20(VAR_16);
   }
   FUNC_14(VAR_12, (*VAR_22)[1], 1);
   if (VAR_24)
    *VAR_24 = 1;
   (*VAR_22)++;
   (*VAR_23)--;
  } else if (FUNC_15(VAR_26, "--work-tree=", &VAR_26)) {
   FUNC_14(VAR_12, VAR_26, 1);
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "--super-prefix")) {
   if (*VAR_23 < 2) {
    FUNC_4(VAR_19, "%s", FUNC_0("no prefix given for --super-prefix\n" ));
    FUNC_20(VAR_16);
   }
   FUNC_14(VAR_11, (*VAR_22)[1], 1);
   if (VAR_24)
    *VAR_24 = 1;
   (*VAR_22)++;
   (*VAR_23)--;
  } else if (FUNC_15(VAR_26, "--super-prefix=", &VAR_26)) {
   FUNC_14(VAR_11, VAR_26, 1);
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "--bare")) {
   char *VAR_27 = FUNC_21();
   VAR_17 = 1;
   FUNC_14(VAR_0, VAR_27, 0);
   FUNC_5(VAR_27);
   FUNC_14(VAR_4, "0", 1);
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "-c")) {
   if (*VAR_23 < 2) {
    FUNC_4(VAR_19, "%s", FUNC_0("-c expects a configuration string\n" ));
    FUNC_20(VAR_16);
   }
   FUNC_6((*VAR_22)[1]);
   (*VAR_22)++;
   (*VAR_23)--;
  } else if (!FUNC_16(VAR_26, "--literal-pathspecs")) {
   FUNC_14(VAR_6, "1", 1);
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "--no-literal-pathspecs")) {
   FUNC_14(VAR_6, "0", 1);
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "--glob-pathspecs")) {
   FUNC_14(VAR_1, "1", 1);
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "--noglob-pathspecs")) {
   FUNC_14(VAR_9, "1", 1);
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "--icase-pathspecs")) {
   FUNC_14(VAR_3, "1", 1);
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "--no-optional-locks")) {
   FUNC_14(VAR_10, "0", 1);
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "--shallow-file")) {
   (*VAR_22)++;
   (*VAR_23)--;
   FUNC_13(VAR_20, (*VAR_22)[0], 1);
   if (VAR_24)
    *VAR_24 = 1;
  } else if (!FUNC_16(VAR_26, "-C")) {
   if (*VAR_23 < 2) {
    FUNC_4(VAR_19, "%s", FUNC_0("no directory given for -C\n" ));
    FUNC_20(VAR_16);
   }
   if ((*VAR_22)[1][0]) {
    if (FUNC_1((*VAR_22)[1]))
     FUNC_2("cannot change to '%s'", (*VAR_22)[1]);
    if (VAR_24)
     *VAR_24 = 1;
   }
   (*VAR_22)++;
   (*VAR_23)--;
  } else if (FUNC_15(VAR_26, "--list-cmds=", &VAR_26)) {
   FUNC_19("_query_");
   if (!FUNC_16(VAR_26, "parseopt")) {
    struct string_list VAR_28 = VAR_15;
    int VAR_29;

    FUNC_9(&VAR_28, VAR_13);
    for (VAR_29 = 0; VAR_29 < VAR_28.nr; VAR_29++)
     FUNC_11("%s ", VAR_28.items[VAR_29].string);
    FUNC_17(&VAR_28, 0);
    FUNC_3(0);
   } else {
    FUNC_3(FUNC_10(VAR_26));
   }
  } else {
   FUNC_4(VAR_19, FUNC_0("unknown option: %s\n"), VAR_26);
   FUNC_20(VAR_16);
  }

  (*VAR_22)++;
  (*VAR_23)--;
 }
 return (*VAR_22) - VAR_25;
}
