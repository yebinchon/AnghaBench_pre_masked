
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int crtc_clock; } ;
struct TYPE_11__ {int state; TYPE_2__ adjusted_mode; int enable; int crtc; } ;
struct intel_crtc_state {TYPE_5__ base; } ;
struct TYPE_7__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_9__ {int cdclk; } ;
struct TYPE_10__ {TYPE_3__ logical; } ;
struct TYPE_12__ {TYPE_4__ cdclk; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 TYPE_6__* FUNC_6 (int ) ;
 struct intel_crtc* FUNC_7 (int ) ;

int
FUNC_8(const struct intel_crtc_state *VAR_1,
       u32 VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_7(VAR_1->base.crtc);
 struct drm_i915_private *VAR_4 = FUNC_5(VAR_3->base.dev);
 int VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 if (!VAR_1->base.enable)
  return VAR_0;

 VAR_7 = VAR_1->base.adjusted_mode.crtc_clock;
 VAR_8 = FUNC_6(VAR_1->base.state)->cdclk.logical.cdclk;

 if (FUNC_1(VAR_4) || FUNC_0(VAR_4) >= 10)
  VAR_8 *= 2;

 if (FUNC_2(!VAR_7 || VAR_8 < VAR_7))
  return VAR_0;







 VAR_6 = FUNC_3(VAR_2) ? 2 : 3;
 VAR_9 = (1 << 16) * VAR_6 - 1;
 VAR_10 = (1 << 8) * ((VAR_8 << 8) / VAR_7);
 VAR_5 = FUNC_4(VAR_9, VAR_10);

 return VAR_5;
}
