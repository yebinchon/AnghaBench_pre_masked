
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuref {int dummy; } ;
typedef int platform_t ;
typedef int phandle_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cpuref*,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(platform_t VAR_1, struct cpuref *VAR_2)
{
 char VAR_3[8];
 phandle_t VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(0);

 VAR_5 = FUNC_0(VAR_6);
 while (VAR_5 != 0) {
  VAR_7 = FUNC_2(VAR_5, "name", VAR_3, sizeof(VAR_3));
  if (VAR_7 > 0 && FUNC_5(VAR_3, "cpus") == 0)
   break;
  VAR_5 = FUNC_3(VAR_5);
 }
 if (VAR_5 == 0) {




  VAR_5 = FUNC_1("/cpus");
  if (VAR_5 == -1)
   return (VAR_0);
 }

 VAR_4 = FUNC_0(VAR_5);

 while (VAR_4 != 0) {
  VAR_7 = FUNC_2(VAR_4, "device_type", VAR_3, sizeof(VAR_3));
  if (VAR_7 > 0 && FUNC_5(VAR_3, "cpu") == 0)
   break;
  VAR_4 = FUNC_3(VAR_4);
 }
 if (VAR_4 == 0)
  return (VAR_0);

 return (FUNC_4(VAR_2, VAR_4));
}
