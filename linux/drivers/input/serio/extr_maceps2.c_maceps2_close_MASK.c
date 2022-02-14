
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {scalar_t__ port_data; } ;
struct maceps2_data {int irq; TYPE_1__* port; } ;
struct TYPE_2__ {int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct serio*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct serio *VAR_2)
{
 struct maceps2_data *VAR_3 = (struct maceps2_data *)VAR_2->port_data;

 VAR_3->port->control = VAR_1 | VAR_0;
 FUNC_1(100);
 FUNC_0(VAR_3->irq, VAR_2);
}
