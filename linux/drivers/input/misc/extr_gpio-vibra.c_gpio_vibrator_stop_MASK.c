
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_vibrator {int vcc_on; int vcc; int gpio; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gpio_vibrator *VAR_0)
{
 FUNC_0(VAR_0->gpio, 0);

 if (VAR_0->vcc_on) {
  FUNC_1(VAR_0->vcc);
  VAR_0->vcc_on = 0;
 }
}
