
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_connector {TYPE_2__* dev; int base; } ;
struct TYPE_3__ {int content_type_property; } ;
struct TYPE_4__ {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,int ) ;

int FUNC_2(struct drm_connector *VAR_1)
{
 if (!FUNC_0(VAR_1->dev))
  FUNC_1(&VAR_1->base,
        VAR_1->dev->mode_config.content_type_property,
        VAR_0);
 return 0;
}
