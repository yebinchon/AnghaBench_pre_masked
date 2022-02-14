
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct ps2_gpio_data* port_data; } ;
struct ps2_gpio_data {int irq; int tx_work; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct serio *VAR_0)
{
 struct ps2_gpio_data *VAR_1 = VAR_0->port_data;

 FUNC_1(&VAR_1->tx_work);
 FUNC_0(VAR_1->irq);
}
