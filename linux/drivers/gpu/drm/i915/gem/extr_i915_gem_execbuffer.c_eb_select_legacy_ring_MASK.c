
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_execbuffer {struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_execbuffer2 {unsigned int flags; } ;
struct drm_file {int dummy; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int FUNC_1 (char*,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct drm_i915_private*,struct drm_file*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 unsigned int* VAR_7 ;

__attribute__((used)) static unsigned int
FUNC_5(struct i915_execbuffer *VAR_8,
        struct drm_file *VAR_9,
        struct drm_i915_gem_execbuffer2 *VAR_10)
{
 struct drm_i915_private *VAR_11 = VAR_8->i915;
 unsigned int VAR_12 = VAR_10->flags & VAR_6;

 if (VAR_12 != VAR_0 &&
     (VAR_10->flags & VAR_2)) {
  FUNC_1("execbuf with non bsd ring but with invalid "
     "bsd dispatch flags: %d\n", (int)(VAR_10->flags));
  return -1;
 }

 if (VAR_12 == VAR_0 && FUNC_4(VAR_11) > 1) {
  unsigned int VAR_13 = VAR_10->flags & VAR_2;

  if (VAR_13 == VAR_1) {
   VAR_13 = FUNC_3(VAR_11, VAR_9);
  } else if (VAR_13 >= VAR_3 &&
      VAR_13 <= VAR_4) {
   VAR_13 >>= VAR_5;
   VAR_13--;
  } else {
   FUNC_1("execbuf with unknown bsd ring: %u\n",
      VAR_13);
   return -1;
  }

  return FUNC_2(VAR_13);
 }

 if (VAR_12 >= FUNC_0(VAR_7)) {
  FUNC_1("execbuf with unknown ring: %u\n", VAR_12);
  return -1;
 }

 return VAR_7[VAR_12];
}
