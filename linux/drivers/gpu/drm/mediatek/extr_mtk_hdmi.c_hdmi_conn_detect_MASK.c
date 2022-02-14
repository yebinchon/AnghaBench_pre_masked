
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {int cec_dev; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_hdmi* FUNC_0 (struct drm_connector*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static enum drm_connector_status FUNC_2(struct drm_connector *VAR_2,
        bool VAR_3)
{
 struct mtk_hdmi *VAR_4 = FUNC_0(VAR_2);

 return FUNC_1(VAR_4->cec_dev) ?
        VAR_0 : VAR_1;
}
