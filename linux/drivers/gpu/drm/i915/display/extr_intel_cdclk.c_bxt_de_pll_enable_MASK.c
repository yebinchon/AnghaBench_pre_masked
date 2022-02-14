
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
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_1(VAR_6, VAR_5->cdclk.hw.ref);
 u32 VAR_8;

 VAR_8 = FUNC_3(VAR_0);
 VAR_8 &= ~VAR_4;
 VAR_8 |= FUNC_0(VAR_7);
 FUNC_4(VAR_0, VAR_8);

 FUNC_4(VAR_1, VAR_3);


 if (FUNC_5(VAR_5,
      VAR_1, VAR_2, 1))
  FUNC_2("timeout waiting for DE PLL lock\n");

 VAR_5->cdclk.hw.vco = VAR_6;
}
