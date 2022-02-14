
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ int8_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,char const**) ;
 int FUNC_1 () ;
 char* FUNC_2 (char const*,int *,long long*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6(int VAR_1, const char *VAR_2[])
{
 long long VAR_3;
 uint8_t VAR_4;
 char *VAR_5;

 if (VAR_1 == 0) {
  FUNC_5("tracer: no arguments.");
  return (VAR_0);
 };


 if (FUNC_3(VAR_2[0], "list") == 0) {
  if (VAR_1 != 1)
   FUNC_5("trailing arguments after \"list\" ignored.");

  return FUNC_1();
 }


 VAR_5 = FUNC_2(VAR_2[0], ((void*)0), &VAR_3);
 if (*VAR_5 || VAR_3 > 0xff) {
  FUNC_5("\"%s\" is neither an index nor a tracer subcommand.",
      VAR_2[0]);
  return (VAR_0);
 }
 VAR_4 = (int8_t)VAR_3;


 if (VAR_1 == 2 && FUNC_3(VAR_2[1], "disable") == 0)
  return FUNC_4(VAR_4, 0);


 if (VAR_1 == 2 && FUNC_3(VAR_2[1], "enable") == 0)
  return FUNC_4(VAR_4, 1);


 return FUNC_0(VAR_4, VAR_1 - 1, VAR_2 + 1);
}
