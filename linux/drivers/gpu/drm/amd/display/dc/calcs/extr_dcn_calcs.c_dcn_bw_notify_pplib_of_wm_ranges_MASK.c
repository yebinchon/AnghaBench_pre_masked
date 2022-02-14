
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pp_smu_wm_range_sets {TYPE_5__* reader_wm_sets; TYPE_5__* writer_wm_sets; void* num_writer_wm_sets; void* num_reader_wm_sets; int member_0; } ;
struct pp_smu_funcs_rv {int pp_smu; int (* set_wm_ranges ) (int *,struct pp_smu_wm_range_sets*) ;} ;
struct TYPE_9__ {scalar_t__ pplib_wm_report_mode; } ;
struct dc {TYPE_4__ debug; TYPE_3__* dcn_soc; TYPE_2__* res_pool; } ;
struct TYPE_10__ {int min_drain_clk_mhz; int max_drain_clk_mhz; int min_fill_clk_mhz; int max_fill_clk_mhz; void* wm_inst; } ;
struct TYPE_8__ {int fabric_and_dram_bandwidth_vmin0p65; int dcfclkv_min0p65; int socclk; } ;
struct TYPE_7__ {TYPE_1__* pp_smu; } ;
struct TYPE_6__ {struct pp_smu_funcs_rv rv_funcs; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct pp_smu_wm_range_sets*) ;

void FUNC_3(struct dc *VAR_6)
{
 struct pp_smu_funcs_rv *VAR_7 = ((void*)0);
 struct pp_smu_wm_range_sets VAR_8 = {0};
 int VAR_9, VAR_10, VAR_11;
 const int VAR_12 = 5000000;

 if (VAR_6->res_pool->pp_smu)
  VAR_7 = &VAR_6->res_pool->pp_smu->rv_funcs;
 if (!VAR_7 || !VAR_7->set_wm_ranges)
  return;

 FUNC_0();
 VAR_9 = VAR_6->dcn_soc->fabric_and_dram_bandwidth_vmin0p65 * 1000000 / 32;
 VAR_10 = VAR_6->dcn_soc->dcfclkv_min0p65 * 1000;
 VAR_11 = VAR_6->dcn_soc->socclk * 1000;
 FUNC_1();
 VAR_8.num_reader_wm_sets = VAR_5;
 VAR_8.num_writer_wm_sets = VAR_5;
 VAR_8.reader_wm_sets[0].wm_inst = VAR_0;
 VAR_8.reader_wm_sets[0].min_drain_clk_mhz = VAR_10 / 1000;
 VAR_8.reader_wm_sets[0].max_drain_clk_mhz = VAR_12 / 1000;
 VAR_8.reader_wm_sets[0].min_fill_clk_mhz = VAR_9 / 1000;
 VAR_8.reader_wm_sets[0].max_fill_clk_mhz = VAR_12 / 1000;
 VAR_8.writer_wm_sets[0].wm_inst = VAR_0;
 VAR_8.writer_wm_sets[0].min_fill_clk_mhz = VAR_11 / 1000;
 VAR_8.writer_wm_sets[0].max_fill_clk_mhz = VAR_12 / 1000;
 VAR_8.writer_wm_sets[0].min_drain_clk_mhz = VAR_9 / 1000;
 VAR_8.writer_wm_sets[0].max_drain_clk_mhz = VAR_12 / 1000;

 if (VAR_6->debug.pplib_wm_report_mode == VAR_4) {
  VAR_8.reader_wm_sets[0].wm_inst = VAR_0;
  VAR_8.reader_wm_sets[0].min_drain_clk_mhz = 300;
  VAR_8.reader_wm_sets[0].max_drain_clk_mhz = 5000;
  VAR_8.reader_wm_sets[0].min_fill_clk_mhz = 800;
  VAR_8.reader_wm_sets[0].max_fill_clk_mhz = 5000;
  VAR_8.writer_wm_sets[0].wm_inst = VAR_0;
  VAR_8.writer_wm_sets[0].min_fill_clk_mhz = 200;
  VAR_8.writer_wm_sets[0].max_fill_clk_mhz = 5000;
  VAR_8.writer_wm_sets[0].min_drain_clk_mhz = 800;
  VAR_8.writer_wm_sets[0].max_drain_clk_mhz = 5000;
 }

 VAR_8.reader_wm_sets[1] = VAR_8.writer_wm_sets[0];
 VAR_8.reader_wm_sets[1].wm_inst = VAR_1;

 VAR_8.reader_wm_sets[2] = VAR_8.writer_wm_sets[0];
 VAR_8.reader_wm_sets[2].wm_inst = VAR_2;

 VAR_8.reader_wm_sets[3] = VAR_8.writer_wm_sets[0];
 VAR_8.reader_wm_sets[3].wm_inst = VAR_3;


 VAR_7->set_wm_ranges(&VAR_7->pp_smu, &VAR_8);
}
