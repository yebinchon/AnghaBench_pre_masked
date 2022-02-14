
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_vma {int exec_flags; int obj; } ;
struct TYPE_2__ {scalar_t__ needs_unfenced; int has_fence; } ;
struct i915_execbuffer {int invalid_flags; int context_flags; TYPE_1__ reloc_cache; struct drm_i915_gem_exec_object2* exec; } ;
struct drm_i915_gem_exec_object2 {int flags; int offset; int handle; scalar_t__ pad_to_size; scalar_t__ alignment; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct i915_execbuffer *VAR_7,
  struct drm_i915_gem_exec_object2 *VAR_8,
  struct i915_vma *VAR_9)
{
 if (FUNC_6(VAR_8->flags & VAR_7->invalid_flags))
  return -VAR_0;

 if (FUNC_6(VAR_8->alignment && !FUNC_4(VAR_8->alignment)))
  return -VAR_0;





 if (FUNC_6(VAR_8->flags & VAR_4 &&
       VAR_8->offset != FUNC_1(VAR_8->offset & VAR_5)))
  return -VAR_0;


 if (VAR_8->flags & VAR_3) {
  if (FUNC_6(FUNC_5(VAR_8->pad_to_size)))
   return -VAR_0;
 } else {
  VAR_8->pad_to_size = 0;
 }

 if (FUNC_6(VAR_9->exec_flags)) {
  FUNC_0("Object [handle %d, index %d] appears more than once in object list\n",
     VAR_8->handle, (int)(VAR_8 - VAR_7->exec));
  return -VAR_0;
 }






 VAR_8->offset = FUNC_2(VAR_8->offset);

 if (!VAR_7->reloc_cache.has_fence) {
  VAR_8->flags &= ~VAR_1;
 } else {
  if ((VAR_8->flags & VAR_1 ||
       VAR_7->reloc_cache.needs_unfenced) &&
      FUNC_3(VAR_9->obj))
   VAR_8->flags |= VAR_2 | VAR_6;
 }

 if (!(VAR_8->flags & VAR_4))
  VAR_8->flags |= VAR_7->context_flags;

 return 0;
}
