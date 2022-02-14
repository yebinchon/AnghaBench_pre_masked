
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int vco; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
struct drm_i915_private {TYPE_2__ cdclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*,int ,int ,int) ;
 int FUNC_11 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_12(struct drm_i915_private *VAR_7, int VAR_8)
{
 u32 VAR_9;

 FUNC_9(VAR_8 != 8100000 && VAR_8 != 8640000);
 VAR_9 = FUNC_6(VAR_0);

 VAR_9 &= ~(FUNC_0(VAR_6) | FUNC_4(VAR_6) |
   FUNC_2(VAR_6));
 VAR_9 |= FUNC_3(VAR_6);
 if (VAR_8 == 8640000)
  VAR_9 |= FUNC_1(VAR_1,
         VAR_6);
 else
  VAR_9 |= FUNC_1(VAR_2,
         VAR_6);

 FUNC_7(VAR_0, VAR_9);
 FUNC_8(VAR_0);

 FUNC_7(VAR_3, FUNC_6(VAR_3) | VAR_4);

 if (FUNC_10(VAR_7, VAR_3, VAR_5, 5))
  FUNC_5("DPLL0 not locked\n");

 VAR_7->cdclk.hw.vco = VAR_8;


 FUNC_11(VAR_7, VAR_8);
}
