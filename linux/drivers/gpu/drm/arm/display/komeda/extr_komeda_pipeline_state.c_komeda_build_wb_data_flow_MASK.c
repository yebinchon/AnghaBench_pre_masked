
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_layer {int dummy; } ;
struct komeda_data_flow_cfg {int dummy; } ;
struct komeda_crtc_state {int dummy; } ;
struct drm_connector_state {struct drm_connector* connector; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_1 (struct komeda_layer*,struct drm_connector_state*,struct komeda_data_flow_cfg*) ;

int FUNC_2(struct komeda_layer *VAR_0,
         struct drm_connector_state *VAR_1,
         struct komeda_crtc_state *VAR_2,
         struct komeda_data_flow_cfg *VAR_3)
{
 struct drm_connector *VAR_4 = VAR_1->connector;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_0, VAR_1, VAR_3);
}
