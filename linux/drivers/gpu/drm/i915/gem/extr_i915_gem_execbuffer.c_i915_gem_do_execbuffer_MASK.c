
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sync_file {int file; } ;
struct i915_vma {int* exec_flags; scalar_t__ size; scalar_t__ private; struct i915_vma* batch; int fence; int obj; } ;
struct TYPE_4__ {int rq; } ;
struct i915_execbuffer {unsigned int* flags; int invalid_flags; int buffer_count; scalar_t__ batch_start_offset; scalar_t__ batch_len; int batch_flags; int gem_context; struct drm_i915_gem_exec_object2* exec; struct i915_vma* batch; struct i915_vma* request; TYPE_1__* engine; int context; TYPE_2__ reloc_cache; int lut_size; struct drm_i915_private* i915; struct i915_vma** vma; struct drm_i915_gem_execbuffer2* args; struct drm_file* file; } ;
struct drm_syncobj {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_execbuffer2 {int flags; int buffer_count; scalar_t__ batch_start_offset; scalar_t__ batch_len; int rsvd2; } ;
struct drm_i915_gem_exec_object2 {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;
struct dma_fence {int dummy; } ;
struct TYPE_3__ {int bond_execute; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct i915_vma*) ;
 int VAR_15 ;
 int FUNC_7 (struct i915_vma*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (struct i915_vma*,struct drm_file*) ;
 int FUNC_9 (struct i915_execbuffer*,struct drm_syncobj**) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct dma_fence*) ;
 int FUNC_12 (struct drm_file*) ;
 int FUNC_13 (struct i915_execbuffer*) ;
 int FUNC_14 (struct i915_execbuffer*) ;
 struct i915_vma* FUNC_15 (struct i915_execbuffer*) ;
 int FUNC_16 (struct i915_execbuffer*,struct drm_file*,struct drm_i915_gem_execbuffer2*) ;
 int FUNC_17 (struct i915_execbuffer*) ;
 int FUNC_18 (struct i915_execbuffer*) ;
 int FUNC_19 (struct i915_execbuffer*) ;
 int FUNC_20 (struct i915_execbuffer*) ;
 int FUNC_21 (struct i915_execbuffer*) ;
 scalar_t__ FUNC_22 (struct i915_execbuffer*) ;
 int FUNC_23 (int,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 struct i915_vma* FUNC_27 (int ,int *,int ,int ,int ) ;
 int FUNC_28 (struct drm_device*) ;
 int FUNC_29 (struct i915_vma*) ;
 int FUNC_30 (struct i915_vma*,struct dma_fence*) ;
 int FUNC_31 (struct i915_vma*,struct dma_fence*,int ) ;
 struct i915_vma* FUNC_32 (int ) ;
 int FUNC_33 (struct i915_vma*) ;
 int FUNC_34 (scalar_t__,struct i915_vma*) ;
 int FUNC_35 (scalar_t__) ;
 int FUNC_36 (int) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (int) ;
 int FUNC_39 (TYPE_2__*,struct drm_i915_private*) ;
 int FUNC_40 (struct i915_execbuffer*,struct drm_syncobj**) ;
 struct sync_file* FUNC_41 (int *) ;
 struct dma_fence* FUNC_42 (int ) ;
 struct drm_i915_private* FUNC_43 (struct drm_device*) ;
 int FUNC_44 (struct i915_vma*,int) ;
 scalar_t__ FUNC_45 (int) ;

__attribute__((used)) static int
FUNC_46(struct drm_device *VAR_21,
         struct drm_file *VAR_22,
         struct drm_i915_gem_execbuffer2 *VAR_23,
         struct drm_i915_gem_exec_object2 *VAR_24,
         struct drm_syncobj **VAR_25)
{
 struct drm_i915_private *VAR_26 = FUNC_43(VAR_21);
 struct i915_execbuffer VAR_27;
 struct dma_fence *VAR_28 = ((void*)0);
 struct dma_fence *VAR_29 = ((void*)0);
 struct sync_file *VAR_30 = ((void*)0);
 int VAR_31 = -1;
 int VAR_32;

 FUNC_0(VAR_17 & ~VAR_20);
 FUNC_0(VAR_18 &
       ~VAR_19);

 VAR_27.i915 = VAR_26;
 VAR_27.file = VAR_22;
 VAR_27.args = VAR_23;
 if (VAR_1 || !(VAR_23->flags & VAR_13))
  VAR_23->flags |= VAR_16;

 VAR_27.exec = VAR_24;
 VAR_27.vma = (struct i915_vma **)(VAR_24 + VAR_23->buffer_count + 1);
 VAR_27.vma[0] = ((void*)0);
 VAR_27.flags = (unsigned int *)(VAR_27.vma + VAR_23->buffer_count + 1);

 VAR_27.invalid_flags = VAR_19;
 FUNC_39(&VAR_27.reloc_cache, VAR_27.i915);

 VAR_27.buffer_count = VAR_23->buffer_count;
 VAR_27.batch_start_offset = VAR_23->batch_start_offset;
 VAR_27.batch_len = VAR_23->batch_len;

 VAR_27.batch_flags = 0;
 if (VAR_23->flags & VAR_14) {
  if (FUNC_5(VAR_26) >= 11)
   return -VAR_3;


  if (!FUNC_4(VAR_26))
   return -VAR_5;

  if (!FUNC_12(VAR_22) || !FUNC_10(VAR_0))
   return -VAR_5;

  VAR_27.batch_flags |= VAR_8;
 }
 if (VAR_23->flags & VAR_12)
  VAR_27.batch_flags |= VAR_7;

 if (VAR_23->flags & VAR_9) {
  VAR_28 = FUNC_42(FUNC_36(VAR_23->rsvd2));
  if (!VAR_28)
   return -VAR_2;
 }

 if (VAR_23->flags & VAR_11) {
  if (VAR_28) {
   VAR_32 = -VAR_2;
   goto err_in_fence;
  }

  VAR_29 = FUNC_42(FUNC_36(VAR_23->rsvd2));
  if (!VAR_29) {
   VAR_32 = -VAR_2;
   goto err_in_fence;
  }
 }

 if (VAR_23->flags & VAR_10) {
  VAR_31 = FUNC_25(VAR_15);
  if (VAR_31 < 0) {
   VAR_32 = VAR_31;
   goto err_exec_fence;
  }
 }

 VAR_32 = FUNC_13(&VAR_27);
 if (VAR_32)
  goto err_out_fence;

 FUNC_2(!VAR_27.lut_size);

 VAR_32 = FUNC_19(&VAR_27);
 if (FUNC_45(VAR_32))
  goto err_destroy;

 VAR_32 = FUNC_16(&VAR_27, VAR_22, VAR_23);
 if (FUNC_45(VAR_32))
  goto err_context;

 VAR_32 = FUNC_28(VAR_21);
 if (VAR_32)
  goto err_engine;

 VAR_32 = FUNC_18(&VAR_27);
 if (VAR_32) {







  VAR_23->flags &= ~VAR_16;
  goto err_vma;
 }

 if (FUNC_45(*VAR_27.batch->exec_flags & VAR_6)) {
  FUNC_1("Attempting to use self-modifying batch buffer\n");
  VAR_32 = -VAR_2;
  goto err_vma;
 }
 if (VAR_27.batch_start_offset > VAR_27.batch->size ||
     VAR_27.batch_len > VAR_27.batch->size - VAR_27.batch_start_offset) {
  FUNC_1("Attempting to use out-of-bounds batch\n");
  VAR_32 = -VAR_2;
  goto err_vma;
 }

 if (VAR_27.batch_len == 0)
  VAR_27.batch_len = VAR_27.batch->size - VAR_27.batch_start_offset;

 if (FUNC_22(&VAR_27)) {
  struct i915_vma *VAR_33;

  VAR_33 = FUNC_15(&VAR_27);
  if (FUNC_6(VAR_33)) {
   VAR_32 = FUNC_7(VAR_33);
   goto err_vma;
  }
 }





 if (VAR_27.batch_flags & VAR_8) {
  struct i915_vma *VAR_34;
  VAR_34 = FUNC_27(VAR_27.batch->obj, ((void*)0), 0, 0, 0);
  if (FUNC_6(VAR_34)) {
   VAR_32 = FUNC_7(VAR_34);
   goto err_vma;
  }

  VAR_27.batch = VAR_34;
 }


 FUNC_2(VAR_27.reloc_cache.rq);


 VAR_27.request = FUNC_32(VAR_27.context);
 if (FUNC_6(VAR_27.request)) {
  VAR_32 = FUNC_7(VAR_27.request);
  goto err_batch_unpin;
 }

 if (VAR_28) {
  VAR_32 = FUNC_30(VAR_27.request, VAR_28);
  if (VAR_32 < 0)
   goto err_request;
 }

 if (VAR_29) {
  VAR_32 = FUNC_31(VAR_27.request, VAR_29,
         VAR_27.engine->bond_execute);
  if (VAR_32 < 0)
   goto err_request;
 }

 if (VAR_25) {
  VAR_32 = FUNC_9(&VAR_27, VAR_25);
  if (VAR_32)
   goto err_request;
 }

 if (VAR_31 != -1) {
  VAR_30 = FUNC_41(&VAR_27.request->fence);
  if (!VAR_30) {
   VAR_32 = -VAR_4;
   goto err_request;
  }
 }
 VAR_27.request->batch = VAR_27.batch;
 if (VAR_27.batch->private)
  FUNC_34(VAR_27.batch->private, VAR_27.request);

 FUNC_44(VAR_27.request, VAR_27.batch_flags);
 VAR_32 = FUNC_20(&VAR_27);
err_request:
 FUNC_8(VAR_27.request, VAR_22);
 FUNC_29(VAR_27.request);

 if (VAR_25)
  FUNC_40(&VAR_27, VAR_25);

 if (VAR_30) {
  if (VAR_32 == 0) {
   FUNC_23(VAR_31, VAR_30->file);
   VAR_23->rsvd2 &= FUNC_3(31, 0);
   VAR_23->rsvd2 |= (u64)VAR_31 << 32;
   VAR_31 = -1;
  } else {
   FUNC_24(VAR_30->file);
  }
 }

err_batch_unpin:
 if (VAR_27.batch_flags & VAR_8)
  FUNC_33(VAR_27.batch);
 if (VAR_27.batch->private)
  FUNC_35(VAR_27.batch->private);
err_vma:
 if (VAR_27.exec)
  FUNC_17(&VAR_27);
 FUNC_37(&VAR_21->struct_mutex);
err_engine:
 FUNC_21(&VAR_27);
err_context:
 FUNC_26(VAR_27.gem_context);
err_destroy:
 FUNC_14(&VAR_27);
err_out_fence:
 if (VAR_31 != -1)
  FUNC_38(VAR_31);
err_exec_fence:
 FUNC_11(VAR_29);
err_in_fence:
 FUNC_11(VAR_28);
 return VAR_32;
}
