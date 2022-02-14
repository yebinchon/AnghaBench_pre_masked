
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int ticks ;
struct cpuref {int dummy; } ;
typedef int platform_t ;
typedef scalar_t__ phandle_t ;
typedef scalar_t__ int32_t ;
typedef int buf ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static u_long
FUNC_6(platform_t VAR_0, struct cpuref *VAR_1)
{
 char VAR_2[8];
 phandle_t VAR_3, VAR_4, VAR_5;
 int VAR_6;
 int32_t VAR_7 = -1;

 VAR_5 = FUNC_3(0);
 VAR_4 = FUNC_0(VAR_5);
 while (VAR_4 != 0) {
  VAR_6 = FUNC_2(VAR_4, "name", VAR_2, sizeof(VAR_2));
  if (VAR_6 > 0 && FUNC_5(VAR_2, "cpus") == 0)
   break;
  VAR_4 = FUNC_3(VAR_4);
 }

 for (VAR_3 = FUNC_0(VAR_4); VAR_3 != 0; VAR_3 = FUNC_3(VAR_3)) {
  VAR_6 = FUNC_2(VAR_3, "device_type", VAR_2, sizeof(VAR_2));
  if (VAR_6 > 0 && FUNC_5(VAR_2, "cpu") == 0)
   break;
 }
 if (VAR_3 == 0)
  return (512000000);

 FUNC_1(VAR_3, "timebase-frequency", &VAR_7, sizeof(VAR_7));

 if (VAR_7 <= 0)
  FUNC_4("Unable to determine timebase frequency!");

 return (VAR_7);

}
