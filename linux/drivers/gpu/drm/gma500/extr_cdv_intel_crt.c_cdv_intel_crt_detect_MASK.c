
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 scalar_t__ FUNC_0 (struct drm_connector*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum drm_connector_status FUNC_1(
    struct drm_connector *VAR_2, bool VAR_3)
{
 if (FUNC_0(VAR_2, VAR_3))
  return VAR_0;
 else
  return VAR_1;
}
