
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int connector_type; } ;
struct gma_connector {struct drm_connector base; } ;
struct psb_intel_sdvo_connector {int output_flag; struct gma_connector base; } ;
struct drm_encoder {int encoder_type; } ;
struct TYPE_2__ {int needs_tv_clock; int clone_mask; struct drm_encoder base; } ;
struct psb_intel_sdvo {int controlled_output; int is_tv; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct psb_intel_sdvo_connector* FUNC_0 (int,int ) ;
 int FUNC_1 (struct psb_intel_sdvo_connector*,struct psb_intel_sdvo*) ;
 int FUNC_2 (struct psb_intel_sdvo*,struct psb_intel_sdvo_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct psb_intel_sdvo*,struct psb_intel_sdvo_connector*,int) ;

__attribute__((used)) static bool
FUNC_5(struct psb_intel_sdvo *VAR_4, int VAR_5)
{
 struct drm_encoder *VAR_6 = &VAR_4->base.base;
 struct drm_connector *VAR_7;
 struct gma_connector *VAR_8;
 struct psb_intel_sdvo_connector *VAR_9;

 VAR_9 = FUNC_0(sizeof(struct psb_intel_sdvo_connector), VAR_2);
 if (!VAR_9)
  return 0;

 VAR_8 = &VAR_9->base;
 VAR_7 = &VAR_8->base;
 VAR_6->encoder_type = VAR_1;
 VAR_7->connector_type = VAR_0;

 VAR_4->controlled_output |= VAR_5;
 VAR_9->output_flag = VAR_5;

 VAR_4->is_tv = 1;
 VAR_4->base.needs_tv_clock = 1;
 VAR_4->base.clone_mask = 1 << VAR_3;

 FUNC_1(VAR_9, VAR_4);

 if (!FUNC_4(VAR_4, VAR_9, VAR_5))
  goto err;

 if (!FUNC_2(VAR_4, VAR_9))
  goto err;

 return 1;

err:
 FUNC_3(VAR_7);
 return 0;
}
