
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_5(struct drm_i915_private *VAR_0,
    bool VAR_1)
{
 int VAR_2;
 int VAR_3;






 VAR_3 = FUNC_3(VAR_0, 1);

 FUNC_4(VAR_0);

 VAR_2 = FUNC_1(VAR_0, 1);
 if (!VAR_3)
  VAR_3 = VAR_2;

 VAR_2 = FUNC_3(VAR_0, 0);
 if (!VAR_3)
  VAR_3 = VAR_2;

 FUNC_2(VAR_0);

 if (VAR_1)
  FUNC_0(VAR_0);

 return VAR_3;
}
