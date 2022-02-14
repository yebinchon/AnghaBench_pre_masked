
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcde_dsi {int dev; } ;
struct drm_bridge {int dummy; } ;


 struct mcde_dsi* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct drm_bridge *VAR_0)
{
 struct mcde_dsi *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->dev, "enable DSI master\n");
}
