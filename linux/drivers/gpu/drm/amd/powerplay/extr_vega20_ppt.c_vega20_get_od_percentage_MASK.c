
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vega20_single_dpm_table {int count; TYPE_1__* dpm_levels; } ;
struct vega20_dpm_table {struct vega20_single_dpm_table mem_table; struct vega20_single_dpm_table gfx_table; } ;
struct smu_dpm_context {struct vega20_dpm_table* golden_dpm_context; struct vega20_dpm_table* dpm_context; } ;
struct smu_context {struct smu_dpm_context smu_dpm; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
struct TYPE_2__ {int value; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;



__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1,
        enum smu_clk_type VAR_2)
{
 struct smu_dpm_context *VAR_3 = &VAR_1->smu_dpm;
 struct vega20_dpm_table *VAR_4 = ((void*)0);
 struct vega20_dpm_table *VAR_5 = ((void*)0);
 struct vega20_single_dpm_table *VAR_6;
 struct vega20_single_dpm_table *VAR_7;
 int VAR_8, VAR_9;

 VAR_4 = VAR_3->dpm_context;
 VAR_5 = VAR_3->golden_dpm_context;

 switch (VAR_2) {
 case 128:
  VAR_6 = &(VAR_4->gfx_table);
  VAR_7 = &(VAR_5->gfx_table);
  break;
 case 129:
  VAR_6 = &(VAR_4->mem_table);
  VAR_7 = &(VAR_5->mem_table);
  break;
 default:
  return -VAR_0;
  break;
 }

 VAR_8 = VAR_6->dpm_levels[VAR_6->count - 1].value;
 VAR_9 = VAR_7->dpm_levels[VAR_7->count - 1].value;

 VAR_8 -= VAR_9;
 VAR_8 = FUNC_0(VAR_8 * 100, VAR_9);

 return VAR_8;
}
