
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int power_profile_mode; int pm_enabled; } ;
typedef scalar_t__ int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct smu_context*,int) ;
 int FUNC_1 (char*,char*,int,char const*,char*) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_2,
        char *VAR_3)
{
 static const char *VAR_4[] = {
     "BOOTUP_DEFAULT",
     "3D_FULL_SCREEN",
     "POWER_SAVING",
     "VIDEO",
     "VR",
     "COMPUTE",
     "CUSTOM"};
 uint32_t VAR_5, VAR_6 = 0;
 int16_t VAR_7 = 0;

 if (!VAR_2->pm_enabled || !VAR_3)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++) {




  VAR_7 = FUNC_0(VAR_2, VAR_5);
  if (VAR_7 < 0)
   continue;

  VAR_6 += FUNC_1(VAR_3 + VAR_6, "%2d %14s%s\n",
   VAR_5, VAR_4[VAR_5], (VAR_5 == VAR_2->power_profile_mode) ? "*" : " ");
 }

 return VAR_6;
}
