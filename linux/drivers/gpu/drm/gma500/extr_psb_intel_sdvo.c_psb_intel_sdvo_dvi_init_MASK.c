
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int connector_type; } ;
struct gma_connector {struct drm_connector base; } ;
struct psb_intel_sdvo_connector {struct gma_connector base; int output_flag; } ;
struct drm_encoder {int encoder_type; } ;
struct TYPE_2__ {int clone_mask; struct drm_encoder base; } ;
struct psb_intel_sdvo {int is_hdmi; TYPE_1__ base; int controlled_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct psb_intel_sdvo_connector* FUNC_0 (int,int ) ;
 int FUNC_1 (struct psb_intel_sdvo_connector*) ;
 int FUNC_2 (struct psb_intel_sdvo_connector*,struct psb_intel_sdvo*) ;
 scalar_t__ FUNC_3 (struct psb_intel_sdvo*,int) ;

__attribute__((used)) static bool
FUNC_4(struct psb_intel_sdvo *VAR_8, int VAR_9)
{
 struct drm_encoder *VAR_10 = &VAR_8->base.base;
 struct drm_connector *VAR_11;
 struct gma_connector *VAR_12;
 struct psb_intel_sdvo_connector *VAR_13;

 VAR_13 = FUNC_0(sizeof(struct psb_intel_sdvo_connector), VAR_3);
 if (!VAR_13)
  return 0;

 if (VAR_9 == 0) {
  VAR_8->controlled_output |= VAR_6;
  VAR_13->output_flag = VAR_6;
 } else if (VAR_9 == 1) {
  VAR_8->controlled_output |= VAR_7;
  VAR_13->output_flag = VAR_7;
 }

 VAR_12 = &VAR_13->base;
 VAR_11 = &VAR_12->base;

 VAR_10->encoder_type = VAR_2;
 VAR_11->connector_type = VAR_0;

 if (FUNC_3(VAR_8, VAR_9)) {
  VAR_11->connector_type = VAR_1;
  VAR_8->is_hdmi = 1;
 }
 VAR_8->base.clone_mask = ((1 << VAR_5) |
           (1 << VAR_4));

 FUNC_2(VAR_13, VAR_8);
 if (VAR_8->is_hdmi)
  FUNC_1(VAR_13);

 return 1;
}
