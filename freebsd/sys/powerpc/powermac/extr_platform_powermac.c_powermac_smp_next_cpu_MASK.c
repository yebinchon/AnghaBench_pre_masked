
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuref {scalar_t__ cr_hwref; } ;
typedef int platform_t ;
typedef scalar_t__ phandle_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct cpuref*,scalar_t__) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(platform_t VAR_1, struct cpuref *VAR_2)
{
 char VAR_3[8];
 phandle_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2->cr_hwref);
 while (VAR_4 != 0) {
  VAR_5 = FUNC_0(VAR_4, "device_type", VAR_3, sizeof(VAR_3));
  if (VAR_5 > 0 && FUNC_3(VAR_3, "cpu") == 0)
   break;
  VAR_4 = FUNC_1(VAR_4);
 }
 if (VAR_4 == 0)
  return (VAR_0);

 return (FUNC_2(VAR_2, VAR_4));
}
