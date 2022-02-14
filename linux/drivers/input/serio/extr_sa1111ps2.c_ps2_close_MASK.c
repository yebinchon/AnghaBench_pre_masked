
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct ps2if* port_data; } ;
struct ps2if {int dev; int rx_irq; int tx_irq; scalar_t__ open; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ps2if*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct serio *VAR_1)
{
 struct ps2if *VAR_2 = VAR_1->port_data;

 FUNC_3(0, VAR_2->base + VAR_0);

 FUNC_0(VAR_2->rx_irq);

 VAR_2->open = 0;

 FUNC_1(VAR_2->tx_irq, VAR_2);
 FUNC_1(VAR_2->rx_irq, VAR_2);

 FUNC_2(VAR_2->dev);
}
