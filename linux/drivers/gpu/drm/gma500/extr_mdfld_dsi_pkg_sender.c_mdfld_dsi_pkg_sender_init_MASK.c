
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psb_offset {int status; int surf; int linoff; int conf; int cntr; int dpll; } ;
struct mdfld_dsi_pkg_sender {int pipe; int lock; int mipi_cmd_len_reg; int mipi_cmd_addr_reg; int mipi_data_len_reg; int mipi_data_addr_reg; int mipi_gen_fifo_stat_reg; int mipi_hs_gen_ctrl_reg; int mipi_lp_gen_ctrl_reg; int mipi_hs_gen_data_reg; int mipi_lp_gen_data_reg; int mipi_intr_stat_reg; int pipestat_reg; int dspsurf_reg; int dsplinoff_reg; int pipeconf_reg; int dspcntr_reg; int dpll_reg; int status; scalar_t__ panel_mode; scalar_t__ pkg_num; struct mdfld_dsi_connector* dsi_connector; struct drm_device* dev; } ;
struct mdfld_dsi_connector {struct mdfld_dsi_pkg_sender* pkg_sender; } ;
struct mdfld_dsi_config {struct drm_device* dev; } ;
struct drm_psb_private {struct psb_offset* regmap; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mdfld_dsi_pkg_sender*) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_4 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct mdfld_dsi_pkg_sender* FUNC_15 (int,int ) ;
 int FUNC_16 (struct mdfld_dsi_config*,int) ;
 struct mdfld_dsi_config* FUNC_17 (struct mdfld_dsi_connector*) ;
 scalar_t__ FUNC_18 (struct drm_device*,int) ;
 int FUNC_19 (int *) ;

int FUNC_20(struct mdfld_dsi_connector *VAR_7,
        int VAR_8)
{
 struct mdfld_dsi_pkg_sender *VAR_9;
 struct mdfld_dsi_config *VAR_10 =
    FUNC_17(VAR_7);
 struct drm_device *VAR_11 = VAR_10->dev;
 struct drm_psb_private *VAR_12 = VAR_11->dev_private;
 const struct psb_offset *VAR_13 = &VAR_12->regmap[VAR_8];
 u32 VAR_14 = 0;

 if (!VAR_7) {
  FUNC_0("Invalid parameter\n");
  return -VAR_0;
 }

 VAR_9 = VAR_7->pkg_sender;

 if (!VAR_9 || FUNC_1(VAR_9)) {
  VAR_9 = FUNC_15(sizeof(struct mdfld_dsi_pkg_sender),
        VAR_2);
  if (!VAR_9) {
   FUNC_0("Create DSI pkg sender failed\n");
   return -VAR_1;
  }
  VAR_7->pkg_sender = (void *)VAR_9;
 }

 VAR_9->dev = VAR_11;
 VAR_9->dsi_connector = VAR_7;
 VAR_9->pipe = VAR_8;
 VAR_9->pkg_num = 0;
 VAR_9->panel_mode = 0;
 VAR_9->status = VAR_3;



 VAR_9->dpll_reg = VAR_13->dpll;
 VAR_9->dspcntr_reg = VAR_13->cntr;
 VAR_9->pipeconf_reg = VAR_13->conf;
 VAR_9->dsplinoff_reg = VAR_13->linoff;
 VAR_9->dspsurf_reg = VAR_13->surf;
 VAR_9->pipestat_reg = VAR_13->status;

 VAR_9->mipi_intr_stat_reg = FUNC_9(VAR_8);
 VAR_9->mipi_lp_gen_data_reg = FUNC_11(VAR_8);
 VAR_9->mipi_hs_gen_data_reg = FUNC_8(VAR_8);
 VAR_9->mipi_lp_gen_ctrl_reg = FUNC_10(VAR_8);
 VAR_9->mipi_hs_gen_ctrl_reg = FUNC_7(VAR_8);
 VAR_9->mipi_gen_fifo_stat_reg = FUNC_6(VAR_8);
 VAR_9->mipi_data_addr_reg = FUNC_4(VAR_8);
 VAR_9->mipi_data_len_reg = FUNC_5(VAR_8);
 VAR_9->mipi_cmd_addr_reg = FUNC_2(VAR_8);
 VAR_9->mipi_cmd_len_reg = FUNC_3(VAR_8);


 FUNC_19(&VAR_9->lock);

 if (FUNC_18(VAR_11, VAR_8) != VAR_6) {




  VAR_14 = VAR_4 | VAR_5;

  if (VAR_8 == 0)
   VAR_14 |= 0x2;

  FUNC_14(FUNC_12(VAR_8), VAR_14);
  FUNC_13(FUNC_12(VAR_8));


  FUNC_16(VAR_10, VAR_8);
 }

 return 0;
}
