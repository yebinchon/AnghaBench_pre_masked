
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dummy; } ;
struct adv7511 {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (struct adv7511*,struct drm_connector*) ;
 struct adv7511* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_2(struct drm_connector *VAR_0, bool VAR_1)
{
 struct adv7511 *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_0);
}
