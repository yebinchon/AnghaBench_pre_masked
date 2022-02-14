
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int start; } ;
struct i915_vma {unsigned int* exec_flags; scalar_t__ fence; TYPE_1__ node; } ;
struct i915_execbuffer {TYPE_2__* args; } ;
struct drm_i915_gem_exec_object2 {int offset; int alignment; int pad_to_size; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_1 (struct drm_i915_gem_exec_object2*,struct i915_vma*,unsigned int) ;
 struct drm_i915_gem_exec_object2* FUNC_2 (struct i915_execbuffer const*,struct i915_vma*) ;
 int FUNC_3 (struct i915_vma*,int ,int ,int) ;
 int FUNC_4 (struct i915_vma*) ;
 int FUNC_5 (struct i915_vma*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(const struct i915_execbuffer *VAR_18,
     struct i915_vma *VAR_19)
{
 struct drm_i915_gem_exec_object2 *VAR_20 = FUNC_2(VAR_18, VAR_19);
 unsigned int VAR_21 = *VAR_19->exec_flags;
 u64 VAR_22;
 int VAR_23;

 VAR_22 = VAR_10 | VAR_7;
 if (VAR_21 & VAR_2)
  VAR_22 |= VAR_5;





 if (!(VAR_21 & VAR_4))
  VAR_22 |= VAR_11;

 if (VAR_21 & VAR_17)
  VAR_22 |= VAR_6;

 if (VAR_21 & VAR_3) {
  VAR_22 |= VAR_20->offset | VAR_9;
  VAR_22 &= ~VAR_7;
 } else if (VAR_21 & VAR_16) {
  VAR_22 |= VAR_0 | VAR_8;
 }

 VAR_23 = FUNC_3(VAR_19,
      VAR_20->pad_to_size, VAR_20->alignment,
      VAR_22);
 if (VAR_23)
  return VAR_23;

 if (VAR_20->offset != VAR_19->node.start) {
  VAR_20->offset = VAR_19->node.start | VAR_12;
  VAR_18->args->flags |= VAR_13;
 }

 if (FUNC_6(VAR_21 & VAR_1)) {
  VAR_23 = FUNC_4(VAR_19);
  if (FUNC_6(VAR_23)) {
   FUNC_5(VAR_19);
   return VAR_23;
  }

  if (VAR_19->fence)
   VAR_21 |= VAR_14;
 }

 *VAR_19->exec_flags = VAR_21 | VAR_15;
 FUNC_0(FUNC_1(VAR_20, VAR_19, VAR_21));

 return 0;
}
