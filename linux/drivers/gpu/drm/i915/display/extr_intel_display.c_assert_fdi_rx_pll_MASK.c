
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int ,int ) ;
 int FUNC_3 (int) ;

void FUNC_4(struct drm_i915_private *VAR_1,
         enum pipe VAR_2, bool VAR_3)
{
 u32 VAR_4;
 bool VAR_5;

 VAR_4 = FUNC_1(FUNC_0(VAR_2));
 VAR_5 = !!(VAR_4 & VAR_0);
 FUNC_2(VAR_5 != VAR_3,
      "FDI RX PLL assertion failure (expected %s, current %s)\n",
   FUNC_3(VAR_3), FUNC_3(VAR_5));
}
