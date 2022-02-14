
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optc {int dummy; } ;
struct dcn_otg_state {int underflow_occurred_status; int h_total; int h_sync_a_pol; int h_sync_a_end; int h_sync_a_start; int h_blank_end; int h_blank_start; int v_sync_a_end; int v_sync_a_start; int v_total_min_sel; int v_total_max_sel; int v_total_min; int v_total_max; int v_total; int v_sync_a_pol; int v_blank_end; int v_blank_start; int otg_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int *,int ,int *) ;

void FUNC_2(struct optc *VAR_27,
  struct dcn_otg_state *VAR_28)
{
 FUNC_0(VAR_2,
   VAR_12, &VAR_28->otg_enabled);

 FUNC_1(VAR_15,
   VAR_14, &VAR_28->v_blank_start,
   VAR_13, &VAR_28->v_blank_end);

 FUNC_0(VAR_17,
   VAR_19, &VAR_28->v_sync_a_pol);

 FUNC_0(VAR_21,
   VAR_21, &VAR_28->v_total);

 FUNC_0(VAR_23,
   VAR_23, &VAR_28->v_total_max);

 FUNC_0(VAR_25,
   VAR_25, &VAR_28->v_total_min);

 FUNC_0(VAR_22,
   VAR_24, &VAR_28->v_total_max_sel);

 FUNC_0(VAR_22,
   VAR_26, &VAR_28->v_total_min_sel);

 FUNC_1(VAR_16,
   VAR_20, &VAR_28->v_sync_a_start,
   VAR_18, &VAR_28->v_sync_a_end);

 FUNC_1(VAR_5,
   VAR_4, &VAR_28->h_blank_start,
   VAR_3, &VAR_28->h_blank_end);

 FUNC_1(VAR_6,
   VAR_10, &VAR_28->h_sync_a_start,
   VAR_8, &VAR_28->h_sync_a_end);

 FUNC_0(VAR_7,
   VAR_9, &VAR_28->h_sync_a_pol);

 FUNC_0(VAR_11,
   VAR_11, &VAR_28->h_total);

 FUNC_0(VAR_0,
   VAR_1, &VAR_28->underflow_occurred_status);
}
