
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_hdmi {int cec_adap; scalar_t__ base; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct sun4i_hdmi* FUNC_1 (struct drm_connector*) ;
 scalar_t__ FUNC_2 (scalar_t__,unsigned long,unsigned long,int ,int) ;

__attribute__((used)) static enum drm_connector_status
FUNC_3(struct drm_connector *VAR_4, bool VAR_5)
{
 struct sun4i_hdmi *VAR_6 = FUNC_1(VAR_4);
 unsigned long VAR_7;

 if (FUNC_2(VAR_6->base + VAR_1, VAR_7,
          VAR_7 & VAR_0,
          0, 500000)) {
  FUNC_0(VAR_6->cec_adap);
  return VAR_3;
 }

 return VAR_2;
}
