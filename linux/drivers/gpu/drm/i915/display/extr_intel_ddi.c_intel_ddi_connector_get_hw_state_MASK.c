
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_encoder {int port; int power_domain; int (* get_hw_state ) (struct intel_encoder*,int*) ;} ;
struct TYPE_2__ {int connector_type; struct drm_device* dev; } ;
struct intel_connector {TYPE_1__ base; struct intel_encoder* encoder; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int intel_wakeref_t ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum port { ____Placeholder_port } port ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;





 int VAR_6 ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 int FUNC_4 (struct drm_i915_private*,int ,int ) ;
 int FUNC_5 (struct intel_encoder*,int*) ;
 struct drm_i915_private* FUNC_6 (struct drm_device*) ;

bool FUNC_7(struct intel_connector *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->base.dev;
 struct drm_i915_private *VAR_9 = FUNC_6(VAR_8);
 struct intel_encoder *VAR_10 = VAR_7->encoder;
 int VAR_11 = VAR_7->base.connector_type;
 enum port VAR_12 = VAR_10->port;
 enum transcoder VAR_13;
 intel_wakeref_t VAR_14;
 enum pipe VAR_15 = 0;
 u32 VAR_16;
 bool VAR_17;

 VAR_14 = FUNC_3(VAR_9,
           VAR_10->power_domain);
 if (!VAR_14)
  return 0;

 if (!VAR_10->get_hw_state(VAR_10, &VAR_15)) {
  VAR_17 = 0;
  goto out;
 }

 if (FUNC_0(VAR_9) && VAR_12 == VAR_4)
  VAR_13 = VAR_5;
 else
  VAR_13 = (enum transcoder) VAR_15;

 VAR_16 = FUNC_1(FUNC_2(VAR_13));

 switch (VAR_16 & VAR_6) {
 case 128:
 case 130:
  VAR_17 = VAR_11 == VAR_1;
  break;

 case 131:
  VAR_17 = VAR_11 == VAR_3 ||
        VAR_11 == VAR_0;
  break;

 case 132:


  VAR_17 = 0;
  break;

 case 129:
  VAR_17 = VAR_11 == VAR_2;
  break;

 default:
  VAR_17 = 0;
  break;
 }

out:
 FUNC_4(VAR_9, VAR_10->power_domain, VAR_14);

 return VAR_17;
}
