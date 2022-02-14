
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct npcm7xx_pwm_fan_data {int fan_base; TYPE_1__* fan_dev; } ;
struct TYPE_2__ {scalar_t__ fan_st_flg; int fan_cnt_tmp; int fan_cnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_8(struct npcm7xx_pwm_fan_data *VAR_5,
           u8 VAR_6, u8 VAR_7, u8 VAR_8, u8 VAR_9,
           u8 VAR_10, u8 VAR_11)
{
 u8 VAR_12;
 u8 VAR_13;
 u16 VAR_14;

 if (VAR_7 == VAR_3)
  VAR_14 = FUNC_5(FUNC_1(VAR_5->fan_base, VAR_6));
 else
  VAR_14 = FUNC_5(FUNC_2(VAR_5->fan_base, VAR_6));


 FUNC_7(VAR_11, FUNC_3(VAR_5->fan_base, VAR_6));

 if (VAR_5->fan_dev[VAR_8].fan_st_flg == VAR_1) {

  VAR_5->fan_dev[VAR_8].fan_st_flg =
   VAR_2;


  VAR_5->fan_dev[VAR_8].fan_cnt_tmp = 0;
 } else if (VAR_5->fan_dev[VAR_8].fan_st_flg < VAR_0) {




  VAR_5->fan_dev[VAR_8].fan_cnt_tmp +=
   (VAR_4 - VAR_14);

  VAR_5->fan_dev[VAR_8].fan_st_flg++;
 } else {

  if (VAR_5->fan_dev[VAR_8].fan_st_flg == VAR_0) {
   VAR_5->fan_dev[VAR_8].fan_cnt_tmp +=
    (VAR_4 - VAR_14);


   VAR_5->fan_dev[VAR_8].fan_cnt =
    VAR_5->fan_dev[VAR_8].fan_cnt_tmp /
    VAR_0;

   VAR_5->fan_dev[VAR_8].fan_st_flg = VAR_1;
  }

  VAR_12 = FUNC_6(FUNC_4(VAR_5->fan_base, VAR_6));


  FUNC_7((VAR_12 & ~VAR_9),
    FUNC_4(VAR_5->fan_base, VAR_6));
  VAR_13 = FUNC_6(FUNC_0(VAR_5->fan_base, VAR_6));


  FUNC_7((VAR_13 & ~VAR_10),
    FUNC_0(VAR_5->fan_base, VAR_6));
 }
}
