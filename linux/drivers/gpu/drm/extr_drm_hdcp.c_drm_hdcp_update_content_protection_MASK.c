
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int content_protection_property; int connection_mutex; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector_state {scalar_t__ content_protection; } ;
struct drm_connector {struct drm_connector_state* state; struct drm_device* dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_connector*,int ) ;

void FUNC_3(struct drm_connector *VAR_0,
     u64 VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct drm_connector_state *VAR_3 = VAR_0->state;

 FUNC_0(!FUNC_1(&VAR_2->mode_config.connection_mutex));
 if (VAR_3->content_protection == VAR_1)
  return;

 VAR_3->content_protection = VAR_1;
 FUNC_2(VAR_0,
     VAR_2->mode_config.content_protection_property);
}
