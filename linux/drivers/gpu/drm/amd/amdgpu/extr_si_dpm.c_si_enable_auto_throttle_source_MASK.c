
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv7xx_power_info {int active_auto_throttle_sources; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_dpm_auto_throttle_src { ____Placeholder_amdgpu_dpm_auto_throttle_src } amdgpu_dpm_auto_throttle_src ;


 struct rv7xx_power_info* FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0,
        enum amdgpu_dpm_auto_throttle_src VAR_1,
        bool VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_0(VAR_0);

 if (VAR_2) {
  if (!(VAR_3->active_auto_throttle_sources & (1 << VAR_1))) {
   VAR_3->active_auto_throttle_sources |= 1 << VAR_1;
   FUNC_1(VAR_0, VAR_3->active_auto_throttle_sources);
  }
 } else {
  if (VAR_3->active_auto_throttle_sources & (1 << VAR_1)) {
   VAR_3->active_auto_throttle_sources &= ~(1 << VAR_1);
   FUNC_1(VAR_0, VAR_3->active_auto_throttle_sources);
  }
 }
}
