
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdfld_dsi_pkg_sender {int mipi_gen_fifo_stat_reg; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct mdfld_dsi_pkg_sender *VAR_1,
      u32 VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 u32 VAR_4 = VAR_1->mipi_gen_fifo_stat_reg;
 int VAR_5 = 0xffff;

 while (VAR_5--) {
  if ((VAR_2 & FUNC_1(VAR_4)) == VAR_2)
   return 0;
  FUNC_2(100);
 }
 FUNC_0("fifo is NOT empty 0x%08x\n", FUNC_1(VAR_4));
 return -VAR_0;
}
