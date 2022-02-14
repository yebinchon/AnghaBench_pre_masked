
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irq_data {int irq; } ;
struct TYPE_3__ {unsigned int vector; int dest_apicid; } ;
struct apic_chip_data {TYPE_1__ hw_irq_cfg; } ;
struct TYPE_4__ {int (* calc_dest_apicid ) (unsigned int) ;} ;


 TYPE_2__* VAR_0 ;
 struct apic_chip_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct irq_data*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ,unsigned int,unsigned int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4)
{
 struct apic_chip_data *VAR_5 = FUNC_0(VAR_2);

 FUNC_3(&VAR_1);

 VAR_5->hw_irq_cfg.vector = VAR_3;
 VAR_5->hw_irq_cfg.dest_apicid = VAR_0->calc_dest_apicid(VAR_4);
 FUNC_2(VAR_2, FUNC_1(VAR_4));
 FUNC_5(VAR_2->irq, VAR_3, VAR_4,
       VAR_5->hw_irq_cfg.dest_apicid);
}
