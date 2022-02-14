
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nt39016 {int supply; int dev; int map; int reset_gpio; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct nt39016* FUNC_6 (struct drm_panel*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct drm_panel *VAR_1)
{
 struct nt39016 *VAR_2 = FUNC_6(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_5(VAR_2->supply);
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "Failed to enable power supply: %d", VAR_3);
  return VAR_3;
 }







 FUNC_2(VAR_2->reset_gpio, 1);
 FUNC_8(100, 1000);
 FUNC_2(VAR_2->reset_gpio, 0);
 FUNC_7(2);


 VAR_3 = FUNC_3(VAR_2->map, VAR_0,
         FUNC_0(VAR_0));
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "Failed to init registers: %d", VAR_3);
  goto err_disable_regulator;
 }

 return 0;

err_disable_regulator:
 FUNC_4(VAR_2->supply);
 return VAR_3;
}
