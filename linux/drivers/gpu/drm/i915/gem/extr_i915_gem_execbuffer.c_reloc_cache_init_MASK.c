
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allocated; } ;
struct reloc_cache {int page; int gen; int has_fence; scalar_t__ rq_size; int * rq; TYPE_1__ node; int needs_unfenced; int use_64bit_reloc; int has_llc; scalar_t__ vaddr; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {int unfenced_needs_alignment; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 TYPE_2__* FUNC_3 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_4(struct reloc_cache *VAR_0,
        struct drm_i915_private *VAR_1)
{
 VAR_0->page = -1;
 VAR_0->vaddr = 0;

 VAR_0->gen = FUNC_2(VAR_1);
 VAR_0->has_llc = FUNC_1(VAR_1);
 VAR_0->use_64bit_reloc = FUNC_0(VAR_1);
 VAR_0->has_fence = VAR_0->gen < 4;
 VAR_0->needs_unfenced = FUNC_3(VAR_1)->unfenced_needs_alignment;
 VAR_0->node.allocated = 0;
 VAR_0->rq = ((void*)0);
 VAR_0->rq_size = 0;
}
