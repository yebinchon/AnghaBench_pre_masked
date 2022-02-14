
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc358764 {int dev; int panel; } ;
struct drm_bridge {int dummy; } ;


 struct tc358764* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_bridge *VAR_0)
{
 struct tc358764 *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = FUNC_2(VAR_1->panel);

 if (VAR_2 < 0)
  FUNC_1(VAR_1->dev, "error enabling panel (%d)\n", VAR_2);
}
