
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jh057n {int prepared; int vcc; int reset_gpio; int dev; int iovcc; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 struct jh057n* FUNC_4 (struct drm_panel*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct drm_panel *VAR_0)
{
 struct jh057n *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 if (VAR_1->prepared)
  return 0;

 FUNC_0(VAR_1->dev, "Resetting the panel\n");
 VAR_2 = FUNC_6(VAR_1->vcc);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1->dev,
         "Failed to enable vcc supply: %d\n", VAR_2);
  return VAR_2;
 }
 VAR_2 = FUNC_6(VAR_1->iovcc);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1->dev,
         "Failed to enable iovcc supply: %d\n", VAR_2);
  goto disable_vcc;
 }

 FUNC_2(VAR_1->reset_gpio, 1);
 FUNC_7(20, 40);
 FUNC_2(VAR_1->reset_gpio, 0);
 FUNC_3(20);

 VAR_1->prepared = 1;

 return 0;

disable_vcc:
 FUNC_5(VAR_1->vcc);
 return VAR_2;
}
