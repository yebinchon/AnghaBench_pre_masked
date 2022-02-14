
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pp_hwmgr {TYPE_5__* hwmgr_func; } ;
struct TYPE_9__ {struct pp_hwmgr* pp_handle; TYPE_1__* pp_funcs; } ;
struct TYPE_8__ {scalar_t__ decode_image_width; } ;
struct TYPE_7__ {int mutex; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_4__ powerplay; TYPE_3__ uvd; TYPE_2__ pm; int smu; } ;
struct TYPE_10__ {int (* update_nbdpm_pstate ) (struct pp_hwmgr*,int,int) ;} ;
struct TYPE_6__ {scalar_t__ set_powergating_by_smu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct amdgpu_device*,int ,int) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct pp_hwmgr*,int,int) ;

void FUNC_7(struct amdgpu_device *VAR_3, bool VAR_4)
{
 int VAR_5 = 0;
 if (FUNC_2(VAR_3)) {
     VAR_5 = FUNC_5(&VAR_3->smu, VAR_0, VAR_4);
     if (VAR_5)
  FUNC_0("[SW SMU]: dpm enable uvd failed, state = %s, ret = %d. \n",
     VAR_4 ? "true" : "false", VAR_5);
 } else if (VAR_3->powerplay.pp_funcs->set_powergating_by_smu) {

  FUNC_3(&VAR_3->pm.mutex);
  FUNC_1(VAR_3, VAR_0, !VAR_4);
  FUNC_4(&VAR_3->pm.mutex);
 }

 if (VAR_3->asic_type == VAR_1 &&
  VAR_3->uvd.decode_image_width >= VAR_2) {
  struct pp_hwmgr *VAR_6 = VAR_3->powerplay.pp_handle;

  if (VAR_6 && VAR_6->hwmgr_func &&
      VAR_6->hwmgr_func->update_nbdpm_pstate)
   VAR_6->hwmgr_func->update_nbdpm_pstate(VAR_6,
              !VAR_4,
              1);
 }
}
