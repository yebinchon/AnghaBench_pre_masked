
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_hdmi {int regmap; } ;
struct dw_hdmi {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dw_hdmi*,void*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static enum drm_connector_status
FUNC_3(struct dw_hdmi *VAR_4, void *VAR_5)
{
 struct rockchip_hdmi *VAR_6 = (struct rockchip_hdmi *)VAR_5;
 enum drm_connector_status VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_5);

 if (VAR_7 == VAR_3)
  FUNC_2(VAR_6->regmap,
   VAR_0,
   FUNC_0(VAR_2 | VAR_1,
          VAR_2 | VAR_1));
 else
  FUNC_2(VAR_6->regmap,
   VAR_0,
   FUNC_0(0, VAR_2 |
      VAR_1));
 return VAR_7;
}
