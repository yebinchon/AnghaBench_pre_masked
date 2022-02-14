
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_5__ {int crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_6__ {int pipe; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct drm_i915_private* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(struct intel_encoder *VAR_6,
      const struct intel_crtc_state *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_2(VAR_6->base.dev);
 enum pipe VAR_9 = FUNC_3(VAR_7->base.crtc)->pipe;
 u32 VAR_10 = FUNC_0(FUNC_1(VAR_9));

 if ((VAR_10 & VAR_0) == 0)
  return 0;

 return VAR_10 & (VAR_1 |
        VAR_5 | VAR_2 |
        VAR_4 | VAR_3);
}
