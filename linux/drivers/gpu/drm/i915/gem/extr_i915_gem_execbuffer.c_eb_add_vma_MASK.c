
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int start; } ;
struct i915_vma {int* exec_flags; TYPE_3__ node; int exec_link; int reloc_link; int exec_node; int exec_handle; } ;
struct TYPE_4__ {scalar_t__ has_fence; } ;
struct i915_execbuffer {int* flags; int unbound; TYPE_2__* args; struct i915_vma* batch; TYPE_1__ reloc_cache; struct i915_vma** vma; int relocs; int lut_size; int * buckets; struct drm_i915_gem_exec_object2* exec; } ;
struct drm_i915_gem_exec_object2 {int flags; int offset; scalar_t__ relocation_count; int handle; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (struct i915_execbuffer*,struct drm_i915_gem_exec_object2*,struct i915_vma*) ;
 int FUNC_3 (struct i915_vma*,int*) ;
 int FUNC_4 (struct i915_execbuffer*,struct drm_i915_gem_exec_object2*,struct i915_vma*) ;
 size_t FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct i915_vma*) ;
 int FUNC_8 (struct i915_vma*) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct i915_execbuffer *VAR_6,
    unsigned int VAR_7, unsigned VAR_8,
    struct i915_vma *VAR_9)
{
 struct drm_i915_gem_exec_object2 *VAR_10 = &VAR_6->exec[VAR_7];
 int VAR_11;

 FUNC_0(FUNC_7(VAR_9));

 if (!(VAR_6->args->flags & VAR_5)) {
  VAR_11 = FUNC_4(VAR_6, VAR_10, VAR_9);
  if (FUNC_10(VAR_11))
   return VAR_11;
 }

 if (VAR_6->lut_size > 0) {
  VAR_9->exec_handle = VAR_10->handle;
  FUNC_6(&VAR_9->exec_node,
          &VAR_6->buckets[FUNC_5(VAR_10->handle,
          VAR_6->lut_size)]);
 }

 if (VAR_10->relocation_count)
  FUNC_9(&VAR_9->reloc_link, &VAR_6->relocs);







 VAR_6->vma[VAR_7] = VAR_9;
 VAR_6->flags[VAR_7] = VAR_10->flags;
 VAR_9->exec_flags = &VAR_6->flags[VAR_7];
 if (VAR_7 == VAR_8) {
  if (VAR_10->relocation_count &&
      !(VAR_6->flags[VAR_7] & VAR_1))
   VAR_6->flags[VAR_7] |= VAR_4;
  if (VAR_6->reloc_cache.has_fence)
   VAR_6->flags[VAR_7] |= VAR_0;

  VAR_6->batch = VAR_9;
 }

 VAR_11 = 0;
 if (FUNC_2(VAR_6, VAR_10, VAR_9)) {
  if (VAR_10->offset != VAR_9->node.start) {
   VAR_10->offset = VAR_9->node.start | VAR_2;
   VAR_6->args->flags |= VAR_3;
  }
 } else {
  FUNC_3(VAR_9, VAR_9->exec_flags);

  FUNC_9(&VAR_9->exec_link, &VAR_6->unbound);
  if (FUNC_1(&VAR_9->node))
   VAR_11 = FUNC_8(VAR_9);
  if (FUNC_10(VAR_11))
   VAR_9->exec_flags = ((void*)0);
 }
 return VAR_11;
}
