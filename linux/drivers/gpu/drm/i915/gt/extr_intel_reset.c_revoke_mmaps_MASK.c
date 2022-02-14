
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
struct intel_gt {TYPE_9__* i915; TYPE_2__* ggtt; } ;
struct TYPE_14__ {int offset; } ;
struct TYPE_15__ {TYPE_5__ partial; } ;
struct i915_vma {int size; TYPE_6__ ggtt_view; TYPE_4__* obj; TYPE_1__* fence; } ;
struct drm_vma_offset_node {int dummy; } ;
struct TYPE_17__ {TYPE_7__* anon_inode; } ;
struct TYPE_18__ {TYPE_8__ drm; } ;
struct TYPE_16__ {int i_mapping; } ;
struct TYPE_12__ {struct drm_vma_offset_node vma_node; } ;
struct TYPE_13__ {TYPE_3__ base; } ;
struct TYPE_11__ {int num_fences; TYPE_1__* fence_regs; } ;
struct TYPE_10__ {int vma; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct i915_vma* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_vma_offset_node*) ;
 int FUNC_3 (struct i915_vma*) ;
 int FUNC_4 (int ,scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_5(struct intel_gt *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->ggtt->num_fences; VAR_2++) {
  struct drm_vma_offset_node *VAR_3;
  struct i915_vma *VAR_4;
  u64 VAR_5;

  VAR_4 = FUNC_1(VAR_1->ggtt->fence_regs[VAR_2].vma);
  if (!VAR_4)
   continue;

  if (!FUNC_3(VAR_4))
   continue;

  FUNC_0(VAR_4->fence != &VAR_1->ggtt->fence_regs[VAR_2]);
  VAR_3 = &VAR_4->obj->base.vma_node;
  VAR_5 = VAR_4->ggtt_view.partial.offset << VAR_0;
  FUNC_4(VAR_1->i915->drm.anon_inode->i_mapping,
        FUNC_2(VAR_3) + VAR_5,
        VAR_4->size,
        1);
 }
}
