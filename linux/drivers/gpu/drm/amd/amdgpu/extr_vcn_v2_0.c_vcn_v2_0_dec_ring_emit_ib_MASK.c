
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_job {int dummy; } ;
struct amdgpu_ib {unsigned int length_dw; int gpu_addr; } ;
struct TYPE_3__ {int ib_size; int ib_bar_high; int ib_bar_low; int ib_vmid; } ;
struct TYPE_4__ {TYPE_1__ internal; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;


 unsigned int FUNC_0 (struct amdgpu_job*) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct amdgpu_ring*,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;

void FUNC_5(struct amdgpu_ring *VAR_0,
          struct amdgpu_job *VAR_1,
          struct amdgpu_ib *VAR_2,
          uint32_t VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_0->adev;
 unsigned VAR_5 = FUNC_0(VAR_1);

 FUNC_2(VAR_0, FUNC_1(VAR_4->vcn.internal.ib_vmid, 0));
 FUNC_2(VAR_0, VAR_5);

 FUNC_2(VAR_0, FUNC_1(VAR_4->vcn.internal.ib_bar_low, 0));
 FUNC_2(VAR_0, FUNC_3(VAR_2->gpu_addr));
 FUNC_2(VAR_0, FUNC_1(VAR_4->vcn.internal.ib_bar_high, 0));
 FUNC_2(VAR_0, FUNC_4(VAR_2->gpu_addr));
 FUNC_2(VAR_0, FUNC_1(VAR_4->vcn.internal.ib_size, 0));
 FUNC_2(VAR_0, VAR_2->length_dw);
}
