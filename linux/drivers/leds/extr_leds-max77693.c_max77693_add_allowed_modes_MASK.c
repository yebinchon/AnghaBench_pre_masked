
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_led_device {int allowed_modes; } ;
typedef enum max77693_led_mode { ____Placeholder_max77693_led_mode } max77693_led_mode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct max77693_led_device *VAR_1,
    int VAR_2, enum max77693_led_mode VAR_3)
{
 if (VAR_3 == VAR_0)
  VAR_1->allowed_modes |= (FUNC_0(VAR_2) |
           FUNC_1(VAR_2));
 else
  VAR_1->allowed_modes |= FUNC_2(VAR_2);
}
