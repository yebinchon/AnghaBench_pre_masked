
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct irq_data {int irq; } ;
struct TYPE_4__ {unsigned long istat; } ;
struct TYPE_5__ {TYPE_1__ ctrl; } ;
struct TYPE_6__ {TYPE_2__ perif; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_data*) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_2)
{
 unsigned long VAR_3;


 VAR_3 = VAR_1->perif.ctrl.istat;
 VAR_3 &= ~(1 << (VAR_2->irq - VAR_0));
 VAR_1->perif.ctrl.istat = VAR_3;

 FUNC_0(VAR_2);
}
