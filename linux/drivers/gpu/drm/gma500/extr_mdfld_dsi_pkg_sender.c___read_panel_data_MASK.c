
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mdfld_dsi_pkg_sender {int mipi_intr_stat_reg; int mipi_hs_gen_data_reg; int mipi_lp_gen_data_reg; int lock; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct mdfld_dsi_pkg_sender*,int ,int *,int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct mdfld_dsi_pkg_sender *VAR_3, u8 VAR_4,
   u8 *VAR_5, u16 VAR_6, u32 *VAR_7, u16 VAR_8, bool VAR_9)
{
 unsigned long VAR_10;
 struct drm_device *VAR_11;
 int VAR_12;
 u32 VAR_13;
 int VAR_14 = VAR_2;

 if (!VAR_3 || !VAR_7 || !VAR_8) {
  FUNC_1("Invalid parameters\n");
  return -VAR_0;
 }

 VAR_11 = VAR_3->dev;







 FUNC_5(&VAR_3->lock, VAR_10);

 FUNC_3(VAR_3->mipi_intr_stat_reg, FUNC_0(29));

 if ((FUNC_2(VAR_3->mipi_intr_stat_reg) & FUNC_0(29)))
  FUNC_1("Can NOT clean read data valid interrupt\n");


 FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_9);


 while (VAR_14 && !(FUNC_2(VAR_3->mipi_intr_stat_reg) & FUNC_0(29))) {
  FUNC_7(100);
  VAR_14--;
 }

 if (!VAR_14) {
  FUNC_6(&VAR_3->lock, VAR_10);
  return -VAR_1;
 }

 FUNC_3(VAR_3->mipi_intr_stat_reg, FUNC_0(29));


 if (VAR_9)
  VAR_13 = VAR_3->mipi_hs_gen_data_reg;
 else
  VAR_13 = VAR_3->mipi_lp_gen_data_reg;

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
  *(VAR_7 + VAR_12) = FUNC_2(VAR_13);

 FUNC_6(&VAR_3->lock, VAR_10);

 return 0;
}
