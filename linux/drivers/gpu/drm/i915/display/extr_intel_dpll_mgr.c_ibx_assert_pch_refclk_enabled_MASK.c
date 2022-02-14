
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_4)
{
 u32 VAR_5;
 bool VAR_6;

 FUNC_4(!(FUNC_1(VAR_4) || FUNC_0(VAR_4)));

 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = !!(VAR_5 & (VAR_1 | VAR_0 |
       VAR_2));
 FUNC_3(!VAR_6, "PCH refclk assertion failure, should be active but is disabled\n");
}
