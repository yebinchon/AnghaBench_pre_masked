
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxsfb_drm_private {scalar_t__ panel; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 struct mxsfb_drm_private* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_1(struct drm_connector *VAR_2, bool VAR_3)
{
 struct mxsfb_drm_private *VAR_4 =
   FUNC_0(VAR_2);

 if (VAR_4->panel)
  return VAR_0;

 return VAR_1;
}
