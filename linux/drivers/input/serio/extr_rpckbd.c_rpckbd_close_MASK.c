
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct rpckbd_data* port_data; } ;
struct rpckbd_data {int tx_irq; int rx_irq; } ;


 int FUNC_0 (int ,struct serio*) ;

__attribute__((used)) static void FUNC_1(struct serio *VAR_0)
{
 struct rpckbd_data *VAR_1 = VAR_0->port_data;

 FUNC_0(VAR_1->rx_irq, VAR_0);
 FUNC_0(VAR_1->tx_irq, VAR_0);
}
