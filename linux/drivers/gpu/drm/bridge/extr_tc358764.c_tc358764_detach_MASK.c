
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc358764 {int connector; int * panel; } ;
struct drm_device {int fb_helper; } ;
struct drm_bridge {struct drm_device* dev; } ;


 struct tc358764* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_bridge *VAR_0)
{
 struct tc358764 *VAR_1 = FUNC_0(VAR_0);
 struct drm_device *VAR_2 = VAR_0->dev;

 FUNC_2(&VAR_1->connector);
 FUNC_3(VAR_2->fb_helper, &VAR_1->connector);
 FUNC_4(VAR_1->panel);
 VAR_1->panel = ((void*)0);
 FUNC_1(&VAR_1->connector);
}
