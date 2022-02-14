
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dummy; } ;
struct adv7511 {int status; int regmap; scalar_t__ powered; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct adv7511*,struct drm_connector*) ;
 int FUNC_1 (struct adv7511*) ;
 int FUNC_2 (struct adv7511*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static enum drm_connector_status
FUNC_6(struct adv7511 *VAR_7, struct drm_connector *VAR_8)
{
 enum drm_connector_status VAR_9;
 unsigned int VAR_10;
 bool VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_7->regmap, VAR_3, &VAR_10);
 if (VAR_12 < 0)
  return VAR_6;

 if (VAR_10 & VAR_4)
  VAR_9 = VAR_5;
 else
  VAR_9 = VAR_6;

 VAR_11 = FUNC_1(VAR_7);





 if (VAR_9 == VAR_5 && VAR_11 && VAR_7->powered) {
  FUNC_3(VAR_7->regmap);
  FUNC_2(VAR_7);
  FUNC_0(VAR_7, VAR_8);
  if (VAR_7->status == VAR_5)
   VAR_9 = VAR_6;
 } else {

  FUNC_5(VAR_7->regmap, VAR_0,
       VAR_2,
       VAR_1);
 }

 VAR_7->status = VAR_9;
 return VAR_9;
}
