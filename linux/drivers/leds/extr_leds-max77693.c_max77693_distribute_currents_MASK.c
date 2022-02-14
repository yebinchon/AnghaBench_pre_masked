
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct max77693_led_device {int allowed_modes; int iout_joint; } ;
typedef enum max77693_led_mode { ____Placeholder_max77693_led_mode } max77693_led_mode ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct max77693_led_device*,size_t,int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct max77693_led_device *VAR_5,
    int VAR_6, enum max77693_led_mode VAR_7,
    u32 VAR_8, u32 VAR_9[2], u32 VAR_10[2])
{
 if (!VAR_5->iout_joint) {
  VAR_10[VAR_6] = VAR_8;
  FUNC_0(VAR_5, VAR_6, VAR_7);
  return;
 }

 VAR_10[VAR_1] = FUNC_1(VAR_8, VAR_9[VAR_1]);
 VAR_10[VAR_2] = VAR_8 - VAR_10[VAR_1];

 if (VAR_7 == VAR_0)
  VAR_5->allowed_modes &= ~VAR_3;
 else
  VAR_5->allowed_modes &= ~VAR_4;

 FUNC_0(VAR_5, VAR_1, VAR_7);

 if (VAR_10[VAR_2])
  FUNC_0(VAR_5, VAR_2, VAR_7);
}
