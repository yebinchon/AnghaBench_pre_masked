
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dev; } ;
struct intel_connector {TYPE_1__ base; } ;
struct TYPE_5__ {int cdclk; } ;
struct TYPE_6__ {TYPE_2__ hw; } ;
struct drm_i915_private {TYPE_3__ cdclk; int rawclk_freq; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(struct intel_connector *VAR_0, u32 VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_0->base.dev);
 int VAR_3;

 if (FUNC_1(VAR_2))
  VAR_3 = FUNC_2(VAR_2->rawclk_freq);
 else
  VAR_3 = FUNC_2(VAR_2->cdclk.hw.cdclk);

 return FUNC_0(VAR_3, VAR_1 * 32);
}
