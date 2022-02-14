
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pata_icside_state {scalar_t__ ioc_base; } ;
struct expansion_card {int irq; TYPE_1__* ops; } ;
struct ata_host {struct pata_icside_state* private_data; } ;
struct TYPE_2__ {int (* irqdisable ) (struct expansion_card*,int ) ;} ;


 struct ata_host* FUNC_0 (struct expansion_card*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct expansion_card*,int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct expansion_card *VAR_0)
{
 struct ata_host *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;






 FUNC_2(VAR_2);
 VAR_0->ops->irqdisable(VAR_0, VAR_0->irq);
 FUNC_1(VAR_2);






 if (VAR_1) {
  struct pata_icside_state *VAR_3 = VAR_1->private_data;
  if (VAR_3->ioc_base)
   FUNC_4(0, VAR_3->ioc_base);
 }
}
