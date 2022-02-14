
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct hw_asic_id {scalar_t__ vram_type; int vram_width; } ;
struct dpm_clocks {TYPE_6__* FClocks; TYPE_3__* SocClocks; TYPE_2__* MemClocks; TYPE_1__* DcfClocks; } ;
struct TYPE_16__ {TYPE_7__* entries; } ;
struct TYPE_13__ {int num_entries; TYPE_4__* entries; } ;
struct clk_bw_params {scalar_t__ vram_type; int num_channels; TYPE_8__ wm_table; TYPE_5__ clk_table; } ;
struct TYPE_15__ {int wm_inst; int valid; int wm_type; int pstate_latency_us; } ;
struct TYPE_14__ {scalar_t__ Freq; int Vol; } ;
struct TYPE_12__ {scalar_t__ fclk_mhz; int voltage; int socclk_mhz; int memclk_mhz; int dcfclk_mhz; } ;
struct TYPE_11__ {int Freq; } ;
struct TYPE_10__ {int Freq; } ;
struct TYPE_9__ {int Freq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_1(struct clk_bw_params *VAR_9, struct dpm_clocks *VAR_10, struct hw_asic_id *VAR_11)
{
 int VAR_12;

 FUNC_0(VAR_4 <= VAR_3);

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  if (VAR_10->FClocks[VAR_12].Freq == 0)
   break;

  VAR_9->clk_table.entries[VAR_12].dcfclk_mhz = VAR_10->DcfClocks[VAR_12].Freq;
  VAR_9->clk_table.entries[VAR_12].fclk_mhz = VAR_10->FClocks[VAR_12].Freq;
  VAR_9->clk_table.entries[VAR_12].memclk_mhz = VAR_10->MemClocks[VAR_12].Freq;
  VAR_9->clk_table.entries[VAR_12].socclk_mhz = VAR_10->SocClocks[VAR_12].Freq;
  VAR_9->clk_table.entries[VAR_12].voltage = VAR_10->FClocks[VAR_12].Vol;
 }
 VAR_9->clk_table.num_entries = VAR_12;

 VAR_9->vram_type = VAR_11->vram_type;
 VAR_9->num_channels = VAR_11->vram_width / VAR_0;

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_9->wm_table.entries[VAR_12].wm_inst = VAR_12;

  if (VAR_10->FClocks[VAR_12].Freq == 0) {
   VAR_9->wm_table.entries[VAR_12].valid = 0;
   continue;
  }

  VAR_9->wm_table.entries[VAR_12].wm_type = VAR_7;
  VAR_9->wm_table.entries[VAR_12].valid = 1;
 }

 if (VAR_9->vram_type == VAR_2) {



  VAR_9->wm_table.entries[VAR_5].pstate_latency_us = VAR_1;
  VAR_9->wm_table.entries[VAR_5].wm_inst = VAR_5;
  VAR_9->wm_table.entries[VAR_5].wm_type = VAR_8;
  VAR_9->wm_table.entries[VAR_5].valid = 1;
 }

}
