
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smu_dpm_context {struct arcturus_dpm_table* dpm_context; } ;
struct smu_context {struct smu_dpm_context smu_dpm; } ;
struct pp_clock_levels_with_latency {int num_levels; TYPE_2__* data; } ;
struct arcturus_single_dpm_table {int count; TYPE_1__* dpm_levels; } ;
struct arcturus_dpm_table {struct arcturus_single_dpm_table fclk_table; struct arcturus_single_dpm_table soc_table; struct arcturus_single_dpm_table mem_table; struct arcturus_single_dpm_table gfx_table; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
struct TYPE_4__ {int clocks_in_khz; } ;
struct TYPE_3__ {int value; } ;



 int const VAR_0 ;



 int const VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct smu_context*,struct pp_clock_levels_with_latency*,struct arcturus_single_dpm_table*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct smu_context*,int const,int*) ;
 int FUNC_4 (char*,char*,int,int,char*) ;

__attribute__((used)) static int FUNC_5(struct smu_context *VAR_2,
   enum smu_clk_type VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;
 int VAR_8 = 0;
 struct pp_clock_levels_with_latency VAR_9;
 struct arcturus_single_dpm_table *VAR_10;
 struct smu_dpm_context *VAR_11 = &VAR_2->smu_dpm;
 struct arcturus_dpm_table *VAR_12 = ((void*)0);

 VAR_12 = VAR_11->dpm_context;

 switch (VAR_3) {
 case 129:
  VAR_8 = FUNC_3(VAR_2, VAR_0, &VAR_6);
  if (VAR_8) {
   FUNC_2("Attempt to get current gfx clk Failed!");
   return VAR_8;
  }

  VAR_10 = &(VAR_12->gfx_table);
  VAR_8 = FUNC_1(VAR_2, &VAR_9, VAR_10);
  if (VAR_8) {
   FUNC_2("Attempt to get gfx clk levels Failed!");
   return VAR_8;
  }

  for (VAR_5 = 0; VAR_5 < VAR_9.num_levels; VAR_5++)
   VAR_7 += FUNC_4(VAR_4 + VAR_7, "%d: %uMhz %s\n", VAR_5,
     VAR_9.data[VAR_5].clocks_in_khz / 1000,
     FUNC_0(
     VAR_9.data[VAR_5].clocks_in_khz / 1000,
     VAR_6 / 100) ? "*" : "");
  break;

 case 130:
  VAR_8 = FUNC_3(VAR_2, VAR_1, &VAR_6);
  if (VAR_8) {
   FUNC_2("Attempt to get current mclk Failed!");
   return VAR_8;
  }

  VAR_10 = &(VAR_12->mem_table);
  VAR_8 = FUNC_1(VAR_2, &VAR_9, VAR_10);
  if (VAR_8) {
   FUNC_2("Attempt to get memory clk levels Failed!");
   return VAR_8;
  }

  for (VAR_5 = 0; VAR_5 < VAR_9.num_levels; VAR_5++)
   VAR_7 += FUNC_4(VAR_4 + VAR_7, "%d: %uMhz %s\n",
    VAR_5, VAR_9.data[VAR_5].clocks_in_khz / 1000,
    FUNC_0(
    VAR_9.data[VAR_5].clocks_in_khz / 1000,
    VAR_6 / 100) ? "*" : "");
  break;

 case 128:
  VAR_8 = FUNC_3(VAR_2, 128, &VAR_6);
  if (VAR_8) {
   FUNC_2("Attempt to get current socclk Failed!");
   return VAR_8;
  }

  VAR_10 = &(VAR_12->soc_table);
  VAR_8 = FUNC_1(VAR_2, &VAR_9, VAR_10);
  if (VAR_8) {
   FUNC_2("Attempt to get socclk levels Failed!");
   return VAR_8;
  }

  for (VAR_5 = 0; VAR_5 < VAR_9.num_levels; VAR_5++)
   VAR_7 += FUNC_4(VAR_4 + VAR_7, "%d: %uMhz %s\n",
    VAR_5, VAR_9.data[VAR_5].clocks_in_khz / 1000,
    FUNC_0(
    VAR_9.data[VAR_5].clocks_in_khz / 1000,
    VAR_6 / 100) ? "*" : "");
  break;

 case 131:
  VAR_8 = FUNC_3(VAR_2, 131, &VAR_6);
  if (VAR_8) {
   FUNC_2("Attempt to get current fclk Failed!");
   return VAR_8;
  }

  VAR_10 = &(VAR_12->fclk_table);
  VAR_8 = FUNC_1(VAR_2, &VAR_9, VAR_10);
  if (VAR_8) {
   FUNC_2("Attempt to get fclk levels Failed!");
   return VAR_8;
  }

  for (VAR_5 = 0; VAR_5 < VAR_10->count; VAR_5++)
   VAR_7 += FUNC_4(VAR_4 + VAR_7, "%d: %uMhz %s\n",
    VAR_5, VAR_10->dpm_levels[VAR_5].value,
    FUNC_0(
    VAR_9.data[VAR_5].clocks_in_khz / 1000,
    VAR_6 / 100) ? "*" : "");
  break;

 default:
  break;
 }

 return VAR_7;
}
