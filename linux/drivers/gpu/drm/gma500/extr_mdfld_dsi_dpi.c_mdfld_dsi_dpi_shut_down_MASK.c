
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_dpi_output {scalar_t__ first_boot; scalar_t__ panel_on; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct drm_device*,int) ;

__attribute__((used)) static void FUNC_5(struct mdfld_dsi_dpi_output *VAR_2,
        int VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;


 if ((!VAR_2->panel_on) || VAR_2->first_boot) {
  VAR_2->first_boot = 0;
  return;
 }


 FUNC_4(VAR_4, VAR_3);


 if (FUNC_2(FUNC_1(VAR_3)) & VAR_1)
  FUNC_3(FUNC_1(VAR_3),
     VAR_1);

 if (FUNC_2(FUNC_0(VAR_3)) == VAR_0)
  goto shutdown_out;

 FUNC_3(FUNC_0(VAR_3), VAR_0);

shutdown_out:
 VAR_2->panel_on = 0;
 VAR_2->first_boot = 0;







}
