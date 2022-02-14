
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_msg {int dummy; } ;
struct irq_data {struct intel_ir_data* chip_data; } ;
struct intel_ir_data {struct msi_msg msi_entry; } ;



__attribute__((used)) static void FUNC_0(struct irq_data *VAR_0,
         struct msi_msg *VAR_1)
{
 struct intel_ir_data *VAR_2 = VAR_0->chip_data;

 *VAR_1 = VAR_2->msi_entry;
}
