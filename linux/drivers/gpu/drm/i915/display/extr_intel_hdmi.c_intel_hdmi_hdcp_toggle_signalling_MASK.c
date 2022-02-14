
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_hdmi {struct intel_connector* attached_connector; } ;
struct intel_digital_port {int base; struct intel_hdmi hdmi; } ;
struct TYPE_2__ {int dev; } ;
struct intel_connector {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct intel_connector*) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static
int FUNC_6(struct intel_digital_port *VAR_0,
          bool VAR_1)
{
 struct intel_hdmi *VAR_2 = &VAR_0->hdmi;
 struct intel_connector *VAR_3 = VAR_2->attached_connector;
 struct drm_i915_private *VAR_4 = FUNC_4(VAR_3->base.dev);
 int VAR_5;

 if (!VAR_1)
  FUNC_5(6, 60);

 VAR_5 = FUNC_2(&VAR_0->base, VAR_1);
 if (VAR_5) {
  FUNC_0("%s HDCP signalling failed (%d)\n",
     VAR_1 ? "Enable" : "Disable", VAR_5);
  return VAR_5;
 }





 if (FUNC_1(VAR_4) && VAR_1)
  return FUNC_3(VAR_3);

 return 0;
}
