
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct smu_context {size_t power_profile_mode; int pm_enabled; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct smu_context*,int ,int) ;
 int FUNC_2 (struct smu_context*,size_t) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_3,
        long *VAR_4,
        uint32_t VAR_5)
{
 int VAR_6 = 0;
 uint32_t VAR_7 = VAR_4[VAR_5];
 int VAR_8 = 0;

 if (!VAR_3->pm_enabled)
  return -VAR_0;

 if (VAR_7 > VAR_1) {
  FUNC_0("Invalid power profile mode %d\n", VAR_7);
  return -VAR_0;
 }





 VAR_6 = FUNC_2(VAR_3, VAR_7);
 if (VAR_6 < 0) {
  FUNC_0("Unsupported power profile mode %d on arcturus\n", VAR_7);
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_3,
       VAR_2,
       1 << VAR_6);
 if (VAR_8) {
  FUNC_0("Fail to set workload type %d\n", VAR_6);
  return VAR_8;
 }

 VAR_3->power_profile_mode = VAR_7;

 return 0;
}
