
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vddci_dependency_on_mclk; int vddc_dependency_on_mclk; int vddc_dependency_on_sclk; } ;
struct TYPE_5__ {TYPE_1__ dyn_state; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;


 int FUNC_0 (struct radeon_device*,int *) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_0(VAR_0,
        &VAR_0->pm.dpm.dyn_state.vddc_dependency_on_sclk);
 VAR_1 = FUNC_0(VAR_0,
        &VAR_0->pm.dpm.dyn_state.vddc_dependency_on_mclk);
 VAR_1 = FUNC_0(VAR_0,
        &VAR_0->pm.dpm.dyn_state.vddci_dependency_on_mclk);
 return VAR_1;
}
