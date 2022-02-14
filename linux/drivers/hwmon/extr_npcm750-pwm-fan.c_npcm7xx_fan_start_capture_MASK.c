
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct npcm7xx_pwm_fan_data {int * fan_lock; int fan_base; TYPE_1__* fan_dev; } ;
struct TYPE_2__ {scalar_t__ fan_st_flg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,size_t) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (size_t,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_7(struct npcm7xx_pwm_fan_data *VAR_9,
          u8 VAR_10, u8 VAR_11)
{
 u8 VAR_12;
 u8 VAR_13;
 u8 VAR_14;
 unsigned long VAR_15;

 VAR_12 = FUNC_0(VAR_10, VAR_11);


 if (VAR_9->fan_dev[VAR_12].fan_st_flg != VAR_0) {

  FUNC_5(&VAR_9->fan_lock[VAR_10], VAR_15);

  VAR_9->fan_dev[VAR_12].fan_st_flg = VAR_1;
  VAR_14 = FUNC_3(FUNC_2(VAR_9->fan_base, VAR_10));







  if (VAR_11 == VAR_2) {

   FUNC_4(VAR_14 | (VAR_5 |
         VAR_7),
     FUNC_2(VAR_9->fan_base, VAR_10));

   VAR_13 = VAR_3
    | FUNC_3(FUNC_1(VAR_9->fan_base,
              VAR_10));


   FUNC_4(VAR_13, FUNC_1(VAR_9->fan_base,
        VAR_10));
  } else {

   FUNC_4(VAR_14 | (VAR_6 |
         VAR_8),
     FUNC_2(VAR_9->fan_base, VAR_10));

   VAR_13 =
    VAR_4
    | FUNC_3(FUNC_1(VAR_9->fan_base,
              VAR_10));


   FUNC_4(VAR_13,
     FUNC_1(VAR_9->fan_base, VAR_10));
  }

  FUNC_6(&VAR_9->fan_lock[VAR_10], VAR_15);
 }
}
