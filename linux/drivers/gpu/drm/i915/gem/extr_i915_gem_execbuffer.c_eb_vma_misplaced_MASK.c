
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int start; } ;
struct i915_vma {TYPE_1__ node; } ;
struct drm_i915_gem_exec_object2 {int pad_to_size; int offset; scalar_t__ alignment; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct i915_vma const*) ;

__attribute__((used)) static bool
FUNC_2(const struct drm_i915_gem_exec_object2 *VAR_5,
   const struct i915_vma *VAR_6,
   unsigned int VAR_7)
{
 if (VAR_6->node.size < VAR_5->pad_to_size)
  return 1;

 if (VAR_5->alignment && !FUNC_0(VAR_6->node.start, VAR_5->alignment))
  return 1;

 if (VAR_7 & VAR_1 &&
     VAR_6->node.start != VAR_5->offset)
  return 1;

 if (VAR_7 & VAR_3 &&
     VAR_6->node.start < VAR_0)
  return 1;

 if (!(VAR_7 & VAR_2) &&
     (VAR_6->node.start + VAR_6->node.size - 1) >> 32)
  return 1;

 if (VAR_7 & VAR_4 &&
     !FUNC_1(VAR_6))
  return 1;

 return 0;
}
