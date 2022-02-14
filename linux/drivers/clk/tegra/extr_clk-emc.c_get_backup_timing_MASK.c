
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tegra_clk_emc {int num_timings; struct emc_timing* timings; } ;
struct emc_timing {scalar_t__ ram_code; size_t parent_index; } ;


 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static struct emc_timing *FUNC_1(struct tegra_clk_emc *VAR_1,
         int VAR_2)
{
 int VAR_3;
 u32 VAR_4 = FUNC_0();
 struct emc_timing *VAR_5;

 for (VAR_3 = VAR_2+1; VAR_3 < VAR_1->num_timings; VAR_3++) {
  VAR_5 = VAR_1->timings + VAR_3;
  if (VAR_5->ram_code != VAR_4)
   break;

  if (VAR_0[VAR_5->parent_index] !=
      VAR_0[
        VAR_1->timings[VAR_2].parent_index])
   return VAR_5;
 }

 for (VAR_3 = VAR_2-1; VAR_3 >= 0; --VAR_3) {
  VAR_5 = VAR_1->timings + VAR_3;
  if (VAR_5->ram_code != VAR_4)
   break;

  if (VAR_0[VAR_5->parent_index] !=
      VAR_0[
        VAR_1->timings[VAR_2].parent_index])
   return VAR_5;
 }

 return ((void*)0);
}
