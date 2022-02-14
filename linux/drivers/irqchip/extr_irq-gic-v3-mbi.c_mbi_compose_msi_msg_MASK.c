
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
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_2, struct msi_msg *VAR_3)
{
 VAR_3[0].address_hi = FUNC_3(VAR_1 + VAR_0);
 VAR_3[0].address_lo = FUNC_2(VAR_1 + VAR_0);
 VAR_3[0].data = VAR_2->parent_data->hwirq;

 FUNC_0(FUNC_1(VAR_2), VAR_3);
}
