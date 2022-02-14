
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int,char const**,int) ;
 int FUNC_3 (int,char const**) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (char const*,int *,long long*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int
FUNC_8(int VAR_1, const char *VAR_2[], int VAR_3)
{
 long long VAR_4;
 uint32_t VAR_5;
 char *VAR_6;

 if (VAR_1 == 0) {
  FUNC_7("%sfilter: no arguments.", VAR_3 ? "hash" : "");
  return (VAR_0);
 };


 if (FUNC_6(VAR_2[0], "list") == 0) {
  if (VAR_1 != 1)
   FUNC_7("trailing arguments after \"list\" ignored.");

  return FUNC_4(VAR_3);
 }


 if (VAR_1 == 1 && FUNC_6(VAR_2[0], "mode") == 0)
  return FUNC_1(VAR_3);


 if (!VAR_3 && FUNC_6(VAR_2[0], "mode") == 0)
  return FUNC_3(VAR_1 - 1, VAR_2 + 1);


 VAR_6 = FUNC_5(VAR_2[0], ((void*)0), &VAR_4);
 if (*VAR_6 || VAR_4 < 0 || VAR_4 > 0xffffffffU) {
  if (VAR_3) {





   VAR_5 = (uint32_t) -1;
   goto setf;
  }
  FUNC_7("\"%s\" is neither an index nor a filter subcommand.",
      VAR_2[0]);
  return (VAR_0);
 }
 VAR_5 = (uint32_t) VAR_4;


 if ((VAR_1 == 2 || VAR_1 == 4) &&
     (FUNC_6(VAR_2[1], "delete") == 0 || FUNC_6(VAR_2[1], "clear") == 0)) {
  int VAR_7 = 0;

  if (VAR_1 == 4) {
   if (VAR_3) {
    FUNC_7("stray arguments after \"%s\".", VAR_2[1]);
    return (VAR_0);
   }

   if (FUNC_6(VAR_2[2], "prio") != 0) {
    FUNC_7("\"prio\" is the only valid keyword "
        "after \"%s\", found \"%s\" instead.",
        VAR_2[1], VAR_2[2]);
    return (VAR_0);
   }

   VAR_6 = FUNC_5(VAR_2[3], ((void*)0), &VAR_4);
   if (*VAR_6 || VAR_4 < 0 || VAR_4 > 1) {
    FUNC_7("%s \"%s\"; must be \"0\" or \"1\".",
        VAR_2[2], VAR_2[3]);
    return (VAR_0);
   }
   VAR_7 = (int)VAR_4;
  }
  return FUNC_0(VAR_5, VAR_7, VAR_3);
 }


 VAR_1--;
 VAR_2++;

setf:

 return FUNC_2(VAR_5, VAR_1, VAR_2, VAR_3);
}
