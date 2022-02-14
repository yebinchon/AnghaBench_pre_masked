
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vco; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
struct drm_i915_private {TYPE_2__ cdclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_2)
{
 FUNC_1(VAR_0, 0);


 if (FUNC_2(VAR_2,
        VAR_0, VAR_1, 1))
  FUNC_0("timeout waiting for DE PLL unlock\n");

 VAR_2->cdclk.hw.vco = 0;
}
