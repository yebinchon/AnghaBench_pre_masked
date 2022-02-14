
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_data {int ** leds; } ;
struct wiimod_ops {size_t arg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(const struct wiimod_ops *VAR_0,
         struct wiimote_data *VAR_1)
{
 if (!VAR_1->leds[VAR_0->arg])
  return;

 FUNC_1(VAR_1->leds[VAR_0->arg]);
 FUNC_0(VAR_1->leds[VAR_0->arg]);
 VAR_1->leds[VAR_0->arg] = ((void*)0);
}
