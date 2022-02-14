
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_register_descriptor {int num_registers; struct rmi_register_desc_item* registers; } ;
struct rmi_register_desc_item {scalar_t__ reg_size; } ;



size_t FUNC_0(struct rmi_register_descriptor *VAR_0)
{
 const struct rmi_register_desc_item *VAR_1;
 int VAR_2;
 size_t VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_registers; VAR_2++) {
  VAR_1 = &VAR_0->registers[VAR_2];
  VAR_3 += VAR_1->reg_size;
 }
 return VAR_3;
}
