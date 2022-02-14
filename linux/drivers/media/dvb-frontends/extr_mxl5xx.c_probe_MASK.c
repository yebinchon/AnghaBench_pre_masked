
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mxl5xx_cfg {int ts_clk; int cap; int clk; } ;
struct mxl {TYPE_1__* base; int i2cdev; } ;
struct MXL_HYDRA_MPEGOUT_PARAM_T {int max_mpeg_clk_rate; void* mpeg_valid_pol; int mpeg_sync_pulse_width; void* mpeg_sync_pol; int mpeg_mode; int mpeg_error_indication; int mpeg_clk_type; int mpeg_clk_pol; int mpeg_clk_phase; int lsb_or_msb_first; int enable; } ;
typedef enum MXL_HYDRA_DEMOD_ID_E { ____Placeholder_MXL_HYDRA_DEMOD_ID_E } MXL_HYDRA_DEMOD_ID_E ;
struct TYPE_2__ {int type; int can_clkout; int demod_num; int tuner_num; int chan_bond; int chipversion; int sku_type; void* ts_map; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct mxl*,int ,int ,int ) ;
 int FUNC_1 (struct mxl*) ;
 int FUNC_2 (struct mxl*,int,struct MXL_HYDRA_MPEGOUT_PARAM_T*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct mxl*) ;
 int FUNC_5 (struct mxl*) ;
 int FUNC_6 (struct mxl*,struct mxl5xx_cfg*) ;
 int FUNC_7 (struct mxl*,int,int,int,int*) ;
 int FUNC_8 (struct mxl*,int) ;
 void* VAR_18 ;
 void* VAR_19 ;
 int FUNC_9 (struct mxl*,int,int,int,int) ;
 int FUNC_10 (struct mxl*) ;

__attribute__((used)) static int FUNC_11(struct mxl *VAR_20, struct mxl5xx_cfg *VAR_21)
{
 u32 VAR_22;
 int VAR_23, VAR_24, VAR_25;
 struct MXL_HYDRA_MPEGOUT_PARAM_T VAR_26;

 VAR_20->base->ts_map = VAR_18;

 switch (VAR_20->base->type) {
 case 133:
 case 132:
  VAR_20->base->can_clkout = 1;
  VAR_20->base->demod_num = 8;
  VAR_20->base->tuner_num = 1;
  VAR_20->base->sku_type = VAR_14;
  break;
 case 131:
  VAR_20->base->can_clkout = 1;
  VAR_20->base->demod_num = 8;
  VAR_20->base->tuner_num = 3;
  VAR_20->base->sku_type = VAR_15;
  break;
 case 129:
  VAR_20->base->can_clkout = 0;
  VAR_20->base->demod_num = 8;
  VAR_20->base->tuner_num = 4;
  VAR_20->base->sku_type = VAR_17;
  break;
 case 137:
  VAR_20->base->can_clkout = 0;
  VAR_20->base->demod_num = 4;
  VAR_20->base->tuner_num = 4;
  VAR_20->base->sku_type = VAR_11;
  VAR_20->base->ts_map = VAR_19;
  break;
 case 140:
 case 139:
  VAR_20->base->can_clkout = 0;
  VAR_20->base->demod_num = 4;
  VAR_20->base->tuner_num = 1;
  VAR_20->base->sku_type = VAR_9;
  VAR_20->base->ts_map = VAR_19;
  break;
 case 136:
 case 135:
  VAR_20->base->can_clkout = 0;
  VAR_20->base->demod_num = 6;
  VAR_20->base->tuner_num = 1;
  VAR_20->base->sku_type = VAR_12;
  break;
 case 134:
  VAR_20->base->can_clkout = 0;
  VAR_20->base->demod_num = 8;
  VAR_20->base->tuner_num = 1;
  VAR_20->base->chan_bond = 1;
  VAR_20->base->sku_type = VAR_13;
  break;
 case 138:
  VAR_20->base->can_clkout = 1;
  VAR_20->base->demod_num = 4;
  VAR_20->base->tuner_num = 3;
  VAR_20->base->sku_type = VAR_10;
  VAR_20->base->ts_map = VAR_19;
  break;
 case 128:
 case 130:
 default:
  VAR_20->base->can_clkout = 0;
  VAR_20->base->demod_num = 8;
  VAR_20->base->tuner_num = 4;
  VAR_20->base->sku_type = VAR_16;
  break;
 }

 VAR_24 = FUNC_10(VAR_20);
 if (VAR_24)
  return VAR_24;

 FUNC_9(VAR_20, 0x80030014, 9, 1, 1);
 FUNC_9(VAR_20, 0x8003003C, 12, 1, 1);
 VAR_24 = FUNC_7(VAR_20, 0x80030000, 12, 4, &VAR_22);
 if (VAR_24)
  VAR_20->base->chipversion = 0;
 else
  VAR_20->base->chipversion = (VAR_22 == 2) ? 2 : 1;
 FUNC_3(VAR_20->i2cdev, "Hydra chip version %u\n",
  VAR_20->base->chipversion);

 FUNC_0(VAR_20, VAR_21->clk, VAR_21->cap, 0);

 VAR_23 = FUNC_4(VAR_20);
 if (!VAR_23) {
  VAR_24 = FUNC_6(VAR_20, VAR_21);
  if (VAR_24)
   return VAR_24;
 }
 FUNC_5(VAR_20);

 FUNC_1(VAR_20);
 VAR_26.enable = VAR_0;
 VAR_26.lsb_or_msb_first = VAR_7;

 if (VAR_21->ts_clk)
  VAR_26.max_mpeg_clk_rate = VAR_21->ts_clk;
 else
  VAR_26.max_mpeg_clk_rate = 69;
 VAR_26.mpeg_clk_phase = VAR_4;
 VAR_26.mpeg_clk_pol = VAR_3;

 VAR_26.mpeg_clk_type = VAR_2;
 VAR_26.mpeg_error_indication =
  VAR_5;
 VAR_26.mpeg_mode = VAR_6;
 VAR_26.mpeg_sync_pol = VAR_1;
 VAR_26.mpeg_sync_pulse_width = VAR_8;
 VAR_26.mpeg_valid_pol = VAR_1;

 for (VAR_25 = 0; VAR_25 < VAR_20->base->demod_num; VAR_25++) {
  VAR_24 = FUNC_2(VAR_20, (enum MXL_HYDRA_DEMOD_ID_E) VAR_25,
       &VAR_26);
  if (VAR_24)
   return VAR_24;
 }
 FUNC_8(VAR_20, 1);
 return 0;
}
