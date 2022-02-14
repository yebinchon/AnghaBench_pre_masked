
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_pipeline {int merger; int splitter; } ;
struct TYPE_2__ {struct komeda_pipeline* pipeline; } ;
struct komeda_layer {TYPE_1__ base; } ;
struct komeda_data_flow_cfg {int dummy; } ;
struct komeda_crtc_state {int dummy; } ;
struct drm_connector_state {struct drm_connector* connector; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (int ,struct drm_connector_state*,struct komeda_crtc_state*,struct komeda_data_flow_cfg*,struct komeda_data_flow_cfg*,struct komeda_data_flow_cfg*) ;
 int FUNC_1 (struct drm_connector*,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_2 (int ,struct drm_connector_state*,struct komeda_data_flow_cfg*,struct komeda_data_flow_cfg*,struct komeda_data_flow_cfg*) ;
 int FUNC_3 (struct komeda_layer*,struct drm_connector_state*,struct komeda_data_flow_cfg*) ;

int FUNC_4(struct komeda_layer *VAR_0,
        struct drm_connector_state *VAR_1,
        struct komeda_crtc_state *VAR_2,
        struct komeda_data_flow_cfg *VAR_3)
{
 struct komeda_pipeline *VAR_4 = VAR_0->base.pipeline;
 struct drm_connector *VAR_5 = VAR_1->connector;
 struct komeda_data_flow_cfg VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4->splitter, VAR_1,
           VAR_3, &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_5, VAR_2, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_2, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_4->merger, VAR_1, VAR_2,
         &VAR_6, &VAR_7, VAR_3);
 if (VAR_8)
  return VAR_8;

 return FUNC_3(VAR_0, VAR_1, VAR_3);
}
