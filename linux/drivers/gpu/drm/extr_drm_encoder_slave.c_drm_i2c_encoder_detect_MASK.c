
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {int (* detect ) (struct drm_encoder*,struct drm_connector*) ;} ;


 TYPE_1__* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*,struct drm_connector*) ;

enum drm_connector_status FUNC_2(struct drm_encoder *VAR_0,
     struct drm_connector *VAR_1)
{
 return FUNC_0(VAR_0)->detect(VAR_0, VAR_1);
}
