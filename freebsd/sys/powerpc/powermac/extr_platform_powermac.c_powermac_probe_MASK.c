
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int platform_t ;
typedef scalar_t__ phandle_t ;
typedef int compat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(platform_t VAR_2)
{
 char VAR_3[255];
 ssize_t VAR_4;
 char *VAR_5;
 phandle_t VAR_6;

 VAR_6 = FUNC_1(0);
 if (VAR_6 == 0)
  return (VAR_1);

 VAR_4 = FUNC_0(VAR_6, "compatible", VAR_3, sizeof(VAR_3));

 for (VAR_5 = VAR_3; VAR_5 < VAR_3 + VAR_4;
     VAR_5 += FUNC_2(VAR_5) + 1) {
  if (FUNC_3(VAR_5, "MacRISC", 7) == 0)
   return (VAR_0);
 }

 return (VAR_1);
}
