
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nct6775_data {int* pwm_enable; int tolerance_mask; int* target_speed_tolerance; int* target_speed; int* target_temp; int** temp_tolerance; int * REG_FAN_MODE; int * REG_TARGET; int * REG_TOLERANCE_H; } ;



 int FUNC_0 (struct nct6775_data*,int ) ;
 int FUNC_1 (struct nct6775_data*,int ,int) ;




__attribute__((used)) static void FUNC_2(struct nct6775_data *VAR_0, int VAR_1)
{
 u8 VAR_2;

 switch (VAR_0->pwm_enable[VAR_1]) {
 case 130:
 case 131:
  break;
 case 129:
  VAR_2 = FUNC_0(VAR_0, VAR_0->REG_FAN_MODE[VAR_1]);
  VAR_2 = (VAR_2 & ~VAR_0->tolerance_mask) |
    (VAR_0->target_speed_tolerance[VAR_1] & VAR_0->tolerance_mask);
  FUNC_1(VAR_0, VAR_0->REG_FAN_MODE[VAR_1], VAR_2);
  FUNC_1(VAR_0, VAR_0->REG_TARGET[VAR_1],
        VAR_0->target_speed[VAR_1] & 0xff);
  if (VAR_0->REG_TOLERANCE_H) {
   VAR_2 = (VAR_0->target_speed[VAR_1] >> 8) & 0x0f;
   VAR_2 |= (VAR_0->target_speed_tolerance[VAR_1] & 0x38) << 1;
   FUNC_1(VAR_0,
         VAR_0->REG_TOLERANCE_H[VAR_1],
         VAR_2);
  }
  break;
 case 128:
  FUNC_1(VAR_0, VAR_0->REG_TARGET[VAR_1],
        VAR_0->target_temp[VAR_1]);

 default:
  VAR_2 = FUNC_0(VAR_0, VAR_0->REG_FAN_MODE[VAR_1]);
  VAR_2 = (VAR_2 & ~VAR_0->tolerance_mask) |
    VAR_0->temp_tolerance[0][VAR_1];
  FUNC_1(VAR_0, VAR_0->REG_FAN_MODE[VAR_1], VAR_2);
  break;
 }
}
