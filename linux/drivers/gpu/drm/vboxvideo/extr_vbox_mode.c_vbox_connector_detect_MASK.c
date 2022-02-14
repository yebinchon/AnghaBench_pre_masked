
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disconnected; } ;
struct vbox_connector {TYPE_1__ mode_hint; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 struct vbox_connector* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_1(struct drm_connector *VAR_2, bool VAR_3)
{
 struct vbox_connector *VAR_4;

 VAR_4 = FUNC_0(VAR_2);

 return VAR_4->mode_hint.disconnected ?
     VAR_1 : VAR_0;
}
