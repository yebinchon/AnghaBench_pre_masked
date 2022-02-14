
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int vco; int ref; } ;
struct TYPE_3__ {TYPE_2__ hw; } ;
struct drm_i915_private {TYPE_1__ cdclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_1(VAR_4, VAR_3->cdclk.hw.ref);
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 FUNC_4(VAR_0, VAR_6);

 VAR_6 |= VAR_2;
 FUNC_4(VAR_0, VAR_6);


 if (FUNC_5((FUNC_3(VAR_0) & VAR_1) != 0, 1))
  FUNC_2("timeout waiting for CDCLK PLL lock\n");

 VAR_3->cdclk.hw.vco = VAR_4;
}
