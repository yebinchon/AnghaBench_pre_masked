
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct vega20_single_dpm_table {int count; TYPE_1__* dpm_levels; } ;
struct vega20_dpm_table {struct vega20_single_dpm_table mem_table; struct vega20_single_dpm_table gfx_table; } ;
struct smu_dpm_context {int dpm_level; struct vega20_dpm_table* golden_dpm_context; struct vega20_dpm_table* dpm_context; } ;
struct TYPE_5__ {int gfxclk; } ;
struct TYPE_6__ {TYPE_2__ boot_values; } ;
struct smu_context {int mutex; TYPE_3__ smu_table; struct smu_dpm_context smu_dpm; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
struct TYPE_4__ {int value; } ;
typedef int PPCLK_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct smu_context*,int ) ;
 int FUNC_4 (struct smu_context*,int ,int ) ;
 int FUNC_5 (struct smu_context*,struct vega20_single_dpm_table*,int ) ;
 int FUNC_6 (struct smu_context*,int,int) ;

__attribute__((used)) static int FUNC_7(struct smu_context *VAR_8,
        enum smu_clk_type VAR_9,
        uint32_t VAR_10)
{
 struct smu_dpm_context *VAR_11 = &VAR_8->smu_dpm;
 struct vega20_dpm_table *VAR_12 = ((void*)0);
 struct vega20_dpm_table *VAR_13 = ((void*)0);
 struct vega20_single_dpm_table *VAR_14;
 struct vega20_single_dpm_table *VAR_15;
 uint32_t VAR_16, VAR_17;
 int VAR_18 = 0;
 int VAR_19;
 PPCLK_e VAR_20;

 FUNC_0(&(VAR_8->mutex));

 VAR_12 = VAR_11->dpm_context;
 VAR_13 = VAR_11->golden_dpm_context;

 switch (VAR_9) {
 case 128:
  VAR_14 = &(VAR_12->gfx_table);
  VAR_15 = &(VAR_13->gfx_table);
  VAR_19 = FUNC_3(VAR_8, VAR_6);
  VAR_20 = VAR_4;
  VAR_17 = VAR_2;
  break;
 case 129:
  VAR_14 = &(VAR_12->mem_table);
  VAR_15 = &(VAR_13->mem_table);
  VAR_19 = FUNC_3(VAR_8, VAR_7);
  VAR_20 = VAR_5;
  VAR_17 = VAR_3;
  break;
 default:
  VAR_18 = -VAR_1;
  break;
 }

 if (VAR_18)
  goto set_od_failed;

 VAR_16 = VAR_15->dpm_levels[VAR_15->count - 1].value * VAR_10;
 VAR_16 /= 100;
 VAR_16 += VAR_15->dpm_levels[VAR_15->count - 1].value;

 VAR_18 = FUNC_6(VAR_8, VAR_17, VAR_16);
 if (VAR_18) {
  FUNC_2("[Setoverdrive] failed to set od clk!\n");
  goto set_od_failed;
 }

 if (VAR_19) {
  VAR_18 = FUNC_5(VAR_8, VAR_14,
        VAR_20);
  if (VAR_18) {
   FUNC_2("[Setoverdrive] failed to refresh dpm table!\n");
   goto set_od_failed;
  }
 } else {
  VAR_14->count = 1;
  VAR_14->dpm_levels[0].value = VAR_8->smu_table.boot_values.gfxclk / 100;
 }

 VAR_18 = FUNC_4(VAR_8, VAR_11->dpm_level,
         VAR_0);

set_od_failed:
 FUNC_1(&(VAR_8->mutex));

 return VAR_18;
}
