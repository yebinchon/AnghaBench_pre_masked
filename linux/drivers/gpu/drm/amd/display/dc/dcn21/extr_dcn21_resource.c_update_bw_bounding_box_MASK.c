
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pipe_count; TYPE_1__* res_cap; } ;
struct dcn21_resource_pool {TYPE_2__ base; } ;
struct dc {int res_pool; } ;
struct clk_limit_table {int num_entries; TYPE_4__* entries; } ;
struct clk_bw_params {int num_channels; struct clk_limit_table clk_table; } ;
struct TYPE_12__ {int max_num_dpp; int max_num_otg; } ;
struct TYPE_11__ {scalar_t__ num_states; TYPE_3__* clock_limits; int num_chans; } ;
struct TYPE_10__ {int memclk_mhz; int socclk_mhz; int fclk_mhz; int dcfclk_mhz; } ;
struct TYPE_9__ {int state; int dram_speed_mts; int socclk_mhz; int fabricclk_mhz; int dcfclk_mhz; } ;
struct TYPE_7__ {int num_timing_generator; } ;


 struct dcn21_resource_pool* FUNC_0 (int ) ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct dc *VAR_2, struct clk_bw_params *VAR_3)
{
 struct dcn21_resource_pool *VAR_4 = FUNC_0(VAR_2->res_pool);
 struct clk_limit_table *VAR_5 = &VAR_3->clk_table;
 int VAR_6;

 VAR_0.max_num_otg = VAR_4->base.res_cap->num_timing_generator;
 VAR_0.max_num_dpp = VAR_4->base.pipe_count;
 VAR_1.num_chans = VAR_3->num_channels;
 VAR_1.num_states = 0;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_entries; VAR_6++) {

  VAR_1.clock_limits[VAR_6].state = VAR_6;
  VAR_1.clock_limits[VAR_6].dcfclk_mhz = VAR_5->entries[VAR_6].dcfclk_mhz;
  VAR_1.clock_limits[VAR_6].fabricclk_mhz = VAR_5->entries[VAR_6].fclk_mhz;
  VAR_1.clock_limits[VAR_6].socclk_mhz = VAR_5->entries[VAR_6].socclk_mhz;

  VAR_1.clock_limits[VAR_6].dram_speed_mts = VAR_5->entries[VAR_6].memclk_mhz * 16 / 1000;
  VAR_1.num_states++;
 }
}
