
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3066_hdmi {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rk3066_hdmi*,int ) ;
 struct rk3066_hdmi* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_2(struct drm_connector *VAR_4, bool VAR_5)
{
 struct rk3066_hdmi *VAR_6 = FUNC_1(VAR_4);

 return (FUNC_0(VAR_6, VAR_1) & VAR_0) ?
  VAR_2 : VAR_3;
}
