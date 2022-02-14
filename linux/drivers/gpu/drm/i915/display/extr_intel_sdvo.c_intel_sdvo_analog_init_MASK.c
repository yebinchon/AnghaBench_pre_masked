
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int connector_type; } ;
struct intel_connector {int polled; struct drm_connector base; } ;
struct intel_sdvo_connector {int output_flag; struct intel_connector base; } ;
struct drm_encoder {int encoder_type; } ;
struct TYPE_2__ {struct drm_encoder base; } ;
struct intel_sdvo {int controlled_output; TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct intel_sdvo_connector* FUNC_1 () ;
 scalar_t__ FUNC_2 (struct intel_sdvo_connector*,struct intel_sdvo*) ;
 int FUNC_3 (struct intel_sdvo_connector*) ;

__attribute__((used)) static bool
FUNC_4(struct intel_sdvo *VAR_5, int VAR_6)
{
 struct drm_encoder *VAR_7 = &VAR_5->base.base;
 struct drm_connector *VAR_8;
 struct intel_connector *VAR_9;
 struct intel_sdvo_connector *VAR_10;

 FUNC_0("initialising analog device %d\n", VAR_6);

 VAR_10 = FUNC_1();
 if (!VAR_10)
  return 0;

 VAR_9 = &VAR_10->base;
 VAR_8 = &VAR_9->base;
 VAR_9->polled = VAR_0;
 VAR_7->encoder_type = VAR_2;
 VAR_8->connector_type = VAR_1;

 if (VAR_6 == 0) {
  VAR_5->controlled_output |= VAR_3;
  VAR_10->output_flag = VAR_3;
 } else if (VAR_6 == 1) {
  VAR_5->controlled_output |= VAR_4;
  VAR_10->output_flag = VAR_4;
 }

 if (FUNC_2(VAR_10, VAR_5) < 0) {
  FUNC_3(VAR_10);
  return 0;
 }

 return 1;
}
