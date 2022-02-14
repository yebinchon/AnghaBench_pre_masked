
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct irq_data {int irq; } ;
struct TYPE_6__ {int imask; } ;
struct TYPE_4__ {int control; } ;
struct TYPE_5__ {TYPE_1__ pci; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_6)
{
 VAR_5 |= FUNC_0(VAR_6->irq - VAR_1);
 VAR_4->pci.control = VAR_5;
 VAR_3 |= 1 << (VAR_6->irq - VAR_0);
 VAR_2->imask = VAR_3;
}
