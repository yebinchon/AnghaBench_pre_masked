
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int dummy; } ;
struct TYPE_2__ {int gpiod_hpd; } ;
struct anx78xx {TYPE_1__ pdata; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 struct anx78xx* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static enum drm_connector_status FUNC_2(struct drm_connector *VAR_2,
      bool VAR_3)
{
 struct anx78xx *VAR_4 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_4->pdata.gpiod_hpd))
  return VAR_1;

 return VAR_0;
}
