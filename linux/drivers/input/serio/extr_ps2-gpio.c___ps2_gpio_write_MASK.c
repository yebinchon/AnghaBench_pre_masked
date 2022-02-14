
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct ps2_gpio_data* port_data; } ;
struct ps2_gpio_data {unsigned char tx_byte; int tx_work; int mode; int gpio_clk; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct serio *VAR_1, unsigned char VAR_2)
{
 struct ps2_gpio_data *VAR_3 = VAR_1->port_data;

 FUNC_0(VAR_3->irq);
 FUNC_1(VAR_3->gpio_clk, 0);

 VAR_3->mode = VAR_0;
 VAR_3->tx_byte = VAR_2;

 FUNC_2(&VAR_3->tx_work, FUNC_3(200));

 return 0;
}
