
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa27x_keypad_platform_data {int (* clear_wakeup_event ) () ;} ;
struct pxa27x_keypad {struct pxa27x_keypad_platform_data* pdata; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct pxa27x_keypad *VAR_0)
{
 const struct pxa27x_keypad_platform_data *VAR_1 = VAR_0->pdata;

 if (VAR_1->clear_wakeup_event)
  (VAR_1->clear_wakeup_event)();
}
