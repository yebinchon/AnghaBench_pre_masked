
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_type {int resolution; int weight; int fence; void* high_gm_size; void* low_gm_size; } ;
struct intel_vgpu_creation_params {int primary; void* high_gm_sz; void* low_gm_sz; int resolution; int weight; int fence_sz; scalar_t__ handle; } ;
struct intel_vgpu {int dummy; } ;
struct intel_gvt {int lock; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (struct intel_vgpu*) ;
 struct intel_vgpu* FUNC_2 (struct intel_gvt*,struct intel_vgpu_creation_params*) ;
 int FUNC_3 (struct intel_gvt*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct intel_vgpu *FUNC_6(struct intel_gvt *VAR_0,
    struct intel_vgpu_type *VAR_1)
{
 struct intel_vgpu_creation_params VAR_2;
 struct intel_vgpu *VAR_3;

 VAR_2.handle = 0;
 VAR_2.primary = 1;
 VAR_2.low_gm_sz = VAR_1->low_gm_size;
 VAR_2.high_gm_sz = VAR_1->high_gm_size;
 VAR_2.fence_sz = VAR_1->fence;
 VAR_2.weight = VAR_1->weight;
 VAR_2.resolution = VAR_1->resolution;


 VAR_2.low_gm_sz = FUNC_0(VAR_2.low_gm_sz);
 VAR_2.high_gm_sz = FUNC_0(VAR_2.high_gm_sz);

 FUNC_4(&VAR_0->lock);
 VAR_3 = FUNC_2(VAR_0, &VAR_2);
 if (!FUNC_1(VAR_3))

  FUNC_3(VAR_0);
 FUNC_5(&VAR_0->lock);

 return VAR_3;
}
