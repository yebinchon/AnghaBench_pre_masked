
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dummy; } ;
struct cdn_dp_device {int lock; scalar_t__ connected; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 struct cdn_dp_device* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static enum drm_connector_status
FUNC_3(struct drm_connector *VAR_2, bool VAR_3)
{
 struct cdn_dp_device *VAR_4 = FUNC_0(VAR_2);
 enum drm_connector_status VAR_5 = VAR_1;

 FUNC_1(&VAR_4->lock);
 if (VAR_4->connected)
  VAR_5 = VAR_0;
 FUNC_2(&VAR_4->lock);

 return VAR_5;
}
