
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vega20_single_dpm_table {int count; TYPE_1__* dpm_levels; } ;
struct smu_context {int dummy; } ;
struct pp_clock_levels_with_latency {int num_levels; TYPE_2__* data; } ;
struct TYPE_4__ {int clocks_in_khz; scalar_t__ latency_in_us; } ;
struct TYPE_3__ {int value; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct smu_context *VAR_1,
   struct pp_clock_levels_with_latency *VAR_2,
   struct vega20_single_dpm_table *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = (VAR_3->count > VAR_0) ? VAR_0 : VAR_3->count;
 VAR_2->num_levels = VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_2->data[VAR_4].clocks_in_khz =
   VAR_3->dpm_levels[VAR_4].value * 1000;
  VAR_2->data[VAR_4].latency_in_us = 0;
 }

 return 0;
}
