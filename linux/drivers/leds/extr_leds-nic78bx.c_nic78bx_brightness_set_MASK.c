
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nic78bx_led {TYPE_1__* data; int bit; int mask; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int lock; int io_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct nic78bx_led* FUNC_4 (struct led_classdev*) ;

__attribute__((used)) static void FUNC_5(struct led_classdev *VAR_0,
      enum led_brightness VAR_1)
{
 struct nic78bx_led *VAR_2 = FUNC_4(VAR_0);
 unsigned long VAR_3;
 u8 VAR_4;

 FUNC_2(&VAR_2->data->lock, VAR_3);
 VAR_4 = FUNC_0(VAR_2->data->io_base);

 if (VAR_1) {
  VAR_4 &= ~VAR_2->mask;
  VAR_4 |= VAR_2->bit;
 } else {
  VAR_4 &= ~VAR_2->bit;
 }

 FUNC_1(VAR_4, VAR_2->data->io_base);
 FUNC_3(&VAR_2->data->lock, VAR_3);
}
