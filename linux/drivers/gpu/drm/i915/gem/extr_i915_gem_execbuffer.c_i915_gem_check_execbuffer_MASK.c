
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_execbuffer2 {int flags; int DR4; int batch_start_offset; int batch_len; scalar_t__ DR1; scalar_t__ cliprects_ptr; scalar_t__ num_cliprects; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct drm_i915_gem_execbuffer2 *VAR_2)
{
 if (VAR_2->flags & VAR_1)
  return 0;


 if (!(VAR_2->flags & VAR_0)) {
  if (VAR_2->num_cliprects || VAR_2->cliprects_ptr)
   return 0;
 }

 if (VAR_2->DR4 == 0xffffffff) {
  FUNC_0("UXA submitting garbage DR4, fixing up\n");
  VAR_2->DR4 = 0;
 }
 if (VAR_2->DR1 || VAR_2->DR4)
  return 0;

 if ((VAR_2->batch_start_offset | VAR_2->batch_len) & 0x7)
  return 0;

 return 1;
}
