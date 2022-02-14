
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_levels; int* clocks_in_khz; } ;
struct dc {TYPE_1__ sclk_lvls; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(
  const struct dc *VAR_0,
  int VAR_1)
{
 int VAR_2;





 if (VAR_0->sclk_lvls.num_levels == 0)
  return VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_0->sclk_lvls.num_levels; VAR_2++) {
  if (VAR_0->sclk_lvls.clocks_in_khz[VAR_2] >= VAR_1)
   return VAR_0->sclk_lvls.clocks_in_khz[VAR_2];
 }





 FUNC_0(0);
 return VAR_0->sclk_lvls.clocks_in_khz[VAR_0->sclk_lvls.num_levels - 1];
}
