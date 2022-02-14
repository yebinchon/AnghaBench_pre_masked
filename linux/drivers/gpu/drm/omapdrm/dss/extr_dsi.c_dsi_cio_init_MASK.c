
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int ddr_clk_always_on; } ;
struct dsi_data {int ulps_enabled; int num_lanes_supported; scalar_t__ mode; TYPE_2__ vm_timings; TYPE_1__* lanes; } ;
typedef int ktime_t ;
struct TYPE_3__ {scalar_t__ function; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int,int,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct dsi_data*,int ,int,int,int) ;
 int VAR_11 ;
 int FUNC_4 (struct dsi_data*) ;
 int FUNC_5 (struct dsi_data*,unsigned int,int ) ;
 int FUNC_6 (struct dsi_data*,int ) ;
 int FUNC_7 (struct dsi_data*) ;
 int FUNC_8 (struct dsi_data*) ;
 int FUNC_9 (struct dsi_data*) ;
 int FUNC_10 (struct dsi_data*) ;
 int FUNC_11 (struct dsi_data*,int ) ;
 int FUNC_12 (struct dsi_data*) ;
 int FUNC_13 (struct dsi_data*) ;
 int FUNC_14 (struct dsi_data*,int) ;
 int FUNC_15 (struct dsi_data*,int ) ;
 int FUNC_16 (struct dsi_data*) ;
 int FUNC_17 (struct dsi_data*,int ,int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct dsi_data*,int ,int,int) ;

__attribute__((used)) static int FUNC_22(struct dsi_data *VAR_12)
{
 int VAR_13;
 u32 VAR_14;

 FUNC_0("DSI CIO init starts");

 VAR_13 = FUNC_11(VAR_12, FUNC_13(VAR_12));
 if (VAR_13)
  return VAR_13;

 FUNC_12(VAR_12);




 FUNC_15(VAR_12, VAR_4);

 if (!FUNC_21(VAR_12, VAR_4, 30, 1)) {
  FUNC_1("CIO SCP Clock domain not coming out of reset.\n");
  VAR_13 = -VAR_7;
  goto err_scp_clk_dom;
 }

 VAR_13 = FUNC_16(VAR_12);
 if (VAR_13)
  goto err_scp_clk_dom;


 VAR_14 = FUNC_15(VAR_12, VAR_6);
 VAR_14 = FUNC_2(VAR_14, 1, 15, 15);
 VAR_14 = FUNC_2(VAR_14, 1, 14, 14);
 VAR_14 = FUNC_2(VAR_14, 1, 13, 13);
 VAR_14 = FUNC_2(VAR_14, 0x1fff, 12, 0);
 FUNC_17(VAR_12, VAR_6, VAR_14);

 if (VAR_12->ulps_enabled) {
  unsigned int VAR_15;
  int VAR_16;

  FUNC_0("manual ulps exit\n");
  VAR_15 = 0;

  for (VAR_16 = 0; VAR_16 < VAR_12->num_lanes_supported; ++VAR_16) {
   if (VAR_12->lanes[VAR_16].function == VAR_5)
    continue;
   VAR_15 |= 1 << VAR_16;
  }

  FUNC_5(VAR_12, VAR_15, 0);
 }

 VAR_13 = FUNC_6(VAR_12, VAR_3);
 if (VAR_13)
  goto err_cio_pwr;

 if (!FUNC_21(VAR_12, VAR_1, 29, 1)) {
  FUNC_1("CIO PWR clock domain not coming out of reset.\n");
  VAR_13 = -VAR_8;
  goto err_cio_pwr_dom;
 }

 FUNC_14(VAR_12, 1);
 FUNC_14(VAR_12, 0);
 FUNC_3(VAR_12, VAR_0, 1, 20, 20);

 VAR_13 = FUNC_8(VAR_12);
 if (VAR_13)
  goto err_tx_clk_esc_rst;

 if (VAR_12->ulps_enabled) {

  ktime_t VAR_17 = FUNC_18(1000 * 1000);
  FUNC_20(VAR_11);
  FUNC_19(&VAR_17, VAR_9);



  FUNC_4(VAR_12);
 }


 FUNC_3(VAR_12, VAR_6, 0, 15, 15);

 FUNC_7(VAR_12);

 if (VAR_12->mode == VAR_10) {

  FUNC_3(VAR_12, VAR_0,
   VAR_12->vm_timings.ddr_clk_always_on, 13, 13);
 }

 VAR_12->ulps_enabled = 0;

 FUNC_0("CIO init done\n");

 return 0;

err_tx_clk_esc_rst:
 FUNC_3(VAR_12, VAR_0, 0, 20, 20);
err_cio_pwr_dom:
 FUNC_6(VAR_12, VAR_2);
err_cio_pwr:
 if (VAR_12->ulps_enabled)
  FUNC_4(VAR_12);
err_scp_clk_dom:
 FUNC_10(VAR_12);
 FUNC_9(VAR_12);
 return VAR_13;
}
