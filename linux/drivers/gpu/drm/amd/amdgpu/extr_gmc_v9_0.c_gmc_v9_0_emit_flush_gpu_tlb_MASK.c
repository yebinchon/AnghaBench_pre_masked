
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct amdgpu_vmhub {scalar_t__ vm_inv_eng0_ack; scalar_t__ vm_inv_eng0_req; scalar_t__ ctx0_ptb_addr_hi32; scalar_t__ ctx0_ptb_addr_lo32; } ;
struct amdgpu_ring {unsigned int vm_inv_eng; TYPE_1__* funcs; struct amdgpu_device* adev; } ;
struct amdgpu_device {struct amdgpu_vmhub* vmhub; } ;
struct TYPE_2__ {size_t vmhub; } ;


 int FUNC_0 (struct amdgpu_ring*,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_1 (struct amdgpu_ring*,scalar_t__,int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static uint64_t FUNC_5(struct amdgpu_ring *VAR_0,
         unsigned VAR_1, uint64_t VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_0->adev;
 struct amdgpu_vmhub *VAR_4 = &VAR_3->vmhub[VAR_0->funcs->vmhub];
 uint32_t VAR_5 = FUNC_2(VAR_1, 0);
 unsigned VAR_6 = VAR_0->vm_inv_eng;

 FUNC_1(VAR_0, VAR_4->ctx0_ptb_addr_lo32 + (2 * VAR_1),
         FUNC_3(VAR_2));

 FUNC_1(VAR_0, VAR_4->ctx0_ptb_addr_hi32 + (2 * VAR_1),
         FUNC_4(VAR_2));

 FUNC_0(VAR_0, VAR_4->vm_inv_eng0_req + VAR_6,
         VAR_4->vm_inv_eng0_ack + VAR_6,
         VAR_5, 1 << VAR_1);

 return VAR_2;
}
