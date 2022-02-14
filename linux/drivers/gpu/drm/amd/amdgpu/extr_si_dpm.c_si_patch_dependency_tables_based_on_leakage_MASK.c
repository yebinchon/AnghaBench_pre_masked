
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vddci_dependency_on_mclk; int vddc_dependency_on_mclk; int vddc_dependency_on_sclk; } ;
struct TYPE_6__ {TYPE_1__ dyn_state; } ;
struct TYPE_5__ {TYPE_3__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*,int *) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_1(VAR_0,
        &VAR_0->pm.dpm.dyn_state.vddc_dependency_on_sclk);
 if (VAR_1)
  FUNC_0("Could not patch vddc_on_sclk leakage table\n");
 VAR_1 = FUNC_1(VAR_0,
        &VAR_0->pm.dpm.dyn_state.vddc_dependency_on_mclk);
 if (VAR_1)
  FUNC_0("Could not patch vddc_on_mclk leakage table\n");
 VAR_1 = FUNC_1(VAR_0,
        &VAR_0->pm.dpm.dyn_state.vddci_dependency_on_mclk);
 if (VAR_1)
  FUNC_0("Could not patch vddci_on_mclk leakage table\n");
 return VAR_1;
}
