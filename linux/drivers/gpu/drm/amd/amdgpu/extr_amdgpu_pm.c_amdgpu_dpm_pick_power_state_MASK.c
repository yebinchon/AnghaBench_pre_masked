
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_ps {int class; int caps; int class2; } ;
struct TYPE_7__ {int new_active_crtc_count; int num_ps; struct amdgpu_ps* uvd_ps; struct amdgpu_ps* boot_ps; struct amdgpu_ps* ps; } ;
struct TYPE_8__ {TYPE_3__ dpm; } ;
struct TYPE_6__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_4__ pm; TYPE_2__ powerplay; } ;
typedef enum amd_pm_state_type { ____Placeholder_amd_pm_state_type } amd_pm_state_type ;
struct TYPE_5__ {scalar_t__ vblank_too_short; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;

__attribute__((used)) static struct amdgpu_ps *FUNC_1(struct amdgpu_device *VAR_13,
           enum amd_pm_state_type VAR_14)
{
 int VAR_15;
 struct amdgpu_ps *VAR_16;
 u32 VAR_17;
 bool VAR_18 = (VAR_13->pm.dpm.new_active_crtc_count < 2) ?
  1 : 0;


 if (VAR_18 && VAR_13->powerplay.pp_funcs->vblank_too_short) {
  if (FUNC_0(VAR_13))
   VAR_18 = 0;
 }




 if (VAR_14 == 128)
  VAR_14 = 138;

 if (VAR_14 == 140)
  VAR_14 = 128;

restart_search:

 for (VAR_15 = 0; VAR_15 < VAR_13->pm.dpm.num_ps; VAR_15++) {
  VAR_16 = &VAR_13->pm.dpm.ps[VAR_15];
  VAR_17 = VAR_16->class & VAR_10;
  switch (VAR_14) {

  case 139:
   if (VAR_17 == VAR_9) {
    if (VAR_16->caps & VAR_12) {
     if (VAR_18)
      return VAR_16;
    } else
     return VAR_16;
   }
   break;
  case 140:
   if (VAR_17 == VAR_8) {
    if (VAR_16->caps & VAR_12) {
     if (VAR_18)
      return VAR_16;
    } else
     return VAR_16;
   }
   break;
  case 128:
   if (VAR_17 == VAR_11) {
    if (VAR_16->caps & VAR_12) {
     if (VAR_18)
      return VAR_16;
    } else
     return VAR_16;
   }
   break;

  case 133:
   if (VAR_13->pm.dpm.uvd_ps)
    return VAR_13->pm.dpm.uvd_ps;
   else
    break;
  case 129:
   if (VAR_16->class & VAR_6)
    return VAR_16;
   break;
  case 132:
   if (VAR_16->class & VAR_5)
    return VAR_16;
   break;
  case 131:
   if (VAR_16->class & VAR_4)
    return VAR_16;
   break;
  case 130:
   if (VAR_16->class2 & VAR_0)
    return VAR_16;
   break;
  case 136:
   return VAR_13->pm.dpm.boot_ps;
  case 135:
   if (VAR_16->class & VAR_7)
    return VAR_16;
   break;
  case 137:
   if (VAR_16->class & VAR_3)
    return VAR_16;
   break;
  case 134:
   if (VAR_16->class2 & VAR_1)
    return VAR_16;
   break;
  case 138:
   if (VAR_16->class & VAR_2)
    return VAR_16;
   break;
  default:
   break;
  }
 }

 switch (VAR_14) {
 case 129:
  VAR_14 = 132;
  goto restart_search;
 case 132:
 case 131:
 case 130:
  if (VAR_13->pm.dpm.uvd_ps) {
   return VAR_13->pm.dpm.uvd_ps;
  } else {
   VAR_14 = 128;
   goto restart_search;
  }
 case 135:
  VAR_14 = 137;
  goto restart_search;
 case 137:
  VAR_14 = 139;
  goto restart_search;
 case 139:
 case 140:
 case 138:
  VAR_14 = 128;
  goto restart_search;
 default:
  break;
 }

 return ((void*)0);
}
