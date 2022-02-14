
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int low_gm_node; } ;
struct intel_vgpu {TYPE_1__ gm; int id; struct intel_gvt* gvt; } ;
struct intel_gvt {struct drm_i915_private* dev_priv; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ drm; } ;


 int FUNC_0 (struct intel_vgpu*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct intel_vgpu*) ;
 int FUNC_6 (struct intel_vgpu*) ;
 int FUNC_7 (struct intel_vgpu*) ;
 int FUNC_8 (struct intel_vgpu*) ;

__attribute__((used)) static int FUNC_9(struct intel_vgpu *VAR_0)
{
 struct intel_gvt *VAR_1 = VAR_0->gvt;
 struct drm_i915_private *VAR_2 = VAR_1->dev_priv;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, 0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0, 1);
 if (VAR_3)
  goto out_free_aperture;

 FUNC_2("vgpu%d: alloc low GM start %llx size %llx\n", VAR_0->id,
       FUNC_5(VAR_0), FUNC_6(VAR_0));

 FUNC_2("vgpu%d: alloc high GM start %llx size %llx\n", VAR_0->id,
       FUNC_7(VAR_0), FUNC_8(VAR_0));

 return 0;
out_free_aperture:
 FUNC_3(&VAR_2->drm.struct_mutex);
 FUNC_1(&VAR_0->gm.low_gm_node);
 FUNC_4(&VAR_2->drm.struct_mutex);
 return VAR_3;
}
