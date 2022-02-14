
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_msg {int data; int address_lo; int address_hi; } ;
struct ls_scfg_msi {int msiir_addr; } ;
struct irq_data {int hwirq; } ;
struct cpumask {int dummy; } ;


 int FUNC_0 (struct cpumask const*) ;
 int FUNC_1 (int ,struct msi_msg*) ;
 struct cpumask* FUNC_2 (struct irq_data*) ;
 struct ls_scfg_msi* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_1, struct msi_msg *VAR_2)
{
 struct ls_scfg_msi *VAR_3 = FUNC_3(VAR_1);

 VAR_2->address_hi = FUNC_6(VAR_3->msiir_addr);
 VAR_2->address_lo = FUNC_5(VAR_3->msiir_addr);
 VAR_2->data = VAR_1->hwirq;

 if (VAR_0) {
  const struct cpumask *VAR_4;

  VAR_4 = FUNC_2(VAR_1);
  VAR_2->data |= FUNC_0(VAR_4);
 }

 FUNC_1(FUNC_4(VAR_1), VAR_2);
}
