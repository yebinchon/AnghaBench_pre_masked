
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct dsi_data* private; } ;
struct dss_pll_clock_info {int clkdco; int * mX; int * clkout; int m; int n; int fint; } ;
struct dss_pll {int clkin; struct dss_pll_clock_info cinfo; } ;
struct TYPE_2__ {int lp_clk; } ;
struct dsi_data {int module_id; TYPE_1__ current_lp_cinfo; int dss; struct dss_pll pll; } ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dsi_data*) ;
 int FUNC_2 (struct dsi_data*) ;
 scalar_t__ FUNC_3 (struct dsi_data*) ;
 int FUNC_4 (struct dsi_data*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct seq_file*,char*,int,...) ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_7, void *VAR_8)
{
 struct dsi_data *VAR_9 = VAR_7->private;
 struct dss_pll_clock_info *VAR_10 = &VAR_9->pll.cinfo;
 enum dss_clk_source VAR_11, VAR_12;
 int VAR_13 = VAR_9->module_id;
 struct dss_pll *VAR_14 = &VAR_9->pll;

 VAR_11 = FUNC_6(VAR_9->dss);
 VAR_12 = FUNC_7(VAR_9->dss, VAR_13);

 if (FUNC_3(VAR_9))
  return 0;

 FUNC_8(VAR_7, "- DSI%d PLL -\n", VAR_13 + 1);

 FUNC_8(VAR_7, "dsi pll clkin\t%lu\n", FUNC_0(VAR_14->clkin));

 FUNC_8(VAR_7, "Fint\t\t%-16lun %u\n", VAR_10->fint, VAR_10->n);

 FUNC_8(VAR_7, "CLKIN4DDR\t%-16lum %u\n",
   VAR_10->clkdco, VAR_10->m);

 FUNC_8(VAR_7, "DSI_PLL_HSDIV_DISPC (%s)\t%-16lum_dispc %u\t(%s)\n",
   FUNC_5(VAR_13 == 0 ?
    VAR_1 :
    VAR_3),
   VAR_10->clkout[VAR_5],
   VAR_10->mX[VAR_5],
   VAR_11 == VAR_0 ?
   "off" : "on");

 FUNC_8(VAR_7, "DSI_PLL_HSDIV_DSI (%s)\t%-16lum_dsi %u\t(%s)\n",
   FUNC_5(VAR_13 == 0 ?
    VAR_2 :
    VAR_4),
   VAR_10->clkout[VAR_6],
   VAR_10->mX[VAR_6],
   VAR_12 == VAR_0 ?
   "off" : "on");

 FUNC_8(VAR_7, "- DSI%d -\n", VAR_13 + 1);

 FUNC_8(VAR_7, "dsi fclk source = %s\n",
   FUNC_5(VAR_12));

 FUNC_8(VAR_7, "DSI_FCLK\t%lu\n", FUNC_1(VAR_9));

 FUNC_8(VAR_7, "DDR_CLK\t\t%lu\n",
   VAR_10->clkdco / 4);

 FUNC_8(VAR_7, "TxByteClkHS\t%lu\n", FUNC_2(VAR_9));

 FUNC_8(VAR_7, "LP_CLK\t\t%lu\n", VAR_9->current_lp_cinfo.lp_clk);

 FUNC_4(VAR_9);

 return 0;
}
