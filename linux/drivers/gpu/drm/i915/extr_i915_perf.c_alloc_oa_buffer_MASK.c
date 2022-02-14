
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_vma {int dummy; } ;
struct TYPE_3__ {struct i915_vma* vma; struct i915_vma* vaddr; } ;
struct i915_perf_stream {TYPE_1__ oa_buffer; struct drm_i915_private* dev_priv; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
typedef struct i915_vma drm_i915_gem_object ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,struct i915_vma*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct i915_vma*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct i915_vma*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (struct i915_vma*) ;
 int FUNC_7 (struct i915_vma*) ;
 struct i915_vma* FUNC_8 (struct drm_i915_private*,scalar_t__) ;
 struct i915_vma* FUNC_9 (struct i915_vma*,int *,int ,scalar_t__,int ) ;
 struct i915_vma* FUNC_10 (struct i915_vma*,int ) ;
 int FUNC_11 (struct i915_vma*) ;
 int FUNC_12 (struct i915_vma*,int ) ;
 int FUNC_13 (struct i915_vma*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct i915_perf_stream *VAR_6)
{
 struct drm_i915_gem_object *VAR_7;
 struct drm_i915_private *VAR_8 = VAR_6->dev_priv;
 struct i915_vma *VAR_9;
 int VAR_10;

 if (FUNC_6(VAR_6->oa_buffer.vma))
  return -VAR_0;

 VAR_10 = FUNC_14(&VAR_8->drm);
 if (VAR_10)
  return VAR_10;

 FUNC_1(VAR_3);
 FUNC_0(VAR_3 < VAR_4 || VAR_3 > VAR_5);

 VAR_7 = FUNC_8(VAR_8, VAR_3);
 if (FUNC_4(VAR_7)) {
  FUNC_3("Failed to allocate OA buffer\n");
  VAR_10 = FUNC_5(VAR_7);
  goto unlock;
 }

 FUNC_12(VAR_7, VAR_1);


 VAR_9 = FUNC_9(VAR_7, ((void*)0), 0, VAR_5, 0);
 if (FUNC_4(VAR_9)) {
  VAR_10 = FUNC_5(VAR_9);
  goto err_unref;
 }
 VAR_6->oa_buffer.vma = VAR_9;

 VAR_6->oa_buffer.vaddr =
  FUNC_10(VAR_7, VAR_2);
 if (FUNC_4(VAR_6->oa_buffer.vaddr)) {
  VAR_10 = FUNC_5(VAR_6->oa_buffer.vaddr);
  goto err_unpin;
 }

 FUNC_2("OA Buffer initialized, gtt offset = 0x%x, vaddr = %p\n",
    FUNC_13(VAR_6->oa_buffer.vma),
    VAR_6->oa_buffer.vaddr);

 goto unlock;

err_unpin:
 FUNC_7(VAR_9);

err_unref:
 FUNC_11(VAR_7);

 VAR_6->oa_buffer.vaddr = ((void*)0);
 VAR_6->oa_buffer.vma = ((void*)0);

unlock:
 FUNC_15(&VAR_8->drm.struct_mutex);
 return VAR_10;
}
