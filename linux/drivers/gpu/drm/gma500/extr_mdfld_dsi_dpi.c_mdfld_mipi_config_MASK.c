
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_config {int lane_count; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct mdfld_dsi_config*,int) ;

__attribute__((used)) static void FUNC_6(struct mdfld_dsi_config *VAR_0, int VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 int VAR_3 = VAR_0->lane_count;

 if (VAR_1) {
  FUNC_4(FUNC_2(0), 0x00000002);
  FUNC_4(FUNC_2(2), 0x80000000);
 } else {
  FUNC_4(FUNC_2(0), 0x80010000);
  FUNC_4(FUNC_2(2), 0x00);
 }

 FUNC_4(FUNC_0(VAR_1), 0x150A600F);
 FUNC_4(FUNC_3(VAR_1), 0x0000000F);


 FUNC_4(FUNC_1(VAR_1), 0x00000200 | VAR_3);

 FUNC_5(VAR_0, VAR_1);
}
