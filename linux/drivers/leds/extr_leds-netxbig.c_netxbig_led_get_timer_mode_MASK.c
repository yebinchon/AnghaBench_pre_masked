
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxbig_led_timer {unsigned long delay_on; unsigned long delay_off; int mode; } ;
typedef enum netxbig_led_mode { ____Placeholder_netxbig_led_mode } netxbig_led_mode ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(enum netxbig_led_mode *VAR_1,
          unsigned long VAR_2,
          unsigned long VAR_3,
          struct netxbig_led_timer *VAR_4,
          int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_4[VAR_6].delay_on == VAR_2 &&
      VAR_4[VAR_6].delay_off == VAR_3) {
   *VAR_1 = VAR_4[VAR_6].mode;
   return 0;
  }
 }
 return -VAR_0;
}
