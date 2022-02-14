
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int connector_type; } ;
struct gma_connector {struct drm_connector base; } ;
struct psb_intel_sdvo_connector {int output_flag; struct gma_connector base; } ;
struct drm_encoder {int encoder_type; } ;
struct TYPE_2__ {int clone_mask; struct drm_encoder base; } ;
struct psb_intel_sdvo {TYPE_1__ base; int controlled_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct psb_intel_sdvo_connector* FUNC_0 (int,int ) ;
 int FUNC_1 (struct psb_intel_sdvo_connector*,struct psb_intel_sdvo*) ;
 int FUNC_2 (struct psb_intel_sdvo*,struct psb_intel_sdvo_connector*) ;
 int FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static bool
FUNC_4(struct psb_intel_sdvo *VAR_7, int VAR_8)
{
 struct drm_encoder *VAR_9 = &VAR_7->base.base;
 struct drm_connector *VAR_10;
 struct gma_connector *VAR_11;
 struct psb_intel_sdvo_connector *VAR_12;

 VAR_12 = FUNC_0(sizeof(struct psb_intel_sdvo_connector), VAR_2);
 if (!VAR_12)
  return 0;

 VAR_11 = &VAR_12->base;
 VAR_10 = &VAR_11->base;
 VAR_9->encoder_type = VAR_1;
 VAR_10->connector_type = VAR_0;

 if (VAR_8 == 0) {
  VAR_7->controlled_output |= VAR_5;
  VAR_12->output_flag = VAR_5;
 } else if (VAR_8 == 1) {
  VAR_7->controlled_output |= VAR_6;
  VAR_12->output_flag = VAR_6;
 }

 VAR_7->base.clone_mask = ((1 << VAR_3) |
           (1 << VAR_4));

 FUNC_1(VAR_12, VAR_7);
 if (!FUNC_2(VAR_7, VAR_12))
  goto err;

 return 1;

err:
 FUNC_3(VAR_10);
 return 0;
}
