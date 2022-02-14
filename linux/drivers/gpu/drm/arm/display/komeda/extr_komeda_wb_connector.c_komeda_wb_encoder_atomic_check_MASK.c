
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_layer {int dummy; } ;
struct komeda_data_flow_cfg {scalar_t__ en_split; } ;
struct komeda_crtc_state {int dummy; } ;
struct drm_writeback_job {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {int connectors_changed; int active; } ;
struct drm_connector_state {int connector; struct drm_writeback_job* writeback_job; } ;
struct TYPE_2__ {struct komeda_layer* wb_layer; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_crtc_state*,int ) ;
 int FUNC_2 (struct komeda_layer*,struct drm_connector_state*,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_3 (struct komeda_layer*,struct drm_connector_state*,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_4 (struct komeda_layer*,struct drm_connector_state*,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 TYPE_1__* FUNC_5 (int ) ;
 struct komeda_crtc_state* FUNC_6 (struct drm_crtc_state*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct drm_encoder *VAR_1,
          struct drm_crtc_state *VAR_2,
          struct drm_connector_state *VAR_3)
{
 struct komeda_crtc_state *VAR_4 = FUNC_6(VAR_2);
 struct drm_writeback_job *VAR_5 = VAR_3->writeback_job;
 struct komeda_layer *VAR_6;
 struct komeda_data_flow_cfg VAR_7;
 int VAR_8;

 if (!VAR_5)
  return 0;

 if (!VAR_2->active) {
  FUNC_0("Cannot write the composition result out on a inactive CRTC.\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_5(FUNC_7(VAR_3->connector))->wb_layer;





 if (VAR_2->connectors_changed &&
     FUNC_1(VAR_2, VAR_3->connector))
  VAR_2->connectors_changed = 0;

 VAR_8 = FUNC_4(VAR_6, VAR_3, VAR_4, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7.en_split)
  VAR_8 = FUNC_3(VAR_6,
    VAR_3, VAR_4, &VAR_7);
 else
  VAR_8 = FUNC_2(VAR_6,
    VAR_3, VAR_4, &VAR_7);

 return VAR_8;
}
