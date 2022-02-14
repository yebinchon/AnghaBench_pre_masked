
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_5__ {int crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector_state {int dummy; } ;
struct TYPE_6__ {int pipe; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_3 (struct drm_device*) ;
 TYPE_3__* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct intel_encoder *VAR_2,
  const struct intel_crtc_state *VAR_3,
  const struct drm_connector_state *VAR_4)
{
 struct drm_device *VAR_5 = VAR_2->base.dev;
 struct drm_i915_private *VAR_6 = FUNC_3(VAR_5);


 FUNC_2(VAR_6,
         FUNC_4(VAR_3->base.crtc)->pipe);

 FUNC_1(VAR_0, FUNC_0(VAR_0) | VAR_1);
}
