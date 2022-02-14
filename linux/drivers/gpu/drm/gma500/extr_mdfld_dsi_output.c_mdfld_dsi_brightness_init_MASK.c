
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mdfld_dsi_pkg_sender {struct drm_device* dev; } ;
struct mdfld_dsi_config {int dummy; } ;
struct drm_psb_private {int mipi_ctrl_display; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct mdfld_dsi_pkg_sender* FUNC_1 (struct mdfld_dsi_config*) ;
 int FUNC_2 (struct mdfld_dsi_pkg_sender*,int ,int,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_3(struct mdfld_dsi_config *VAR_12, int VAR_13)
{
 struct mdfld_dsi_pkg_sender *VAR_14 =
    FUNC_1(VAR_12);
 struct drm_device *VAR_15;
 struct drm_psb_private *VAR_16;
 u32 VAR_17;

 if (!VAR_14) {
  FUNC_0("No sender found\n");
  return;
 }

 VAR_15 = VAR_14->dev;
 VAR_16 = VAR_15->dev_private;


 FUNC_2(VAR_14, VAR_11, 0xd8, 1,
    1);


 FUNC_2(VAR_14, VAR_8, 0x33, 1, 1);


 VAR_17 = VAR_2 | VAR_4 |
        VAR_1;
 if (VAR_6 == 1)
  VAR_17 |= VAR_4 | VAR_3
        | VAR_5;

 if (VAR_6 == 1)
  VAR_17 |= VAR_0;

 VAR_16->mipi_ctrl_display = VAR_17;

 FUNC_2(VAR_14, VAR_10, (u8)VAR_17,
    1, 1);

 FUNC_2(VAR_14, VAR_9, VAR_7, 1, 1);
}
