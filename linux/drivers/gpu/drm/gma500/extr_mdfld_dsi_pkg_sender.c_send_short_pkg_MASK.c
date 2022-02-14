
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mdfld_dsi_pkg_sender {int mipi_hs_gen_ctrl_reg; int mipi_lp_gen_ctrl_reg; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct mdfld_dsi_pkg_sender *VAR_0, u8 VAR_1,
   u8 VAR_2, u8 VAR_3, bool VAR_4)
{
 struct drm_device *VAR_5 = VAR_0->dev;
 u32 VAR_6;
 u32 VAR_7;
 u8 VAR_8 = 0;

 if (VAR_4) {
  VAR_6 = VAR_0->mipi_hs_gen_ctrl_reg;


 } else {
  VAR_6 = VAR_0->mipi_lp_gen_ctrl_reg;


 }

 VAR_7 = FUNC_0(VAR_3, 23, 16) | FUNC_0(VAR_2, 15, 8) |
  FUNC_0(VAR_8, 7, 6) | FUNC_0(VAR_1, 5, 0);

 FUNC_1(VAR_6, VAR_7);

 return 0;
}
