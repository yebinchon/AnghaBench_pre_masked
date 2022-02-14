
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {int dummy; } ;
struct intel_vgpu_workload {TYPE_5__* shadow_mm; TYPE_4__* req; } ;
struct execlist_ring_context {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;
struct TYPE_6__ {scalar_t__ shadow_pdps; } ;
struct TYPE_10__ {TYPE_1__ ppgtt_mm; int pincount; } ;
struct TYPE_9__ {TYPE_3__* hw_context; } ;
struct TYPE_8__ {TYPE_2__* state; } ;
struct TYPE_7__ {struct drm_i915_gem_object* obj; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct page* FUNC_2 (struct drm_i915_gem_object*,int ) ;
 struct execlist_ring_context* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct execlist_ring_context*,void*) ;

__attribute__((used)) static void FUNC_6(struct intel_vgpu_workload *VAR_1)
{
 struct drm_i915_gem_object *VAR_2 =
  VAR_1->req->hw_context->state->obj;
 struct execlist_ring_context *VAR_3;
 struct page *VAR_4;

 if (FUNC_0(!VAR_1->shadow_mm))
  return;

 if (FUNC_0(!FUNC_1(&VAR_1->shadow_mm->pincount)))
  return;

 VAR_4 = FUNC_2(VAR_2, VAR_0);
 VAR_3 = FUNC_3(VAR_4);
 FUNC_5(VAR_3,
   (void *)VAR_1->shadow_mm->ppgtt_mm.shadow_pdps);
 FUNC_4(VAR_4);
}
