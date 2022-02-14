
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_2, bool VAR_3)
{
 bool VAR_4 = FUNC_0(VAR_0) & VAR_1;

 FUNC_1(VAR_4 != VAR_3,
   "eDP PLL state assertion failure (expected %s, current %s)\n",
   FUNC_2(VAR_3), FUNC_2(VAR_4));
}
