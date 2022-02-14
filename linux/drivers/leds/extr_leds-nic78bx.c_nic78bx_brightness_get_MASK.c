
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nic78bx_led {int bit; TYPE_1__* data; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int lock; int io_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct nic78bx_led* FUNC_3 (struct led_classdev*) ;

__attribute__((used)) static enum led_brightness FUNC_4(struct led_classdev *VAR_1)
{
 struct nic78bx_led *VAR_2 = FUNC_3(VAR_1);
 unsigned long VAR_3;
 u8 VAR_4;

 FUNC_1(&VAR_2->data->lock, VAR_3);
 VAR_4 = FUNC_0(VAR_2->data->io_base);
 FUNC_2(&VAR_2->data->lock, VAR_3);

 return (VAR_4 & VAR_2->bit) ? 1 : VAR_0;
}
