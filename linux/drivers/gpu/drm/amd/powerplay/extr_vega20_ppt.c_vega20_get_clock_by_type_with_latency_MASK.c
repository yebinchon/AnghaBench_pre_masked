
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vega20_single_dpm_table {int dummy; } ;
struct vega20_dpm_table {struct vega20_single_dpm_table soc_table; struct vega20_single_dpm_table dcef_table; struct vega20_single_dpm_table mem_table; struct vega20_single_dpm_table gfx_table; } ;
struct smu_dpm_context {struct vega20_dpm_table* dpm_context; } ;
struct smu_context {int mutex; struct smu_dpm_context smu_dpm; } ;
struct pp_clock_levels_with_latency {int dummy; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;


 int VAR_0 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct smu_context*,struct pp_clock_levels_with_latency*,struct vega20_single_dpm_table*) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_1,
       enum smu_clk_type VAR_2,
       struct pp_clock_levels_with_latency *VAR_3)
{
 int VAR_4;
 struct vega20_single_dpm_table *VAR_5;
 struct smu_dpm_context *VAR_6 = &VAR_1->smu_dpm;
 struct vega20_dpm_table *VAR_7 = ((void*)0);

 VAR_7 = VAR_6->dpm_context;

 FUNC_0(&VAR_1->mutex);

 switch (VAR_2) {
 case 130:
  VAR_5 = &(VAR_7->gfx_table);
  VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_5);
  break;
 case 129:
  VAR_5 = &(VAR_7->mem_table);
  VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_5);
  break;
 case 131:
  VAR_5 = &(VAR_7->dcef_table);
  VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_5);
  break;
 case 128:
  VAR_5 = &(VAR_7->soc_table);
  VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_5);
  break;
 default:
  VAR_4 = -VAR_0;
 }

 FUNC_1(&VAR_1->mutex);
 return VAR_4;
}
