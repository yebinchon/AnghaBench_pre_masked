
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_connector {int status; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 struct mdfld_dsi_connector* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_1(struct drm_connector *VAR_1, bool VAR_2)
{
 struct mdfld_dsi_connector *VAR_3
  = FUNC_0(VAR_1);

 VAR_3->status = VAR_0;

 return VAR_3->status;
}
