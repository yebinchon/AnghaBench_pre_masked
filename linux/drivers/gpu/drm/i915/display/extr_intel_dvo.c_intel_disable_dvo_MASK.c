
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
struct TYPE_6__ {TYPE_2__* dev_ops; int dvo_reg; } ;
struct intel_dvo {TYPE_3__ dev; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef int i915_reg_t ;
struct TYPE_5__ {int (* dpms ) (TYPE_3__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct intel_dvo* FUNC_2 (struct intel_encoder*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct intel_encoder *VAR_1,
         const struct intel_crtc_state *VAR_2,
         const struct drm_connector_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_4(VAR_1->base.dev);
 struct intel_dvo *VAR_5 = FUNC_2(VAR_1);
 i915_reg_t VAR_6 = VAR_5->dev.dvo_reg;
 u32 VAR_7 = FUNC_0(VAR_6);

 VAR_5->dev.dev_ops->dpms(&VAR_5->dev, 0);
 FUNC_1(VAR_6, VAR_7 & ~VAR_0);
 FUNC_0(VAR_6);
}
