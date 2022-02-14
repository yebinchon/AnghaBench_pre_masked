
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct rmi_register_descriptor {int num_registers; struct rmi_register_desc_item* registers; } ;
struct rmi_register_desc_item {scalar_t__ reg; } ;



int FUNC_0(
  struct rmi_register_descriptor *VAR_0, u16 VAR_1)
{
 const struct rmi_register_desc_item *VAR_2;
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->num_registers; VAR_4++) {
  VAR_2 = &VAR_0->registers[VAR_4];
  if (VAR_2->reg == VAR_1)
   return VAR_3;
  ++VAR_3;
 }
 return -1;
}
