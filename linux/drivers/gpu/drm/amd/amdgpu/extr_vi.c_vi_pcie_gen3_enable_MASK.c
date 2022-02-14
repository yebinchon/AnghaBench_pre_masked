
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pcie_gen_mask; } ;
struct amdgpu_device {int flags; TYPE_2__ pm; TYPE_1__* pdev; } ;
struct TYPE_3__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_4)
{
 if (FUNC_0(VAR_4->pdev->bus))
  return;

 if (VAR_3 == 0)
  return;

 if (VAR_4->flags & VAR_0)
  return;

 if (!(VAR_4->pm.pcie_gen_mask & (VAR_1 |
     VAR_2)))
  return;


}
