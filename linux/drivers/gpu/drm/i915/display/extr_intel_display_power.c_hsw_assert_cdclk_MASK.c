
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_1);







 if (VAR_6 & VAR_0)
  FUNC_0("CDCLK source is not LCPLL\n");

 if (VAR_6 & VAR_2)
  FUNC_0("LCPLL is disabled\n");

 if ((VAR_6 & VAR_3) != VAR_4)
  FUNC_0("LCPLL not using non-SSC reference\n");
}
