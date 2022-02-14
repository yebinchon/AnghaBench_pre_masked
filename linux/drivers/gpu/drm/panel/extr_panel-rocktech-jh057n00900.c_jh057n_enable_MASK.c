
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jh057n {int backlight; int dev; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct jh057n*) ;
 struct jh057n* FUNC_3 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0)
{
 struct jh057n *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "Panel init sequence failed: %d\n",
         VAR_2);
  return VAR_2;
 }

 return FUNC_1(VAR_1->backlight);
}
