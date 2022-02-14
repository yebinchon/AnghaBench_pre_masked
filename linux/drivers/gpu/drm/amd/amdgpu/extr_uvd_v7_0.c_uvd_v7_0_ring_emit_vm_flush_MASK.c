
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct amdgpu_vmhub {int ctx0_ptb_addr_lo32; } ;
struct amdgpu_ring {TYPE_2__* funcs; TYPE_1__* adev; } ;
struct TYPE_4__ {size_t vmhub; } ;
struct TYPE_3__ {struct amdgpu_vmhub* vmhub; } ;


 int FUNC_0 (struct amdgpu_ring*,unsigned int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct amdgpu_ring*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_0,
     unsigned VAR_1, uint64_t VAR_2)
{
 struct amdgpu_vmhub *VAR_3 = &VAR_0->adev->vmhub[VAR_0->funcs->vmhub];
 uint32_t VAR_4, VAR_5, VAR_6;

 VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2);


 VAR_4 = VAR_3->ctx0_ptb_addr_lo32 + VAR_1 * 2;
 VAR_5 = FUNC_1(VAR_2);
 VAR_6 = 0xffffffff;
 FUNC_2(VAR_0, VAR_4, VAR_5, VAR_6);
}
