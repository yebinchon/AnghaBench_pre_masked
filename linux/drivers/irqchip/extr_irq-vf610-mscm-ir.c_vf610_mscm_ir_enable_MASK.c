
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vf610_mscm_ir_chip_data {int cpu_mask; scalar_t__ mscm_ir_base; } ;
struct irq_data {struct vf610_mscm_ir_chip_data* chip_data; int hwirq; } ;
typedef int irq_hw_number_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 irq_hw_number_t VAR_2 = VAR_1->hwirq;
 struct vf610_mscm_ir_chip_data *VAR_3 = VAR_1->chip_data;
 u16 VAR_4;

 VAR_4 = FUNC_3(VAR_3->mscm_ir_base + FUNC_0(VAR_2));
 VAR_4 &= VAR_0;

 FUNC_1(VAR_4 & ~VAR_3->cpu_mask);

 FUNC_4(VAR_3->cpu_mask,
         VAR_3->mscm_ir_base + FUNC_0(VAR_2));

 FUNC_2(VAR_1);
}
