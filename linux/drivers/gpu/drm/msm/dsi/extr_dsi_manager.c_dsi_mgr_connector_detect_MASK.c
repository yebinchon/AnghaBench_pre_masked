
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi {scalar_t__ panel; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_connector*) ;
 struct msm_dsi* FUNC_1 (int) ;

__attribute__((used)) static enum drm_connector_status FUNC_2(
  struct drm_connector *VAR_2, bool VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2);
 struct msm_dsi *VAR_5 = FUNC_1(VAR_4);

 return VAR_5->panel ? VAR_0 :
  VAR_1;
}
