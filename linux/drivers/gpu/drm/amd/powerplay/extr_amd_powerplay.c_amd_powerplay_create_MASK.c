
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pp_hwmgr {int not_vf; int pm_en; int * display_config; int feature_mask; int chip_id; int chip_family; int smu_lock; int device; struct amdgpu_device* adev; } ;
struct TYPE_4__ {int * pp_funcs; struct pp_hwmgr* pp_handle; } ;
struct TYPE_3__ {int pm_display_cfg; int pp_feature; } ;
struct amdgpu_device {TYPE_2__ powerplay; TYPE_1__ pm; int asic_type; int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct amdgpu_device*) ;
 struct pp_hwmgr* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_5)
{
 struct pp_hwmgr *VAR_6;

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_2(sizeof(struct pp_hwmgr), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 VAR_6->adev = VAR_5;
 VAR_6->not_vf = !FUNC_1(VAR_5);
 VAR_6->pm_en = (VAR_3 && VAR_6->not_vf) ? 1 : 0;
 VAR_6->device = FUNC_0(VAR_5);
 FUNC_3(&VAR_6->smu_lock);
 VAR_6->chip_family = VAR_5->family;
 VAR_6->chip_id = VAR_5->asic_type;
 VAR_6->feature_mask = VAR_5->pm.pp_feature;
 VAR_6->display_config = &VAR_5->pm.pm_display_cfg;
 VAR_5->powerplay.pp_handle = VAR_6;
 VAR_5->powerplay.pp_funcs = &VAR_4;
 return 0;
}
