
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* dev_ops; int dvo_reg; } ;
struct intel_dvo {TYPE_2__ dev; } ;
struct TYPE_6__ {struct drm_device* dev; } ;
struct intel_connector {TYPE_3__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int (* get_hw_state ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct intel_dvo* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 struct drm_i915_private* FUNC_3 (struct drm_device*) ;

__attribute__((used)) static bool FUNC_4(struct intel_connector *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->base.dev;
 struct drm_i915_private *VAR_3 = FUNC_3(VAR_2);
 struct intel_dvo *VAR_4 = FUNC_1(&VAR_1->base);
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4->dev.dvo_reg);

 if (!(VAR_5 & VAR_0))
  return 0;

 return VAR_4->dev.dev_ops->get_hw_state(&VAR_4->dev);
}
