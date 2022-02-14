
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cdclk; } ;
struct TYPE_5__ {TYPE_3__ hw; } ;
struct TYPE_4__ {int (* get_cdclk ) (struct drm_i915_private*,TYPE_3__*) ;} ;
struct drm_i915_private {TYPE_2__ cdclk; TYPE_1__ display; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,TYPE_3__*) ;

void FUNC_5(struct drm_i915_private *VAR_1)
{
 VAR_1->display.get_cdclk(VAR_1, &VAR_1->cdclk.hw);







 if (FUNC_3(VAR_1) || FUNC_2(VAR_1))
  FUNC_1(VAR_0,
      FUNC_0(VAR_1->cdclk.hw.cdclk, 1000));
}
