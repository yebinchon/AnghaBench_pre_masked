
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct npcm7xx_pwm_fan_data {TYPE_1__* fan_dev; int fan_base; } ;
struct TYPE_2__ {scalar_t__ fan_cnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct npcm7xx_pwm_fan_data*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_7(struct npcm7xx_pwm_fan_data *VAR_15,
         u8 VAR_16, u8 VAR_17, u8 VAR_18)
{
 u8 VAR_19;
 u8 VAR_20;
 u8 VAR_21;
 u8 VAR_22;
 u8 VAR_23;
 u8 VAR_24;
 u8 VAR_25;
 u8 VAR_26;

 VAR_26 = FUNC_0(VAR_16, VAR_17);

 if (VAR_17 == VAR_0) {
  VAR_22 = VAR_7;
  VAR_21 = VAR_9;
  VAR_24 = VAR_11 | VAR_13;
  VAR_25 = VAR_1;
  VAR_23 = VAR_3 | VAR_5;
 } else {
  VAR_22 = VAR_8;
  VAR_21 = VAR_10;
  VAR_24 = VAR_12 | VAR_14;
  VAR_25 = VAR_2;
  VAR_23 = VAR_4 | VAR_6;
 }

 if (VAR_18 & VAR_21) {
  VAR_19 = FUNC_4(FUNC_3(VAR_15->fan_base, VAR_16));


  FUNC_5((VAR_19 & ~VAR_24),
    FUNC_3(VAR_15->fan_base, VAR_16));


  FUNC_5(VAR_23,
    FUNC_2(VAR_15->fan_base, VAR_16));

  VAR_20 = FUNC_4(FUNC_1(VAR_15->fan_base, VAR_16));


  FUNC_5((VAR_20 & ~VAR_25),
    FUNC_1(VAR_15->fan_base, VAR_16));






  VAR_15->fan_dev[VAR_26].fan_cnt = 0;
 } else {

  if (VAR_18 & VAR_22)
   FUNC_6(VAR_15, VAR_16, VAR_17, VAR_26, VAR_24,
         VAR_25, VAR_23);
 }
}
