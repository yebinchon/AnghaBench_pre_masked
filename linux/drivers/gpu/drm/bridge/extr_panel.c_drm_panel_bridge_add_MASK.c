
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_bridge {int of_node; int * funcs; } ;
struct panel_bridge {struct drm_bridge bridge; struct drm_panel* panel; int connector_type; } ;
struct drm_panel {TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_bridge* FUNC_0 (int ) ;
 int VAR_2 ;
 struct panel_bridge* FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (struct drm_bridge*) ;
 int VAR_3 ;

struct drm_bridge *FUNC_3(struct drm_panel *VAR_4,
     u32 VAR_5)
{
 struct panel_bridge *VAR_6;

 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_1(VAR_4->dev, sizeof(*VAR_6),
        VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_6->connector_type = VAR_5;
 VAR_6->panel = VAR_4;

 VAR_6->bridge.funcs = &VAR_3;




 FUNC_2(&VAR_6->bridge);

 return &VAR_6->bridge;
}
