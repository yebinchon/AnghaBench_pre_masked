
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_private*,int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*,int) ;

__attribute__((used)) static int FUNC_7(struct drm_i915_private *VAR_3)
{
 u32 VAR_4;
 int VAR_5;





 FUNC_6(VAR_3, 0);

 VAR_4 = VAR_1 | VAR_0;
 FUNC_1((FUNC_0(VAR_2) & VAR_4) != VAR_4);

 FUNC_3(VAR_3);

 VAR_5 = FUNC_4(VAR_3, 1);
 if (VAR_5)
  goto err1;

 VAR_5 = FUNC_2(VAR_3, 0);
 if (VAR_5)
  goto err2;

 FUNC_5(VAR_3);

 VAR_5 = FUNC_4(VAR_3, 0);
 if (VAR_5)
  goto err2;

 return 0;

err2:

 FUNC_2(VAR_3, 1);
err1:
 FUNC_4(VAR_3, 0);

 return VAR_5;
}
