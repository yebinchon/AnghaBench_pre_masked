
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int ticks ;
struct cpuref {int cr_hwref; } ;
typedef int platform_t ;
typedef int phandle_t ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int ,char*,scalar_t__*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static u_long
FUNC_2(platform_t VAR_0, struct cpuref *VAR_1)
{
 phandle_t VAR_2;
 int32_t VAR_3 = -1;

 VAR_2 = VAR_1->cr_hwref;

 FUNC_0(VAR_2, "timebase-frequency", &VAR_3, sizeof(VAR_3));

 if (VAR_3 <= 0)
  FUNC_1("Unable to determine timebase frequency!");

 return (VAR_3);
}
