
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_mscm_ir_chip_data {scalar_t__ mscm_ir_base; } ;
struct irq_data {struct vf610_mscm_ir_chip_data* chip_data; int hwirq; } ;
typedef int irq_hw_number_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 irq_hw_number_t VAR_1 = VAR_0->hwirq;
 struct vf610_mscm_ir_chip_data *VAR_2 = VAR_0->chip_data;

 FUNC_2(0x0, VAR_2->mscm_ir_base + FUNC_0(VAR_1));

 FUNC_1(VAR_0);
}
