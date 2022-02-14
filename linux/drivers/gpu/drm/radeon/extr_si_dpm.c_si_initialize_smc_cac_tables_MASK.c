
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
typedef int u16 ;
struct TYPE_12__ {int wintime; int leakage_minimum_temperature; int l2_lta_window_size; int shift_n; int lts_truncate; int dc_pwr_value; int cac_leakage; } ;
struct si_power_info {int sram_end; int cac_table_start; TYPE_4__* powertune_data; TYPE_3__ dyn_powertune_data; scalar_t__ enable_dte; } ;
struct TYPE_10__ {scalar_t__ load_line_slope; int cac_leakage; } ;
struct TYPE_11__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct ni_power_info {int enable_cac; int enable_power_containment; scalar_t__ driver_calculate_cac_leakage; } ;
struct TYPE_14__ {int log2_PG_LKG_SCALE; void* lkge_lut_Tstep; void* lkge_lut_T0; int cac_temp; void* dc_cac; void* calculation_repeats; void* WinTime; void* R_LL; void* lkge_lut_Vstep; void* lkge_lut_V0; int SHIFT_N; int lts_truncate_n; void* l2numWin_TDP; } ;
struct TYPE_13__ {int operating_temp; int shift_n_default; int * dc_cac; int cac_window; } ;
typedef TYPE_5__ PP_SIslands_CacConfig ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_5__* FUNC_5 (int,int ) ;
 struct ni_power_info* FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*,int ,int *,int,int ) ;
 int FUNC_10 (struct radeon_device*,int*,int*) ;
 int FUNC_11 (int,int) ;
 struct si_power_info* FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*,TYPE_5__*,int,int,int,int,int) ;
 int FUNC_14 (struct radeon_device*,TYPE_5__*,int,int,int) ;
 int FUNC_15 (struct radeon_device*,int ,int) ;

__attribute__((used)) static int FUNC_16(struct radeon_device *VAR_8)
{
 struct ni_power_info *VAR_9 = FUNC_6(VAR_8);
 struct si_power_info *VAR_10 = FUNC_12(VAR_8);
 PP_SIslands_CacConfig *VAR_11 = ((void*)0);
 u16 VAR_12, VAR_13, VAR_14;
 u16 VAR_15, VAR_16;
 u32 VAR_17, VAR_18;
 int VAR_19 = 0;
 u32 VAR_20 = FUNC_7(VAR_8) / 100;

 if (VAR_9->enable_cac == 0)
  return 0;

 VAR_11 = FUNC_5(sizeof(PP_SIslands_CacConfig), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_18 = FUNC_1(VAR_1) & ~VAR_0;
 VAR_18 |= FUNC_0(VAR_10->powertune_data->cac_window);
 FUNC_2(VAR_1, VAR_18);

 VAR_10->dyn_powertune_data.cac_leakage = VAR_8->pm.dpm.cac_leakage;
 VAR_10->dyn_powertune_data.dc_pwr_value =
  VAR_10->powertune_data->dc_cac[VAR_4];
 VAR_10->dyn_powertune_data.wintime = FUNC_8(VAR_8);
 VAR_10->dyn_powertune_data.shift_n = VAR_10->powertune_data->shift_n_default;

 VAR_10->dyn_powertune_data.leakage_minimum_temperature = 80 * 1000;

 VAR_19 = FUNC_10(VAR_8, &VAR_12, &VAR_13);
 if (VAR_19)
  goto done_free;

 VAR_14 = FUNC_11(VAR_12, VAR_13);
 VAR_13 = VAR_12 - (VAR_14 * (VAR_6 - 1));
 VAR_16 = 4;
 VAR_15 = 60;

 if (VAR_10->enable_dte || VAR_9->driver_calculate_cac_leakage)
  VAR_19 = FUNC_13(VAR_8, VAR_11,
      VAR_12, VAR_13, VAR_14,
      VAR_15, VAR_16);
 else
  VAR_19 = FUNC_14(VAR_8, VAR_11,
             VAR_12, VAR_13, VAR_14);
 if (VAR_19)
  goto done_free;

 VAR_17 = ((u32)VAR_8->pm.dpm.load_line_slope << VAR_7) / 100;

 VAR_11->l2numWin_TDP = FUNC_3(VAR_10->dyn_powertune_data.l2_lta_window_size);
 VAR_11->lts_truncate_n = VAR_10->dyn_powertune_data.lts_truncate;
 VAR_11->SHIFT_N = VAR_10->dyn_powertune_data.shift_n;
 VAR_11->lkge_lut_V0 = FUNC_3((u32)VAR_13);
 VAR_11->lkge_lut_Vstep = FUNC_3((u32)VAR_14);
 VAR_11->R_LL = FUNC_3(VAR_17);
 VAR_11->WinTime = FUNC_3(VAR_10->dyn_powertune_data.wintime);
 VAR_11->calculation_repeats = FUNC_3(2);
 VAR_11->dc_cac = FUNC_3(0);
 VAR_11->log2_PG_LKG_SCALE = 12;
 VAR_11->cac_temp = VAR_10->powertune_data->operating_temp;
 VAR_11->lkge_lut_T0 = FUNC_3((u32)VAR_15);
 VAR_11->lkge_lut_Tstep = FUNC_3((u32)VAR_16);

 VAR_19 = FUNC_9(VAR_8, VAR_10->cac_table_start, (u8 *)VAR_11,
       sizeof(PP_SIslands_CacConfig), VAR_10->sram_end);

 if (VAR_19)
  goto done_free;

 VAR_19 = FUNC_15(VAR_8, VAR_5, VAR_20);

done_free:
 if (VAR_19) {
  VAR_9->enable_cac = 0;
  VAR_9->enable_power_containment = 0;
 }

 FUNC_4(VAR_11);

 return 0;
}
