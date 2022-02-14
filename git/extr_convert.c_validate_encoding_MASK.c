
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*,char const*,...) ;
 int FUNC_2 (char const*,char const*,char const*) ;
 int FUNC_3 (char const*,char const*,char const*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char const*,size_t) ;
 scalar_t__ FUNC_6 (char const*,char const*,size_t) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*,char const**) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11(const char *VAR_0, const char *VAR_1,
        const char *VAR_2, size_t VAR_3, int VAR_4)
{

 if (FUNC_7(VAR_1, "UTF")) {



  if (FUNC_5(VAR_1, VAR_2, VAR_3)) {
   const char *VAR_5 = FUNC_0(
    "BOM is prohibited in '%s' if encoded as %s");





   const char *VAR_6 = FUNC_0(
    "The file '%s' contains a byte order "
    "mark (BOM). Please use UTF-%s as "
    "working-tree-encoding.");
   const char *VAR_7 = ((void*)0);
   char *VAR_8 = FUNC_10(VAR_1);
   VAR_8[FUNC_9(VAR_8)-2] = '\0';
   if (FUNC_8(VAR_8, "UTF", &VAR_7))
    FUNC_8(VAR_7, "-", &VAR_7);
   FUNC_1(VAR_6, VAR_0, VAR_7);
   FUNC_4(VAR_8);
   if (VAR_4)
    FUNC_2(VAR_5, VAR_0, VAR_1);
   else {
    return FUNC_3(VAR_5, VAR_0, VAR_1);
   }

  } else if (FUNC_6(VAR_1, VAR_2, VAR_3)) {
   const char *VAR_9 = FUNC_0(
    "BOM is required in '%s' if encoded as %s");
   const char *VAR_10 = FUNC_0(
    "The file '%s' is missing a byte order "
    "mark (BOM). Please use UTF-%sBE or UTF-%sLE "
    "(depending on the byte order) as "
    "working-tree-encoding.");
   const char *VAR_11 = ((void*)0);
   char *VAR_12 = FUNC_10(VAR_1);
   if (FUNC_8(VAR_12, "UTF", &VAR_11))
    FUNC_8(VAR_11, "-", &VAR_11);
   FUNC_1(VAR_10, VAR_0, VAR_11, VAR_11);
   FUNC_4(VAR_12);
   if (VAR_4)
    FUNC_2(VAR_9, VAR_0, VAR_1);
   else {
    return FUNC_3(VAR_9, VAR_0, VAR_1);
   }
  }

 }
 return 0;
}
