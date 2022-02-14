
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int start; scalar_t__ size; } ;
struct i915_vma {unsigned int* exec_flags; scalar_t__ fence; TYPE_1__ node; } ;
struct i915_execbuffer {int dummy; } ;
struct drm_i915_gem_exec_object2 {int offset; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct drm_i915_gem_exec_object2 const*,struct i915_vma*,unsigned int) ;
 unsigned int FUNC_1 (struct i915_vma*,int ,int ,int) ;
 unsigned int FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (struct i915_vma*) ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static inline bool
FUNC_5(struct i915_execbuffer *VAR_9,
    const struct drm_i915_gem_exec_object2 *VAR_10,
    struct i915_vma *VAR_11)
{
 unsigned int VAR_12 = *VAR_11->exec_flags;
 u64 VAR_13;

 if (VAR_11->node.size)
  VAR_13 = VAR_11->node.start;
 else
  VAR_13 = VAR_10->offset & VAR_5;

 VAR_13 |= VAR_6 | VAR_3 | VAR_4;
 if (FUNC_4(VAR_12 & VAR_1))
  VAR_13 |= VAR_2;

 if (FUNC_4(FUNC_1(VAR_11, 0, 0, VAR_13)))
  return 0;

 if (FUNC_4(VAR_12 & VAR_0)) {
  if (FUNC_4(FUNC_2(VAR_11))) {
   FUNC_3(VAR_11);
   return 0;
  }

  if (VAR_11->fence)
   VAR_12 |= VAR_7;
 }

 *VAR_11->exec_flags = VAR_12 | VAR_8;
 return !FUNC_0(VAR_10, VAR_11, VAR_12);
}
