
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ vco; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
struct drm_i915_private {TYPE_2__ cdclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 VAR_4 &= ~VAR_2;
 FUNC_2(VAR_0, VAR_4);


 if (FUNC_3((FUNC_1(VAR_0) & VAR_1) == 0, 1))
  FUNC_0("timeout waiting for CDCLK PLL unlock\n");

 VAR_3->cdclk.hw.vco = 0;
}
