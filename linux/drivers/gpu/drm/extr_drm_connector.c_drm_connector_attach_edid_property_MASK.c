
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_config {int edid_property; } ;
struct drm_connector {int base; TYPE_1__* dev; } ;
struct TYPE_2__ {struct drm_mode_config mode_config; } ;


 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(struct drm_connector *VAR_0)
{
 struct drm_mode_config *VAR_1 = &VAR_0->dev->mode_config;

 FUNC_0(&VAR_0->base,
       VAR_1->edid_property,
       0);
}
