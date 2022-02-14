
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_display_mode {int head; } ;
struct drm_connector {int probed_modes; TYPE_2__* dev; } ;
struct TYPE_3__ {int mutex; } ;
struct TYPE_4__ {TYPE_1__ mode_config; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_connector *VAR_0,
    struct drm_display_mode *VAR_1)
{
 FUNC_0(!FUNC_2(&VAR_0->dev->mode_config.mutex));

 FUNC_1(&VAR_1->head, &VAR_0->probed_modes);
}
