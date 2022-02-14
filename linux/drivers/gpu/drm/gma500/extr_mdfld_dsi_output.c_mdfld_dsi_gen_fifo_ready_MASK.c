
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

void FUNC_3(struct drm_device *VAR_1, u32 VAR_2,
       u32 VAR_3)
{
 u32 VAR_4;


 for (VAR_4 = 0;
   VAR_4 < VAR_0;
   VAR_4++) {
  if ((FUNC_1(VAR_2) & VAR_3) == VAR_3)
   break;
  FUNC_2(100);
 }

 if (VAR_4 == VAR_0)
  FUNC_0("mdfld_dsi_gen_fifo_ready, Timeout. gen_fifo_stat_reg = 0x%x.\n",
     VAR_2);
}
