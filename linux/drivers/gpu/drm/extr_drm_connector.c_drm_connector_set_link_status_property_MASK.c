
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int connection_mutex; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct drm_connector {TYPE_1__* state; struct drm_device* dev; } ;
struct TYPE_3__ {int link_status; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_connector *VAR_0,
         uint64_t VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;

 FUNC_0(&VAR_2->mode_config.connection_mutex, ((void*)0));
 VAR_0->state->link_status = VAR_1;
 FUNC_1(&VAR_2->mode_config.connection_mutex);
}
