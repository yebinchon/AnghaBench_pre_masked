
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nokia_modem_device {int gpio_amount; TYPE_1__* gpios; } ;
struct device {int kobj; } ;
struct TYPE_2__ {int gpio; int name; } ;


 struct nokia_modem_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct nokia_modem_device *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->gpio_amount; VAR_2++) {
  FUNC_2(&VAR_0->kobj, VAR_1->gpios[VAR_2].name);
  FUNC_1(VAR_1->gpios[VAR_2].gpio);
 }
}
