
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct npcm7xx_pwm_fan_data {int input_clk_freq; int fan_clk; TYPE_1__* fan_dev; int fan_base; } ;
struct TYPE_2__ {scalar_t__ fan_cnt; int fan_pls_per_rev; int fan_st_flg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
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
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int,int ) ;

__attribute__((used)) static void FUNC_15(struct npcm7xx_pwm_fan_data *VAR_16)
{
 int VAR_17;
 int VAR_18;
 int VAR_19;
 u32 VAR_20;

 for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++) {

  FUNC_14(VAR_5,
    FUNC_0(VAR_16->fan_base, VAR_17));


  FUNC_14(0x00, FUNC_7(VAR_16->fan_base, VAR_17));


  FUNC_14(VAR_11,
    FUNC_6(VAR_16->fan_base, VAR_17));


  FUNC_14(VAR_1,
    FUNC_11(VAR_16->fan_base, VAR_17));


  FUNC_14((VAR_13 | VAR_15 |
     VAR_14),
    FUNC_10(VAR_16->fan_base, VAR_17));


  FUNC_13(VAR_6,
     FUNC_1(VAR_16->fan_base, VAR_17));
  FUNC_13(VAR_6,
     FUNC_2(VAR_16->fan_base, VAR_17));


  FUNC_14((VAR_9 | VAR_10),
    FUNC_5(VAR_16->fan_base, VAR_17));


  FUNC_13(VAR_7,
     FUNC_3(VAR_16->fan_base, VAR_17));
  FUNC_13(VAR_8,
     FUNC_4(VAR_16->fan_base, VAR_17));


  FUNC_14(VAR_12,
    FUNC_8(VAR_16->fan_base, VAR_17));
  FUNC_14(VAR_12,
    FUNC_9(VAR_16->fan_base, VAR_17));

  for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++) {
   VAR_18 = VAR_17 * VAR_3 + VAR_19;
   VAR_16->fan_dev[VAR_18].fan_st_flg = VAR_0;
   VAR_16->fan_dev[VAR_18].fan_pls_per_rev =
    VAR_2;
   VAR_16->fan_dev[VAR_18].fan_cnt = 0;
  }
 }

 VAR_20 = FUNC_12(VAR_16->fan_clk);


 VAR_16->input_clk_freq = VAR_20 / (VAR_1 + 1);
}
