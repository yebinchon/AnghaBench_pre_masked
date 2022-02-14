
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ sclk; scalar_t__ mclk; } ;
struct TYPE_11__ {TYPE_3__ max_clock_voltage_on_ac; TYPE_3__ max_clock_voltage_on_dc; } ;
struct TYPE_8__ {int bNoFan; } ;
struct TYPE_9__ {TYPE_1__ fanInfo; } ;
struct pp_hwmgr {int pm_en; TYPE_7__* pptable_func; TYPE_6__* hwmgr_func; scalar_t__ adev; TYPE_4__ dyn_state; TYPE_2__ thermal_controller; } ;
struct TYPE_12__ {int dpm_enabled; int no_fan; } ;
struct amdgpu_device {TYPE_5__ pm; } ;
struct TYPE_14__ {int (* pptable_init ) (struct pp_hwmgr*) ;int (* pptable_fini ) (struct pp_hwmgr*) ;} ;
struct TYPE_13__ {int (* backend_init ) (struct pp_hwmgr*) ;int (* backend_fini ) (struct pp_hwmgr*) ;} ;


 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int FUNC_7 (struct pp_hwmgr*) ;
 int FUNC_8 (struct pp_hwmgr*) ;
 int FUNC_9 (struct pp_hwmgr*) ;

int FUNC_10(struct pp_hwmgr *VAR_0)
{
 int VAR_1 = 0;

 if (!VAR_0->pm_en)
  return 0;

 if (!VAR_0->pptable_func ||
     !VAR_0->pptable_func->pptable_init ||
     !VAR_0->hwmgr_func->backend_init) {
  VAR_0->pm_en = 0;
  FUNC_3("dpm not supported \n");
  return 0;
 }

 VAR_1 = VAR_0->pptable_func->pptable_init(VAR_0);
 if (VAR_1)
  goto err;

 ((struct amdgpu_device *)VAR_0->adev)->pm.no_fan =
    VAR_0->thermal_controller.fanInfo.bNoFan;

 VAR_1 = VAR_0->hwmgr_func->backend_init(VAR_0);
 if (VAR_1)
  goto err1;

 if ((VAR_0->dyn_state.max_clock_voltage_on_dc.sclk == 0) ||
   (VAR_0->dyn_state.max_clock_voltage_on_dc.mclk == 0))
   VAR_0->dyn_state.max_clock_voltage_on_dc =
     VAR_0->dyn_state.max_clock_voltage_on_ac;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  goto err2;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  goto err2;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  goto err2;
 VAR_1 = FUNC_2(VAR_0);
 VAR_1 |= FUNC_5(VAR_0);
 if (VAR_1)
  goto err2;

 ((struct amdgpu_device *)VAR_0->adev)->pm.dpm_enabled = 1;

 return 0;
err2:
 if (VAR_0->hwmgr_func->backend_fini)
  VAR_0->hwmgr_func->backend_fini(VAR_0);
err1:
 if (VAR_0->pptable_func->pptable_fini)
  VAR_0->pptable_func->pptable_fini(VAR_0);
err:
 return VAR_1;
}
