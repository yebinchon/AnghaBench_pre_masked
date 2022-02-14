
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct drm_i915_private*,int,int ,int ,int ) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct drm_i915_private*,int) ;

__attribute__((used)) static bool FUNC_5(struct drm_i915_private *VAR_3,
           enum phy VAR_4)
{
 bool VAR_5;

 if (!FUNC_4(VAR_3, VAR_4))
  return 0;

 VAR_5 = FUNC_3(VAR_3, VAR_4);

 if (VAR_4 == VAR_2)
  VAR_5 &= FUNC_2(VAR_3, VAR_4, FUNC_1(VAR_4),
         VAR_1, VAR_1);

 VAR_5 &= FUNC_2(VAR_3, VAR_4, FUNC_0(VAR_4),
        VAR_0, VAR_0);

 return VAR_5;
}
