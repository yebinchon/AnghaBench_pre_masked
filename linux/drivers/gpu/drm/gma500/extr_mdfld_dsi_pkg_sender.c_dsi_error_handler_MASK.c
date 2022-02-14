
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdfld_dsi_pkg_sender {int mipi_intr_stat_reg; struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int * VAR_0 ;
 int FUNC_3 (struct mdfld_dsi_pkg_sender*,int) ;

__attribute__((used)) static int FUNC_4(struct mdfld_dsi_pkg_sender *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 u32 VAR_3 = VAR_1->mipi_intr_stat_reg;
 u32 VAR_4;
 u32 VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_1(VAR_3);

 for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
  VAR_4 = (0x00000001UL) << VAR_6;
  if (VAR_5 & VAR_4) {
   FUNC_2(VAR_1->dev->dev, "[DSI]: %s\n", VAR_0[VAR_6]);
   VAR_7 = FUNC_3(VAR_1, VAR_4);
   if (VAR_7)
    FUNC_0("Cannot handle error\n");
  }
 }
 return VAR_7;
}
