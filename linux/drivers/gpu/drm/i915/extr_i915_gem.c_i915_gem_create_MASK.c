
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {int base; } ;
struct drm_file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_gem_object*) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_file*,int *,int *) ;
 struct drm_i915_gem_object* FUNC_3 (struct drm_i915_private*,scalar_t__) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_6(struct drm_file *VAR_2,
  struct drm_i915_private *VAR_3,
  u64 *VAR_4,
  u32 *VAR_5)
{
 struct drm_i915_gem_object *VAR_6;
 u32 VAR_7;
 u64 VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(*VAR_4, VAR_1);
 if (VAR_8 == 0)
  return -VAR_0;


 VAR_6 = FUNC_3(VAR_3, VAR_8);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_9 = FUNC_2(VAR_2, &VAR_6->base, &VAR_7);

 FUNC_4(VAR_6);
 if (VAR_9)
  return VAR_9;

 *VAR_5 = VAR_7;
 *VAR_4 = VAR_8;
 return 0;
}
