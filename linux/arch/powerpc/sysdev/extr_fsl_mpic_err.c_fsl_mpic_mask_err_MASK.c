
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpic {unsigned int* err_int_vecs; int err_regs; } ;
struct irq_data {int irq; } ;


 int VAR_0 ;
 struct mpic* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 u32 VAR_2;
 struct mpic *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4 = FUNC_3(VAR_1->irq) - VAR_3->err_int_vecs[0];

 VAR_2 = FUNC_1(VAR_3->err_regs, VAR_0);
 VAR_2 |= (1 << (31 - VAR_4));
 FUNC_2(VAR_3->err_regs, VAR_2);
}
