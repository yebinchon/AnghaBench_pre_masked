
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int ticks ;
struct cpuref {int dummy; } ;
typedef int platform_t ;
typedef int phandle_t ;
typedef scalar_t__ int32_t ;
typedef int buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,scalar_t__*,int) ;
 int FUNC_3 (int,char*,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static u_long
FUNC_7(platform_t VAR_0, struct cpuref *VAR_1)
{
 phandle_t VAR_2, VAR_3;
 int32_t VAR_4 = -1;
 int VAR_5;
 char VAR_6[8];

 VAR_2 = FUNC_1("/cpus");
 if (VAR_2 == -1)
  FUNC_5("CPU tree not found on Open Firmware\n");

 for (VAR_3 = FUNC_0(VAR_2); VAR_3 != 0; VAR_3 = FUNC_4(VAR_3)) {
  VAR_5 = FUNC_3(VAR_3, "device_type", VAR_6, sizeof(VAR_6));
  if (VAR_5 > 0 && FUNC_6(VAR_6, "cpu") == 0)
   break;
 }
 if (VAR_3 <= 0)
  FUNC_5("CPU node not found on Open Firmware\n");

 FUNC_2(VAR_3, "timebase-frequency", &VAR_4, sizeof(VAR_4));

 if (VAR_4 <= 0)
  FUNC_5("Unable to determine timebase frequency!");

 return (VAR_4);
}
