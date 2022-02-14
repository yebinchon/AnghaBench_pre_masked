
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_5__* entries; } ;
struct TYPE_7__ {TYPE_1__ vddc_dependency_on_dispclk; } ;
struct TYPE_8__ {int num_ps; TYPE_2__ dyn_state; TYPE_5__* priv; TYPE_5__* ps; } ;
struct TYPE_9__ {TYPE_3__ dpm; } ;
struct radeon_device {TYPE_4__ pm; } ;
struct TYPE_10__ {struct TYPE_10__* ps_priv; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct radeon_device*) ;

void FUNC_2(struct radeon_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->pm.dpm.num_ps; VAR_1++) {
  FUNC_0(VAR_0->pm.dpm.ps[VAR_1].ps_priv);
 }
 FUNC_0(VAR_0->pm.dpm.ps);
 FUNC_0(VAR_0->pm.dpm.priv);
 FUNC_0(VAR_0->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries);
 FUNC_1(VAR_0);
}
