
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ size; int start; } ;
struct i915_vma {TYPE_2__ node; int size; TYPE_1__* vm; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {struct drm_i915_private* i915; } ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int ,int,unsigned int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int ,int,unsigned int) ;
 int FUNC_3 (struct i915_vma*) ;

__attribute__((used)) static bool FUNC_4(struct i915_vma *VAR_0,
       int VAR_1, unsigned int VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_0->vm->i915;
 u32 VAR_4, VAR_5;

 if (!FUNC_3(VAR_0))
  return 1;

 VAR_4 = FUNC_2(VAR_3, VAR_0->size, VAR_1, VAR_2);
 if (VAR_0->node.size < VAR_4)
  return 0;

 VAR_5 = FUNC_1(VAR_3, VAR_0->size, VAR_1, VAR_2);
 if (!FUNC_0(VAR_0->node.start, VAR_5))
  return 0;

 return 1;
}
