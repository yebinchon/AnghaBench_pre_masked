
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct its_vm {int fwnode; int domain; int nr_vpes; TYPE_1__** vpes; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct its_vm *VAR_0)
{
 FUNC_1(VAR_0->vpes[0]->irq, VAR_0->nr_vpes);
 FUNC_2(VAR_0->domain);
 FUNC_0(VAR_0->fwnode);
}
