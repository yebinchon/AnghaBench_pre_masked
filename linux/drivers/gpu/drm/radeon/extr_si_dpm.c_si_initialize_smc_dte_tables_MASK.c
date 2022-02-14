
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct si_dte_data {scalar_t__ k; scalar_t__ tdep_count; scalar_t__ t0; scalar_t__ max_t; scalar_t__ t_threshold; scalar_t__* tau; scalar_t__* r; scalar_t__* tdep_tau; scalar_t__* tdep_r; int * t_limits; int dte_mode; int temp_select; int window_size; } ;
struct si_power_info {int enable_dte; int sram_end; int dte_table_start; struct si_dte_data dte_data; } ;
struct radeon_device {int dummy; } ;
struct TYPE_4__ {void** Tdep_R; void** Tdep_tau; int * T_limits; scalar_t__ Tdep_count; void** R; void** tau; void* Tthreshold; int DTE_mode; int temp_select; int WindowSize; void* MaxT; void* T0; void* K; } ;
typedef TYPE_1__ Smc_SIslands_DTE_Configuration ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (struct radeon_device*,int ,scalar_t__*,int,int ) ;
 struct si_power_info* FUNC_4 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_5)
{
 struct si_power_info *VAR_6 = FUNC_4(VAR_5);
 int VAR_7 = 0;
 struct si_dte_data *VAR_8 = &VAR_6->dte_data;
 Smc_SIslands_DTE_Configuration *VAR_9 = ((void*)0);
 u32 VAR_10;
 u8 VAR_11;
 u32 VAR_12;

 if (VAR_8 == ((void*)0))
  VAR_6->enable_dte = 0;

 if (VAR_6->enable_dte == 0)
  return 0;

 if (VAR_8->k <= 0)
  return -VAR_0;

 VAR_9 = FUNC_2(sizeof(Smc_SIslands_DTE_Configuration), VAR_2);
 if (VAR_9 == ((void*)0)) {
  VAR_6->enable_dte = 0;
  return -VAR_1;
 }

 VAR_10 = VAR_8->k;

 if (VAR_10 > VAR_3)
  VAR_10 = VAR_3;

 VAR_11 = VAR_8->tdep_count;
 if (VAR_11 > VAR_4)
  VAR_11 = VAR_4;

 VAR_9->K = FUNC_0(VAR_10);
 VAR_9->T0 = FUNC_0(VAR_8->t0);
 VAR_9->MaxT = FUNC_0(VAR_8->max_t);
 VAR_9->WindowSize = VAR_8->window_size;
 VAR_9->temp_select = VAR_8->temp_select;
 VAR_9->DTE_mode = VAR_8->dte_mode;
 VAR_9->Tthreshold = FUNC_0(VAR_8->t_threshold);

 if (VAR_11 > 0)
  VAR_10--;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_9->tau[VAR_12] = FUNC_0(VAR_8->tau[VAR_12]);
  VAR_9->R[VAR_12] = FUNC_0(VAR_8->r[VAR_12]);
 }

 VAR_9->Tdep_count = VAR_11;

 for (VAR_12 = 0; VAR_12 < (u32)VAR_11; VAR_12++) {
  VAR_9->T_limits[VAR_12] = VAR_8->t_limits[VAR_12];
  VAR_9->Tdep_tau[VAR_12] = FUNC_0(VAR_8->tdep_tau[VAR_12]);
  VAR_9->Tdep_R[VAR_12] = FUNC_0(VAR_8->tdep_r[VAR_12]);
 }

 VAR_7 = FUNC_3(VAR_5, VAR_6->dte_table_start, (u8 *)VAR_9,
       sizeof(Smc_SIslands_DTE_Configuration), VAR_6->sram_end);
 FUNC_1(VAR_9);

 return VAR_7;
}
