
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rv7xx_power_info {int sram_end; } ;
struct TYPE_10__ {int cac_leakage; } ;
struct TYPE_11__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct TYPE_13__ {int lts_truncate_n; int l2num_win_tdp; scalar_t__ num_win_tdp; int mc_rd_weight; int mc_wr_weight; scalar_t__ allow_ovrflw; scalar_t__ bif_cac_value; scalar_t__ dc_cac_value; scalar_t__ pwr_const; int i_leakage; } ;
struct ni_power_info {int enable_cac; int enable_power_containment; int cac_table_start; TYPE_4__ cac_data; scalar_t__ driver_calculate_cac_leakage; int lts_truncate; int lta_window_size; TYPE_3__* cac_weights; scalar_t__* dc_cac_table; } ;
struct TYPE_14__ {int lts_truncate_n; int l2numWin_TDP; scalar_t__ numWin_TDP; int MCRdWeight; int MCWrWeight; scalar_t__ AllowOvrflw; void* bif_cacValue; void* dc_cacValue; void* pwr_const; int * cac_bif_lut; } ;
struct TYPE_12__ {int mc_read_weight; int mc_write_weight; int * pcie_cac; scalar_t__* dc_cac; int tid_unit; int tid_cnt; } ;
typedef TYPE_5__ PP_NIslands_CACTABLES ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,int) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_5__*) ;
 TYPE_5__* FUNC_6 (int,int ) ;
 struct ni_power_info* FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,TYPE_5__*) ;
 int FUNC_9 (struct radeon_device*,TYPE_5__*) ;
 int FUNC_10 (struct radeon_device*,int ,int *,int,int ) ;
 struct rv7xx_power_info* FUNC_11 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_12(struct radeon_device *VAR_8)
{
 struct rv7xx_power_info *VAR_9 = FUNC_11(VAR_8);
 struct ni_power_info *VAR_10 = FUNC_7(VAR_8);
 PP_NIslands_CACTABLES *VAR_11 = ((void*)0);
 int VAR_12, VAR_13;
 u32 VAR_14;

 if (VAR_10->enable_cac == 0)
  return 0;

 VAR_11 = FUNC_6(sizeof(PP_NIslands_CACTABLES), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_14 = FUNC_0(VAR_0) & ~(VAR_6 | VAR_7);
 VAR_14 |= (FUNC_1(VAR_10->cac_weights->tid_cnt) |
  FUNC_2(VAR_10->cac_weights->tid_unit));
 FUNC_3(VAR_0, VAR_14);

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
  VAR_10->dc_cac_table[VAR_12] = VAR_10->cac_weights->dc_cac[VAR_12];

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
  VAR_11->cac_bif_lut[VAR_12] = VAR_10->cac_weights->pcie_cac[VAR_12];

 VAR_10->cac_data.i_leakage = VAR_8->pm.dpm.cac_leakage;
 VAR_10->cac_data.pwr_const = 0;
 VAR_10->cac_data.dc_cac_value = VAR_10->dc_cac_table[VAR_3];
 VAR_10->cac_data.bif_cac_value = 0;
 VAR_10->cac_data.mc_wr_weight = VAR_10->cac_weights->mc_write_weight;
 VAR_10->cac_data.mc_rd_weight = VAR_10->cac_weights->mc_read_weight;
 VAR_10->cac_data.allow_ovrflw = 0;
 VAR_10->cac_data.l2num_win_tdp = VAR_10->lta_window_size;
 VAR_10->cac_data.num_win_tdp = 0;
 VAR_10->cac_data.lts_truncate_n = VAR_10->lts_truncate;

 if (VAR_10->driver_calculate_cac_leakage)
  VAR_13 = FUNC_8(VAR_8, VAR_11);
 else
  VAR_13 = FUNC_9(VAR_8, VAR_11);

 if (VAR_13)
  goto done_free;

 VAR_11->pwr_const = FUNC_4(VAR_10->cac_data.pwr_const);
 VAR_11->dc_cacValue = FUNC_4(VAR_10->cac_data.dc_cac_value);
 VAR_11->bif_cacValue = FUNC_4(VAR_10->cac_data.bif_cac_value);
 VAR_11->AllowOvrflw = VAR_10->cac_data.allow_ovrflw;
 VAR_11->MCWrWeight = VAR_10->cac_data.mc_wr_weight;
 VAR_11->MCRdWeight = VAR_10->cac_data.mc_rd_weight;
 VAR_11->numWin_TDP = VAR_10->cac_data.num_win_tdp;
 VAR_11->l2numWin_TDP = VAR_10->cac_data.l2num_win_tdp;
 VAR_11->lts_truncate_n = VAR_10->cac_data.lts_truncate_n;

 VAR_13 = FUNC_10(VAR_8, VAR_10->cac_table_start, (u8 *)VAR_11,
          sizeof(PP_NIslands_CACTABLES), VAR_9->sram_end);

done_free:
 if (VAR_13) {
  VAR_10->enable_cac = 0;
  VAR_10->enable_power_containment = 0;
 }

 FUNC_5(VAR_11);

 return 0;
}
