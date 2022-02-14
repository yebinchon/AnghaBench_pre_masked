
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu {struct intel_gvt* gvt; } ;
struct TYPE_4__ {int vgpu_allocated_fence_num; } ;
struct TYPE_3__ {int vgpu_allocated_high_gm_size; int vgpu_allocated_low_gm_size; } ;
struct intel_gvt {TYPE_2__ fence; TYPE_1__ gm; } ;


 scalar_t__ FUNC_0 (struct intel_vgpu*) ;
 scalar_t__ FUNC_1 (struct intel_vgpu*) ;
 scalar_t__ FUNC_2 (struct intel_vgpu*) ;

__attribute__((used)) static void FUNC_3(struct intel_vgpu *VAR_0)
{
 struct intel_gvt *VAR_1 = VAR_0->gvt;

 VAR_1->gm.vgpu_allocated_low_gm_size -= FUNC_0(VAR_0);
 VAR_1->gm.vgpu_allocated_high_gm_size -= FUNC_2(VAR_0);
 VAR_1->fence.vgpu_allocated_fence_num -= FUNC_1(VAR_0);
}
