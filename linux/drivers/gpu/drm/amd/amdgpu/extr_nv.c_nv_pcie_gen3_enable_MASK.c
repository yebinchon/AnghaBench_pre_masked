
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pcie_gen_mask; } ;
struct amdgpu_device {TYPE_2__ pm; TYPE_1__* pdev; } ;
struct TYPE_3__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_3)
{
 if (FUNC_0(VAR_3->pdev->bus))
  return;

 if (VAR_2 == 0)
  return;

 if (!(VAR_3->pm.pcie_gen_mask & (VAR_0 |
     VAR_1)))
  return;


}
