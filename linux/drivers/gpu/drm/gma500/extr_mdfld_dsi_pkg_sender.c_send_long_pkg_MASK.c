
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mdfld_dsi_pkg_sender {int mipi_hs_gen_ctrl_reg; int mipi_hs_gen_data_reg; int mipi_lp_gen_ctrl_reg; int mipi_lp_gen_data_reg; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct mdfld_dsi_pkg_sender *VAR_0, u8 VAR_1,
   u8 *VAR_2, int VAR_3, bool VAR_4)
{
 struct drm_device *VAR_5 = VAR_0->dev;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u8 *VAR_9;
 u8 VAR_10, VAR_11, VAR_12, VAR_13;
 u8 VAR_14 = 0;
 int VAR_15;

 if (VAR_4) {
  VAR_6 = VAR_0->mipi_hs_gen_ctrl_reg;
  VAR_7 = VAR_0->mipi_hs_gen_data_reg;


 } else {
  VAR_6 = VAR_0->mipi_lp_gen_ctrl_reg;
  VAR_7 = VAR_0->mipi_lp_gen_data_reg;


 }

 VAR_9 = VAR_2;
 for (VAR_15 = 0; VAR_15 < VAR_3 / 4; VAR_15++) {
  VAR_10 = *VAR_9++;
  VAR_11 = *VAR_9++;
  VAR_12 = *VAR_9++;
  VAR_13 = *VAR_9++;

  FUNC_1(VAR_7, VAR_13 << 24 | VAR_12 << 16 | VAR_11 << 8 | VAR_10);
 }

 VAR_15 = VAR_3 % 4;
 if (VAR_15) {
  VAR_10 = 0; VAR_11 = 0; VAR_12 = 0;

  switch (VAR_15) {
  case 3:
   VAR_10 = *VAR_9++;
   VAR_11 = *VAR_9++;
   VAR_12 = *VAR_9++;
   break;
  case 2:
   VAR_10 = *VAR_9++;
   VAR_11 = *VAR_9++;
   break;
  case 1:
   VAR_10 = *VAR_9++;
   break;
  }

  FUNC_1(VAR_7, VAR_12 << 16 | VAR_11 << 8 | VAR_10);
 }

 VAR_8 = FUNC_0(VAR_3, 23, 8) | FUNC_0(VAR_14, 7, 6) |
  FUNC_0(VAR_1, 5, 0);

 FUNC_1(VAR_6, VAR_8);

 return 0;
}
