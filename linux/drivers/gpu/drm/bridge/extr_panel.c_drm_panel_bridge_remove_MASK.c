
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panel_bridge {TYPE_1__* panel; } ;
struct drm_bridge {int * funcs; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,struct drm_bridge*) ;
 int FUNC_1 (struct drm_bridge*) ;
 struct panel_bridge* FUNC_2 (struct drm_bridge*) ;
 int VAR_0 ;

void FUNC_3(struct drm_bridge *VAR_1)
{
 struct panel_bridge *VAR_2;

 if (!VAR_1)
  return;

 if (VAR_1->funcs != &VAR_0)
  return;

 VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 FUNC_0(VAR_2->panel->dev, VAR_1);
}
