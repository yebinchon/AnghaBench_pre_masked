
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct npcm7xx_pwm_fan_data {int * pwm_lock; int pwm_base; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,size_t,size_t) ;
 int FUNC_1 (int ,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (size_t,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct npcm7xx_pwm_fan_data *VAR_10,
      int VAR_11, u16 VAR_12)
{
 u32 VAR_13 = (VAR_11 % VAR_9);
 u32 VAR_14 = (VAR_11 / VAR_9);
 u32 VAR_15, VAR_16, VAR_17;




 FUNC_4(&VAR_10->pwm_lock[VAR_14]);


 FUNC_3(VAR_12, FUNC_0(VAR_10->pwm_base, VAR_14, VAR_13));
 VAR_15 = FUNC_2(FUNC_1(VAR_10->pwm_base, VAR_14));

 switch (VAR_13) {
 case 0:
  VAR_16 = VAR_1;
  VAR_17 = VAR_2;
  break;
 case 1:
  VAR_16 = VAR_3;
  VAR_17 = VAR_4;
  break;
 case 2:
  VAR_16 = VAR_5;
  VAR_17 = VAR_6;
  break;
 case 3:
  VAR_16 = VAR_7;
  VAR_17 = VAR_8;
  break;
 default:
  FUNC_5(&VAR_10->pwm_lock[VAR_14]);
  return -VAR_0;
 }

 if (VAR_12 == 0) {

  VAR_15 &= ~VAR_16;
  VAR_15 |= VAR_17;
 } else {

  VAR_15 |= VAR_16;
  VAR_15 &= ~VAR_17;
 }

 FUNC_3(VAR_15, FUNC_1(VAR_10->pwm_base, VAR_14));
 FUNC_5(&VAR_10->pwm_lock[VAR_14]);

 return 0;
}
