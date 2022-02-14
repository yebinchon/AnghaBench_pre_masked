
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_connector_state {TYPE_1__* connector; } ;
typedef enum intel_output_type { ____Placeholder_intel_output_type } intel_output_type ;
struct TYPE_2__ {int connector_type; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static enum intel_output_type
FUNC_1(struct intel_encoder *VAR_4,
         struct intel_crtc_state *VAR_5,
         struct drm_connector_state *VAR_6)
{
 switch (VAR_6->connector->connector_type) {
 case 129:
  return VAR_2;
 case 128:
  return VAR_1;
 case 130:
  return VAR_0;
 default:
  FUNC_0(VAR_6->connector->connector_type);
  return VAR_3;
 }
}
