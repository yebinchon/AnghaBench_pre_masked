
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_data {scalar_t__ hpd_pin; int regmap; scalar_t__ panel; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tc_data* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static enum drm_connector_status FUNC_3(struct drm_connector *VAR_4,
           bool VAR_5)
{
 struct tc_data *VAR_6 = FUNC_1(VAR_4);
 bool VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (VAR_6->hpd_pin < 0) {
  if (VAR_6->panel)
   return VAR_1;
  else
   return VAR_3;
 }

 VAR_9 = FUNC_2(VAR_6->regmap, VAR_0, &VAR_8);
 if (VAR_9)
  return VAR_3;

 VAR_7 = VAR_8 & FUNC_0(VAR_6->hpd_pin);

 if (VAR_7)
  return VAR_1;
 else
  return VAR_2;
}
