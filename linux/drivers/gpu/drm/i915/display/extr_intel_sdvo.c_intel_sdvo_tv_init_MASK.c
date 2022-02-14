
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int connector_type; } ;
struct intel_connector {struct drm_connector base; } ;
struct intel_sdvo_connector {int output_flag; struct intel_connector base; } ;
struct drm_encoder {int encoder_type; } ;
struct TYPE_2__ {struct drm_encoder base; } ;
struct intel_sdvo {int controlled_output; TYPE_1__ base; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_connector*) ;
 struct intel_sdvo_connector* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct intel_sdvo_connector*,struct intel_sdvo*) ;
 int FUNC_4 (struct intel_sdvo*,struct intel_sdvo_connector*) ;
 int FUNC_5 (struct intel_sdvo*,struct intel_sdvo_connector*,int) ;
 int FUNC_6 (struct intel_sdvo_connector*) ;

__attribute__((used)) static bool
FUNC_7(struct intel_sdvo *VAR_2, int VAR_3)
{
 struct drm_encoder *VAR_4 = &VAR_2->base.base;
 struct drm_connector *VAR_5;
 struct intel_connector *VAR_6;
 struct intel_sdvo_connector *VAR_7;

 FUNC_0("initialising TV type %d\n", VAR_3);

 VAR_7 = FUNC_2();
 if (!VAR_7)
  return 0;

 VAR_6 = &VAR_7->base;
 VAR_5 = &VAR_6->base;
 VAR_4->encoder_type = VAR_1;
 VAR_5->connector_type = VAR_0;

 VAR_2->controlled_output |= VAR_3;
 VAR_7->output_flag = VAR_3;

 if (FUNC_3(VAR_7, VAR_2) < 0) {
  FUNC_6(VAR_7);
  return 0;
 }

 if (!FUNC_5(VAR_2, VAR_7, VAR_3))
  goto err;

 if (!FUNC_4(VAR_2, VAR_7))
  goto err;

 return 1;

err:
 FUNC_1(VAR_5);
 return 0;
}
