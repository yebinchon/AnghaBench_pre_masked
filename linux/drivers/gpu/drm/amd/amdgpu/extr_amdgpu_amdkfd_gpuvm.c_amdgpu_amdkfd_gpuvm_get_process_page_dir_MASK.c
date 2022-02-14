
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {struct amdgpu_bo* bo; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct amdgpu_vm {int pd_phys_addr; TYPE_2__ root; } ;
struct amdgpu_device {scalar_t__ asic_type; } ;
struct TYPE_6__ {int bdev; } ;
struct amdgpu_bo {TYPE_3__ tbo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct amdgpu_device* FUNC_0 (int ) ;

uint64_t FUNC_1(void *VAR_2)
{
 struct amdgpu_vm *VAR_3 = (struct amdgpu_vm *)VAR_2;
 struct amdgpu_bo *VAR_4 = VAR_3->root.base.bo;
 struct amdgpu_device *VAR_5 = FUNC_0(VAR_4->tbo.bdev);

 if (VAR_5->asic_type < VAR_1)
  return VAR_3->pd_phys_addr >> VAR_0;
 return VAR_3->pd_phys_addr;
}
