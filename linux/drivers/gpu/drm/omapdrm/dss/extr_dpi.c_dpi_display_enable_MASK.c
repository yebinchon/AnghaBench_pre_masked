
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {int dispc_channel; } ;
struct dpi_data {int lock; scalar_t__ vdds_dsi_reg; TYPE_1__* dss; scalar_t__ pll; struct omap_dss_device output; int id; } ;
struct TYPE_2__ {int dispc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dpi_data*) ;
 struct dpi_data* FUNC_3 (struct omap_dss_device*) ;
 int FUNC_4 (struct dpi_data*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (struct omap_dss_device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct omap_dss_device *VAR_0)
{
 struct dpi_data *VAR_1 = FUNC_3(VAR_0);
 struct omap_dss_device *VAR_2 = &VAR_1->output;
 int VAR_3;

 FUNC_10(&VAR_1->lock);

 if (VAR_1->vdds_dsi_reg) {
  VAR_3 = FUNC_13(VAR_1->vdds_dsi_reg);
  if (VAR_3)
   goto err_reg_enable;
 }

 VAR_3 = FUNC_0(VAR_1->dss->dispc);
 if (VAR_3)
  goto err_get_dispc;

 VAR_3 = FUNC_5(VAR_1->dss, VAR_1->id, VAR_2->dispc_channel);
 if (VAR_3)
  goto err_src_sel;

 if (VAR_1->pll) {
  VAR_3 = FUNC_8(VAR_1->pll);
  if (VAR_3)
   goto err_pll_init;
 }

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  goto err_set_mode;

 FUNC_2(VAR_1);

 FUNC_9(2);

 VAR_3 = FUNC_6(&VAR_1->output);
 if (VAR_3)
  goto err_mgr_enable;

 FUNC_11(&VAR_1->lock);

 return;

err_mgr_enable:
err_set_mode:
 if (VAR_1->pll)
  FUNC_7(VAR_1->pll);
err_pll_init:
err_src_sel:
 FUNC_1(VAR_1->dss->dispc);
err_get_dispc:
 if (VAR_1->vdds_dsi_reg)
  FUNC_12(VAR_1->vdds_dsi_reg);
err_reg_enable:
 FUNC_11(&VAR_1->lock);
}
