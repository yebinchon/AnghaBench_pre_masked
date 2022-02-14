
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;

void FUNC_5(struct drm_i915_private *VAR_2, bool VAR_3)
{
 u32 VAR_4;
 bool VAR_5;

 FUNC_2(VAR_2);
 VAR_4 = FUNC_4(VAR_2, VAR_0);
 FUNC_3(VAR_2);

 VAR_5 = VAR_4 & VAR_1;
 FUNC_0(VAR_5 != VAR_3,
      "DSI PLL state assertion failure (expected %s, current %s)\n",
   FUNC_1(VAR_3), FUNC_1(VAR_5));
}
