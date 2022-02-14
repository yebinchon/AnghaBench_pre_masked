
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_dp {int* downstream_ports; int dpcd; } ;
struct intel_digital_port {struct intel_encoder base; } ;
struct drm_i915_private {int max_dotclk_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_digital_port* FUNC_0 (struct intel_dp*) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int,int) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct intel_dp *VAR_2)
{
 struct intel_digital_port *VAR_3 = FUNC_0(VAR_2);
 struct intel_encoder *VAR_4 = &VAR_3->base;
 struct drm_i915_private *VAR_5 = FUNC_3(VAR_4->base.dev);
 int VAR_6 = VAR_5->max_dotclk_freq;
 int VAR_7;

 int VAR_8 = VAR_2->downstream_ports[0] & VAR_0;

 if (VAR_8 != VAR_1)
  return VAR_6;

 VAR_7 = FUNC_1(VAR_2->dpcd,
          VAR_2->downstream_ports);

 if (VAR_7 != 0)
  VAR_6 = FUNC_2(VAR_6, VAR_7);

 return VAR_6;
}
