
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct smu_context {int dummy; } ;
struct pp_clock_levels_with_latency {int num_levels; TYPE_1__* data; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
struct TYPE_2__ {int clocks_in_khz; int latency_in_us; } ;


 int VAR_0 ;



 int FUNC_0 (int,int) ;
 int FUNC_1 (struct smu_context*,int,int,int*) ;
 int FUNC_2 (struct smu_context*,int,int*) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_1,
       enum smu_clk_type VAR_2,
       struct pp_clock_levels_with_latency *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;
 uint32_t VAR_6 = 0, VAR_7 = 0;

 switch (VAR_2) {
 case 129:
 case 130:
 case 128:
  VAR_4 = FUNC_2(VAR_1, VAR_2, &VAR_6);
  if (VAR_4)
   return VAR_4;

  VAR_6 = FUNC_0(VAR_6, (uint32_t)VAR_0);
  VAR_3->num_levels = VAR_6;

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
   VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_5, &VAR_7);
   if (VAR_4)
    return VAR_4;

   VAR_3->data[VAR_5].clocks_in_khz = VAR_7 * 1000;
   VAR_3->data[VAR_5].latency_in_us = 0;
  }
  break;
 default:
  break;
 }

 return VAR_4;
}
