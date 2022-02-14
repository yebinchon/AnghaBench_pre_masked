
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mdfld_dsi_pkg_sender {TYPE_1__* dev; } ;
struct mdfld_dsi_config {int dummy; } ;
struct drm_psb_private {int mipi_ctrl_display; struct mdfld_dsi_config** dsi_configs; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,int) ;
 struct mdfld_dsi_pkg_sender* FUNC_2 (struct mdfld_dsi_config*) ;
 int FUNC_3 (struct mdfld_dsi_pkg_sender*,int ,int ,int,int) ;
 int FUNC_4 (struct drm_device*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_5(struct drm_device *VAR_5, int VAR_6, int VAR_7)
{
 struct mdfld_dsi_pkg_sender *VAR_8;
 struct drm_psb_private *VAR_9;
 struct mdfld_dsi_config *VAR_10;
 u32 VAR_11 = 0;
 int VAR_12 = VAR_1;

 if (!VAR_5 || (VAR_6 != 0 && VAR_6 != 2)) {
  FUNC_0("Invalid parameter\n");
  return;
 }

 VAR_12 = FUNC_4(VAR_5, 0);

 VAR_9 = VAR_5->dev_private;

 if (VAR_6)
  VAR_10 = VAR_9->dsi_configs[1];
 else
  VAR_10 = VAR_9->dsi_configs[0];

 VAR_8 = FUNC_2(VAR_10);

 if (!VAR_8) {
  FUNC_0("No sender found\n");
  return;
 }

 VAR_11 = (VAR_7 * 0xff / VAR_0) & 0xff;

 FUNC_1(VAR_8->dev->dev, "pipe = %d, gen_ctrl_val = %d.\n",
       VAR_6, VAR_11);

 if (VAR_12 == VAR_1) {

  FUNC_3(VAR_8, VAR_2,
     (u8)VAR_11, 1, 1);
 } else {

  FUNC_3(VAR_8, VAR_4,
     (u8)VAR_11, 1, 1);


  if (VAR_7 == 0)
   VAR_11 = 0;
  else
   VAR_11 = VAR_9->mipi_ctrl_display;

  FUNC_3(VAR_8, VAR_3,
     (u8)VAR_11, 1, 1);
 }
}
