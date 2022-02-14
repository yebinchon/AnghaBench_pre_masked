
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ ddr_clk_always_on; } ;
struct dsi_data {TYPE_1__ vm_timings; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct dsi_data*,int ,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct dsi_data*) ;
 int FUNC_5 (struct dsi_data*) ;
 int FUNC_6 (struct dsi_data*,int) ;
 int FUNC_7 (struct dsi_data*,int,int) ;
 int FUNC_8 (struct dsi_data*,int) ;
 struct dsi_data* FUNC_9 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_10(struct omap_dss_device *VAR_0, int VAR_1,
  bool VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_9(VAR_0);

 FUNC_1("dsi_vc_enable_hs(%d, %d)\n", VAR_1, VAR_2);

 FUNC_3(!FUNC_4(VAR_3));

 FUNC_7(VAR_3, VAR_1, 0);
 FUNC_6(VAR_3, 0);

 FUNC_2(VAR_3, FUNC_0(VAR_1), VAR_2, 9, 9);

 FUNC_7(VAR_3, VAR_1, 1);
 FUNC_6(VAR_3, 1);

 FUNC_5(VAR_3);


 if (VAR_3->vm_timings.ddr_clk_always_on && VAR_2)
  FUNC_8(VAR_3, VAR_1);
}
