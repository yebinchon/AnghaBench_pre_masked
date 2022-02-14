
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfp410 {scalar_t__ ddc; scalar_t__ hpd; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tfp410* FUNC_0 (struct drm_connector*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static enum drm_connector_status
FUNC_3(struct drm_connector *VAR_3, bool VAR_4)
{
 struct tfp410 *VAR_5 = FUNC_0(VAR_3);

 if (VAR_5->hpd) {
  if (FUNC_2(VAR_5->hpd))
   return VAR_0;
  else
   return VAR_1;
 }

 if (VAR_5->ddc) {
  if (FUNC_1(VAR_5->ddc))
   return VAR_0;
  else
   return VAR_1;
 }

 return VAR_2;
}
