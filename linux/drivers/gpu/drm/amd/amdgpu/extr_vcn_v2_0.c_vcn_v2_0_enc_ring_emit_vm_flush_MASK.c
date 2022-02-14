
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct amdgpu_vmhub {scalar_t__ ctx0_ptb_addr_lo32; } ;
struct amdgpu_ring {TYPE_2__* funcs; TYPE_1__* adev; } ;
struct TYPE_4__ {size_t vmhub; } ;
struct TYPE_3__ {struct amdgpu_vmhub* vmhub; } ;


 int FUNC_0 (struct amdgpu_ring*,unsigned int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct amdgpu_ring*,scalar_t__,int ,int) ;

void FUNC_3(struct amdgpu_ring *VAR_0,
    unsigned int VAR_1, uint64_t VAR_2)
{
 struct amdgpu_vmhub *VAR_3 = &VAR_0->adev->vmhub[VAR_0->funcs->vmhub];

 VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2);


 FUNC_2(VAR_0, VAR_3->ctx0_ptb_addr_lo32 + VAR_1 * 2,
     FUNC_1(VAR_2), 0xffffffff);
}
