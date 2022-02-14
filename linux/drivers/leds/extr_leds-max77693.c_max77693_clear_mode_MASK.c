
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max77693_led_device {int mode_flags; scalar_t__ iout_joint; } ;


 int FUNC_0 (struct max77693_led_device*,int) ;

__attribute__((used)) static int FUNC_1(struct max77693_led_device *VAR_0,
    u8 VAR_1)
{
 if (VAR_0->iout_joint)

  VAR_1 |= (VAR_1 << 1);

 VAR_0->mode_flags &= ~VAR_1;

 return FUNC_0(VAR_0, VAR_0->mode_flags);
}
