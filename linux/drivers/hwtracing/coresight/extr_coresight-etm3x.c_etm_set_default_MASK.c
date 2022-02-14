
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_config {int enable_ctrl2; int* cntr_rld_val; int* cntr_val; int seq_curr_state; int ctxid_idx; int* ctxid_pid; int ctxid_mask; int sync_freq; void** cntr_rld_event; void** cntr_event; void* timestamp_event; void* seq_13_event; void* seq_32_event; void* seq_31_event; void* seq_23_event; void* seq_21_event; void* seq_12_event; void* enable_event; void* trigger_event; int enable_ctrl1; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(struct etm_config *VAR_4)
{
 int VAR_5;

 if (FUNC_1(!VAR_4))
  return;
 VAR_4->enable_ctrl1 = FUNC_0(24);
 VAR_4->enable_ctrl2 = 0x0;
 VAR_4->enable_event = VAR_1;

 VAR_4->trigger_event = VAR_0;
 VAR_4->enable_event = VAR_1;

 VAR_4->seq_12_event = VAR_0;
 VAR_4->seq_21_event = VAR_0;
 VAR_4->seq_23_event = VAR_0;
 VAR_4->seq_31_event = VAR_0;
 VAR_4->seq_32_event = VAR_0;
 VAR_4->seq_13_event = VAR_0;
 VAR_4->timestamp_event = VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4->cntr_rld_val[VAR_5] = 0x0;
  VAR_4->cntr_event[VAR_5] = VAR_0;
  VAR_4->cntr_rld_event[VAR_5] = VAR_0;
  VAR_4->cntr_val[VAR_5] = 0x0;
 }

 VAR_4->seq_curr_state = 0x0;
 VAR_4->ctxid_idx = 0x0;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  VAR_4->ctxid_pid[VAR_5] = 0x0;

 VAR_4->ctxid_mask = 0x0;

 VAR_4->sync_freq = 0x400;
}
