
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {scalar_t__ doublescan_allowed; scalar_t__ interlace_allowed; scalar_t__ polled; } ;
struct mdp4_lvds_connector {struct drm_connector base; struct device_node* panel_node; struct drm_encoder* encoder; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_connector* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_connector*,int *,int ) ;
 struct mdp4_lvds_connector* FUNC_4 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

struct drm_connector *FUNC_5(struct drm_device *VAR_5,
  struct device_node *VAR_6, struct drm_encoder *VAR_7)
{
 struct drm_connector *VAR_8 = ((void*)0);
 struct mdp4_lvds_connector *VAR_9;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_9->encoder = VAR_7;
 VAR_9->panel_node = VAR_6;

 VAR_8 = &VAR_9->base;

 FUNC_3(VAR_5, VAR_8, &VAR_3,
   VAR_0);
 FUNC_2(VAR_8, &VAR_4);

 VAR_8->polled = 0;

 VAR_8->interlace_allowed = 0;
 VAR_8->doublescan_allowed = 0;

 FUNC_1(VAR_8, VAR_7);

 return VAR_8;
}
