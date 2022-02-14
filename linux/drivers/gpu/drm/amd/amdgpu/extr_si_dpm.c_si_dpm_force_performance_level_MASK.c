
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct si_ps {int performance_level_count; } ;
struct amdgpu_ps {int dummy; } ;
struct TYPE_3__ {int forced_level; struct amdgpu_ps* current_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct si_ps* FUNC_0 (struct amdgpu_ps*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_7,
       enum amd_dpm_forced_level VAR_8)
{
 struct amdgpu_device *VAR_9 = (struct amdgpu_device *)VAR_7;
 struct amdgpu_ps *VAR_10 = VAR_9->pm.dpm.current_ps;
 struct si_ps *VAR_11 = FUNC_0(VAR_10);
 u32 VAR_12 = VAR_11->performance_level_count;

 if (VAR_8 == VAR_1) {
  if (FUNC_1(VAR_9, VAR_4, VAR_12) != VAR_6)
   return -VAR_3;

  if (FUNC_1(VAR_9, VAR_5, 1) != VAR_6)
   return -VAR_3;
 } else if (VAR_8 == VAR_2) {
  if (FUNC_1(VAR_9, VAR_5, 0) != VAR_6)
   return -VAR_3;

  if (FUNC_1(VAR_9, VAR_4, 1) != VAR_6)
   return -VAR_3;
 } else if (VAR_8 == VAR_0) {
  if (FUNC_1(VAR_9, VAR_5, 0) != VAR_6)
   return -VAR_3;

  if (FUNC_1(VAR_9, VAR_4, VAR_12) != VAR_6)
   return -VAR_3;
 }

 VAR_9->pm.dpm.forced_level = VAR_8;

 return 0;
}
