
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct radix_tree_root {int dummy; } ;
struct i915_vma {int node; int * exec_flags; int open_count; } ;
struct i915_lut_handle {int obj_link; TYPE_3__* ctx; int handle; } ;
struct i915_execbuffer {unsigned int buffer_count; TYPE_3__* gem_context; struct i915_vma** vma; TYPE_2__* args; int * flags; TYPE_5__* exec; TYPE_1__* context; int file; int unbound; int relocs; } ;
struct drm_i915_gem_object {int lut_list; } ;
struct TYPE_9__ {int handle; } ;
struct TYPE_8__ {int mutex; struct radix_tree_root handles_vma; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (struct i915_vma*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct i915_execbuffer*,unsigned int,unsigned int,struct i915_vma*) ;
 unsigned int FUNC_7 (struct i915_execbuffer*) ;
 int FUNC_8 (struct i915_execbuffer*) ;
 scalar_t__ FUNC_9 (TYPE_5__*,struct i915_vma*,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_13 (int ,int ) ;
 int FUNC_14 (struct drm_i915_gem_object*) ;
 int FUNC_15 (struct drm_i915_gem_object*) ;
 struct i915_lut_handle* FUNC_16 () ;
 int FUNC_17 (struct i915_lut_handle*) ;
 struct i915_vma* FUNC_18 (struct drm_i915_gem_object*,int ,int *) ;
 int FUNC_19 (struct i915_vma*) ;
 scalar_t__ FUNC_20 (struct i915_vma*) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct radix_tree_root*,int ,struct i915_vma*) ;
 struct i915_vma* FUNC_25 (struct radix_tree_root*,int ) ;
 scalar_t__ FUNC_26 (int) ;

__attribute__((used)) static int FUNC_27(struct i915_execbuffer *VAR_4)
{
 struct radix_tree_root *VAR_5 = &VAR_4->gem_context->handles_vma;
 struct drm_i915_gem_object *VAR_6;
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 if (FUNC_26(FUNC_10(VAR_4->gem_context)))
  return -VAR_0;

 FUNC_1(&VAR_4->relocs);
 FUNC_1(&VAR_4->unbound);

 VAR_8 = FUNC_7(VAR_4);

 FUNC_22(&VAR_4->gem_context->mutex);
 if (FUNC_26(FUNC_11(VAR_4->gem_context))) {
  VAR_9 = -VAR_1;
  goto err_ctx;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->buffer_count; VAR_7++) {
  u32 VAR_10 = VAR_4->exec[VAR_7].handle;
  struct i915_lut_handle *VAR_11;
  struct i915_vma *VAR_12;

  VAR_12 = FUNC_25(VAR_5, VAR_10);
  if (FUNC_20(VAR_12))
   goto add_vma;

  VAR_6 = FUNC_13(VAR_4->file, VAR_10);
  if (FUNC_26(!VAR_6)) {
   VAR_9 = -VAR_1;
   goto err_vma;
  }

  VAR_12 = FUNC_18(VAR_6, VAR_4->context->vm, ((void*)0));
  if (FUNC_2(VAR_12)) {
   VAR_9 = FUNC_3(VAR_12);
   goto err_obj;
  }

  VAR_11 = FUNC_16();
  if (FUNC_26(!VAR_11)) {
   VAR_9 = -VAR_2;
   goto err_obj;
  }

  VAR_9 = FUNC_24(VAR_5, VAR_10, VAR_12);
  if (FUNC_26(VAR_9)) {
   FUNC_17(VAR_11);
   goto err_obj;
  }


  if (!FUNC_4(&VAR_12->open_count))
   FUNC_19(VAR_12);
  VAR_11->handle = VAR_10;
  VAR_11->ctx = VAR_4->gem_context;

  FUNC_12(VAR_6);
  FUNC_21(&VAR_11->obj_link, &VAR_6->lut_list);
  FUNC_15(VAR_6);

add_vma:
  VAR_9 = FUNC_6(VAR_4, VAR_7, VAR_8, VAR_12);
  if (FUNC_26(VAR_9))
   goto err_vma;

  FUNC_0(VAR_12 != VAR_4->vma[VAR_7]);
  FUNC_0(VAR_12->exec_flags != &VAR_4->flags[VAR_7]);
  FUNC_0(FUNC_5(&VAR_12->node) &&
      FUNC_9(&VAR_4->exec[VAR_7], VAR_12, VAR_4->flags[VAR_7]));
 }

 FUNC_23(&VAR_4->gem_context->mutex);

 VAR_4->args->flags |= VAR_3;
 return FUNC_8(VAR_4);

err_obj:
 FUNC_14(VAR_6);
err_vma:
 VAR_4->vma[VAR_7] = ((void*)0);
err_ctx:
 FUNC_23(&VAR_4->gem_context->mutex);
 return VAR_9;
}
