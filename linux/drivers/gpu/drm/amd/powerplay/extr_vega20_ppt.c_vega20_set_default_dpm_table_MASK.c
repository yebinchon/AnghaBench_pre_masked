
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vega20_single_dpm_table {int count; int dpm_state; TYPE_1__* dpm_levels; } ;
struct vega20_dpm_table {struct vega20_single_dpm_table fclk_table; struct vega20_single_dpm_table phy_table; struct vega20_single_dpm_table display_table; struct vega20_single_dpm_table pixel_table; struct vega20_single_dpm_table dcef_table; struct vega20_single_dpm_table dclk_table; struct vega20_single_dpm_table vclk_table; struct vega20_single_dpm_table eclk_table; struct vega20_single_dpm_table mem_table; struct vega20_single_dpm_table gfx_table; struct vega20_single_dpm_table soc_table; } ;
struct smu_dpm_context {int golden_dpm_context; struct vega20_dpm_table* dpm_context; } ;
struct TYPE_5__ {int socclk; int gfxclk; int uclk; int eclk; int vclk; int dclk; int dcefclk; } ;
struct TYPE_6__ {TYPE_2__ boot_values; } ;
struct smu_context {TYPE_3__ smu_table; struct smu_dpm_context smu_dpm; } ;
struct TYPE_4__ {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (int ,struct vega20_dpm_table*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct smu_context*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct smu_context*,struct vega20_single_dpm_table*,int ) ;

__attribute__((used)) static int FUNC_5(struct smu_context *VAR_18)
{
 int VAR_19;

 struct smu_dpm_context *VAR_20 = &VAR_18->smu_dpm;
 struct vega20_dpm_table *VAR_21 = ((void*)0);
 struct vega20_single_dpm_table *VAR_22;

 VAR_21 = VAR_20->dpm_context;


 VAR_22 = &(VAR_21->soc_table);

 if (FUNC_2(VAR_18, VAR_14)) {
  VAR_19 = FUNC_4(VAR_18, VAR_22,
        VAR_9);
  if (VAR_19) {
   FUNC_1("[SetupDefaultDpmTable] failed to get socclk dpm levels!");
   return VAR_19;
  }
 } else {
  VAR_22->count = 1;
  VAR_22->dpm_levels[0].value = VAR_18->smu_table.boot_values.socclk / 100;
 }
 FUNC_3(&(VAR_22->dpm_state));


 VAR_22 = &(VAR_21->gfx_table);

 if (FUNC_2(VAR_18, VAR_13)) {
  VAR_19 = FUNC_4(VAR_18, VAR_22,
        VAR_6);
  if (VAR_19) {
   FUNC_1("[SetupDefaultDpmTable] failed to get gfxclk dpm levels!");
   return VAR_19;
  }
 } else {
  VAR_22->count = 1;
  VAR_22->dpm_levels[0].value = VAR_18->smu_table.boot_values.gfxclk / 100;
 }
 FUNC_3(&(VAR_22->dpm_state));


 VAR_22 = &(VAR_21->mem_table);

 if (FUNC_2(VAR_18, VAR_15)) {
  VAR_19 = FUNC_4(VAR_18, VAR_22,
        VAR_10);
  if (VAR_19) {
   FUNC_1("[SetupDefaultDpmTable] failed to get memclk dpm levels!");
   return VAR_19;
  }
 } else {
  VAR_22->count = 1;
  VAR_22->dpm_levels[0].value = VAR_18->smu_table.boot_values.uclk / 100;
 }
 FUNC_3(&(VAR_22->dpm_state));


 VAR_22 = &(VAR_21->eclk_table);

 if (FUNC_2(VAR_18, VAR_17)) {
  VAR_19 = FUNC_4(VAR_18, VAR_22, VAR_4);
  if (VAR_19) {
   FUNC_1("[SetupDefaultDpmTable] failed to get eclk dpm levels!");
   return VAR_19;
  }
 } else {
  VAR_22->count = 1;
  VAR_22->dpm_levels[0].value = VAR_18->smu_table.boot_values.eclk / 100;
 }
 FUNC_3(&(VAR_22->dpm_state));


 VAR_22 = &(VAR_21->vclk_table);

 if (FUNC_2(VAR_18, VAR_16)) {
  VAR_19 = FUNC_4(VAR_18, VAR_22, VAR_11);
  if (VAR_19) {
   FUNC_1("[SetupDefaultDpmTable] failed to get vclk dpm levels!");
   return VAR_19;
  }
 } else {
  VAR_22->count = 1;
  VAR_22->dpm_levels[0].value = VAR_18->smu_table.boot_values.vclk / 100;
 }
 FUNC_3(&(VAR_22->dpm_state));


 VAR_22 = &(VAR_21->dclk_table);

 if (FUNC_2(VAR_18, VAR_16)) {
  VAR_19 = FUNC_4(VAR_18, VAR_22, VAR_2);
  if (VAR_19) {
   FUNC_1("[SetupDefaultDpmTable] failed to get dclk dpm levels!");
   return VAR_19;
  }
 } else {
  VAR_22->count = 1;
  VAR_22->dpm_levels[0].value = VAR_18->smu_table.boot_values.dclk / 100;
 }
 FUNC_3(&(VAR_22->dpm_state));


 VAR_22 = &(VAR_21->dcef_table);

 if (FUNC_2(VAR_18, VAR_12)) {
  VAR_19 = FUNC_4(VAR_18, VAR_22,
        VAR_1);
  if (VAR_19) {
   FUNC_1("[SetupDefaultDpmTable] failed to get dcefclk dpm levels!");
   return VAR_19;
  }
 } else {
  VAR_22->count = 1;
  VAR_22->dpm_levels[0].value = VAR_18->smu_table.boot_values.dcefclk / 100;
 }
 FUNC_3(&(VAR_22->dpm_state));


 VAR_22 = &(VAR_21->pixel_table);

 if (FUNC_2(VAR_18, VAR_12)) {
  VAR_19 = FUNC_4(VAR_18, VAR_22,
        VAR_8);
  if (VAR_19) {
   FUNC_1("[SetupDefaultDpmTable] failed to get pixclk dpm levels!");
   return VAR_19;
  }
 } else {
  VAR_22->count = 0;
 }
 FUNC_3(&(VAR_22->dpm_state));


 VAR_22 = &(VAR_21->display_table);

 if (FUNC_2(VAR_18, VAR_12)) {
  VAR_19 = FUNC_4(VAR_18, VAR_22,
        VAR_3);
  if (VAR_19) {
   FUNC_1("[SetupDefaultDpmTable] failed to get dispclk dpm levels!");
   return VAR_19;
  }
 } else {
  VAR_22->count = 0;
 }
 FUNC_3(&(VAR_22->dpm_state));


 VAR_22 = &(VAR_21->phy_table);

 if (FUNC_2(VAR_18, VAR_12)) {
  VAR_19 = FUNC_4(VAR_18, VAR_22,
        VAR_7);
  if (VAR_19) {
   FUNC_1("[SetupDefaultDpmTable] failed to get phyclk dpm levels!");
   return VAR_19;
  }
 } else {
  VAR_22->count = 0;
 }
 FUNC_3(&(VAR_22->dpm_state));


 VAR_22 = &(VAR_21->fclk_table);

 if (FUNC_2(VAR_18,VAR_0)) {
  VAR_19 = FUNC_4(VAR_18, VAR_22,
        VAR_5);
  if (VAR_19) {
   FUNC_1("[SetupDefaultDpmTable] failed to get fclk dpm levels!");
   return VAR_19;
  }
 } else {
  VAR_22->count = 0;
 }
 FUNC_3(&(VAR_22->dpm_state));

 FUNC_0(VAR_20->golden_dpm_context, VAR_21,
        sizeof(struct vega20_dpm_table));

 return 0;
}
