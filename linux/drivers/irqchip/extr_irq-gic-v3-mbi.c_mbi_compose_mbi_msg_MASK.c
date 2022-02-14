
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msi_msg {int data; int address_lo; int address_hi; } ;
struct irq_data {TYPE_1__* parent_data; } ;
struct TYPE_2__ {int hwirq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct msi_msg*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct irq_data*,struct msi_msg*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_2, struct msi_msg *VAR_3)
{
 FUNC_3(VAR_2, VAR_3);

 VAR_3[1].address_hi = FUNC_4(VAR_1 + VAR_0);
 VAR_3[1].address_lo = FUNC_2(VAR_1 + VAR_0);
 VAR_3[1].data = VAR_2->parent_data->hwirq;

 FUNC_0(FUNC_1(VAR_2), &VAR_3[1]);
}
