
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hubbub {int dummy; } ;
struct dcn_hubbub_wm_set {int wm_set; void* dram_clk_chanage; void* sr_exit; void* sr_enter; void* pte_meta_urgent; void* data_urgent; } ;
struct dcn_hubbub_wm {struct dcn_hubbub_wm_set* sets; } ;
struct dcn20_hubbub {int dummy; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 struct dcn20_hubbub* FUNC_2 (struct hubbub*) ;
 int FUNC_3 (struct dcn_hubbub_wm*,int ,int) ;

void FUNC_4(struct hubbub *VAR_20,
  struct dcn_hubbub_wm *VAR_21)
{
 struct dcn20_hubbub *VAR_22 = FUNC_2(VAR_20);

 struct dcn_hubbub_wm_set *VAR_23;

 FUNC_3(VAR_21, 0, sizeof(struct dcn_hubbub_wm));

 VAR_23 = &VAR_21->sets[0];
 VAR_23->wm_set = 0;
 VAR_23->data_urgent = FUNC_1(VAR_12);
 if (FUNC_0(VAR_16))
  VAR_23->pte_meta_urgent = FUNC_1(VAR_16);
 if (FUNC_0(VAR_4)) {
  VAR_23->sr_enter = FUNC_1(VAR_4);
  VAR_23->sr_exit = FUNC_1(VAR_8);
 }
 VAR_23->dram_clk_chanage = FUNC_1(VAR_0);

 VAR_23 = &VAR_21->sets[1];
 VAR_23->wm_set = 1;
 VAR_23->data_urgent = FUNC_1(VAR_13);
 if (FUNC_0(VAR_17))
  VAR_23->pte_meta_urgent = FUNC_1(VAR_17);
 if (FUNC_0(VAR_5)) {
  VAR_23->sr_enter = FUNC_1(VAR_5);
  VAR_23->sr_exit = FUNC_1(VAR_9);
 }
 VAR_23->dram_clk_chanage = FUNC_1(VAR_1);

 VAR_23 = &VAR_21->sets[2];
 VAR_23->wm_set = 2;
 VAR_23->data_urgent = FUNC_1(VAR_14);
 if (FUNC_0(VAR_18))
  VAR_23->pte_meta_urgent = FUNC_1(VAR_18);
 if (FUNC_0(VAR_6)) {
  VAR_23->sr_enter = FUNC_1(VAR_6);
  VAR_23->sr_exit = FUNC_1(VAR_10);
 }
 VAR_23->dram_clk_chanage = FUNC_1(VAR_2);

 VAR_23 = &VAR_21->sets[3];
 VAR_23->wm_set = 3;
 VAR_23->data_urgent = FUNC_1(VAR_15);
 if (FUNC_0(VAR_19))
  VAR_23->pte_meta_urgent = FUNC_1(VAR_19);
 if (FUNC_0(VAR_7)) {
  VAR_23->sr_enter = FUNC_1(VAR_7);
  VAR_23->sr_exit = FUNC_1(VAR_11);
 }
 VAR_23->dram_clk_chanage = FUNC_1(VAR_3);
}
