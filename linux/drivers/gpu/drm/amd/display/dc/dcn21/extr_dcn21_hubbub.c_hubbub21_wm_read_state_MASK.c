
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hubbub {int dummy; } ;
struct dcn_hubbub_wm_set {int wm_set; int dram_clk_chanage; int sr_exit; int sr_enter; int data_urgent; } ;
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
 int FUNC_0 (int ,int ,int *) ;
 struct dcn20_hubbub* FUNC_1 (struct hubbub*) ;
 int FUNC_2 (struct dcn_hubbub_wm*,int ,int) ;

void FUNC_3(struct hubbub *VAR_16,
  struct dcn_hubbub_wm *VAR_17)
{
 struct dcn20_hubbub *VAR_18 = FUNC_1(VAR_16);
 struct dcn_hubbub_wm_set *VAR_19;

 FUNC_2(VAR_17, 0, sizeof(struct dcn_hubbub_wm));

 VAR_19 = &VAR_17->sets[0];
 VAR_19->wm_set = 0;
 FUNC_0(VAR_12,
   VAR_12, &VAR_19->data_urgent);

 FUNC_0(VAR_4,
   VAR_4, &VAR_19->sr_enter);

 FUNC_0(VAR_8,
   VAR_8, &VAR_19->sr_exit);

 FUNC_0(VAR_0,
    VAR_0, &VAR_19->dram_clk_chanage);

 VAR_19 = &VAR_17->sets[1];
 VAR_19->wm_set = 1;
 FUNC_0(VAR_13,
   VAR_13, &VAR_19->data_urgent);

 FUNC_0(VAR_5,
   VAR_5, &VAR_19->sr_enter);

 FUNC_0(VAR_9,
   VAR_9, &VAR_19->sr_exit);

 FUNC_0(VAR_1,
   VAR_1, &VAR_19->dram_clk_chanage);

 VAR_19 = &VAR_17->sets[2];
 VAR_19->wm_set = 2;
 FUNC_0(VAR_14,
   VAR_14, &VAR_19->data_urgent);

 FUNC_0(VAR_6,
   VAR_6, &VAR_19->sr_enter);

 FUNC_0(VAR_10,
   VAR_10, &VAR_19->sr_exit);

 FUNC_0(VAR_2,
   VAR_2, &VAR_19->dram_clk_chanage);

 VAR_19 = &VAR_17->sets[3];
 VAR_19->wm_set = 3;
 FUNC_0(VAR_15,
   VAR_15, &VAR_19->data_urgent);

 FUNC_0(VAR_7,
   VAR_7, &VAR_19->sr_enter);

 FUNC_0(VAR_11,
   VAR_11, &VAR_19->sr_exit);

 FUNC_0(VAR_3,
   VAR_3, &VAR_19->dram_clk_chanage);
}
