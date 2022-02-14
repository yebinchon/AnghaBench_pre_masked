
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


struct pp_smu_wm_range_sets {int num_reader_wm_sets; int num_writer_wm_sets; TYPE_6__* writer_wm_sets; TYPE_5__* reader_wm_sets; } ;
struct TYPE_10__ {TYPE_3__* entries; } ;
struct TYPE_8__ {TYPE_1__* entries; } ;
struct clk_bw_params {TYPE_4__ clk_table; TYPE_2__ wm_table; } ;
struct TYPE_12__ {void* max_drain_clk_mhz; void* min_drain_clk_mhz; void* max_fill_clk_mhz; void* min_fill_clk_mhz; int wm_inst; } ;
struct TYPE_11__ {scalar_t__ wm_type; void* max_fill_clk_mhz; void* max_drain_clk_mhz; void* min_fill_clk_mhz; void* min_drain_clk_mhz; int wm_inst; } ;
struct TYPE_9__ {void* fclk_mhz; } ;
struct TYPE_7__ {scalar_t__ wm_type; int wm_inst; int valid; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_1(struct clk_bw_params *VAR_5, struct pp_smu_wm_range_sets *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {

  if (!VAR_5->wm_table.entries[VAR_7].valid)
   continue;

  VAR_6->reader_wm_sets[VAR_8].wm_inst = VAR_5->wm_table.entries[VAR_7].wm_inst;
  VAR_6->reader_wm_sets[VAR_8].wm_type = VAR_5->wm_table.entries[VAR_7].wm_type;;

  VAR_6->reader_wm_sets[VAR_8].min_drain_clk_mhz = VAR_1;
  VAR_6->reader_wm_sets[VAR_8].max_drain_clk_mhz = VAR_0;


  if (VAR_6->reader_wm_sets[VAR_8].wm_type == VAR_4) {
   if (VAR_7 == 0)
    VAR_6->reader_wm_sets[VAR_8].min_fill_clk_mhz = 0;
   else {

    VAR_6->reader_wm_sets[VAR_8].min_fill_clk_mhz = VAR_5->clk_table.entries[VAR_7 - 1].fclk_mhz + 1;
   }
   VAR_6->reader_wm_sets[VAR_8].max_fill_clk_mhz = VAR_5->clk_table.entries[VAR_7].fclk_mhz;

  } else {

   VAR_6->reader_wm_sets[VAR_8].min_fill_clk_mhz = VAR_1;
   VAR_6->reader_wm_sets[VAR_8].max_fill_clk_mhz = VAR_0;


   VAR_6->reader_wm_sets[VAR_8 - 1].max_fill_clk_mhz = VAR_0;
  }
  VAR_8++;
 }

 FUNC_0(VAR_8 != 0);
 VAR_6->num_reader_wm_sets = VAR_8;


 VAR_6->reader_wm_sets[0].min_drain_clk_mhz = VAR_1;
 VAR_6->reader_wm_sets[0].min_fill_clk_mhz = VAR_1;
 VAR_6->reader_wm_sets[VAR_6->num_reader_wm_sets - 1].max_drain_clk_mhz = VAR_0;
 VAR_6->reader_wm_sets[VAR_6->num_reader_wm_sets - 1].max_fill_clk_mhz = VAR_0;


 VAR_6->num_writer_wm_sets = 1;
 VAR_6->writer_wm_sets[0].wm_inst = VAR_2;
 VAR_6->writer_wm_sets[0].min_fill_clk_mhz = VAR_1;
 VAR_6->writer_wm_sets[0].max_fill_clk_mhz = VAR_0;
 VAR_6->writer_wm_sets[0].min_drain_clk_mhz = VAR_1;
 VAR_6->writer_wm_sets[0].max_drain_clk_mhz = VAR_0;

}
