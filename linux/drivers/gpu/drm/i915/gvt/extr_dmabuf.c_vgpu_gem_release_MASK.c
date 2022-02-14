
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu_fb_info {struct intel_vgpu_dmabuf_obj* obj; } ;
struct intel_vgpu_dmabuf_obj {struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int dmabuf_lock; } ;
struct TYPE_2__ {int * dma_buf; } ;
struct drm_i915_gem_object {TYPE_1__ base; struct intel_vgpu_fb_info* gvt_info; } ;


 int FUNC_0 (struct intel_vgpu_dmabuf_obj*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_gem_object *VAR_0)
{

 struct intel_vgpu_fb_info *VAR_1 = VAR_0->gvt_info;
 struct intel_vgpu_dmabuf_obj *VAR_2 = VAR_1->obj;
 struct intel_vgpu *VAR_3 = VAR_2->vgpu;

 if (VAR_3) {
  FUNC_1(&VAR_3->dmabuf_lock);
  VAR_0->base.dma_buf = ((void*)0);
  FUNC_0(VAR_2);
  FUNC_2(&VAR_3->dmabuf_lock);
 } else {

  VAR_0->base.dma_buf = ((void*)0);
  FUNC_0(VAR_2);
 }
}
