
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int dummy; } ;
struct hfi1_asic_data {int * i2c_bus1; int * i2c_bus0; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct hfi1_devdata *VAR_0, struct hfi1_asic_data *VAR_1)
{
 if (!VAR_1)
  return;
 FUNC_0(VAR_1->i2c_bus0);
 VAR_1->i2c_bus0 = ((void*)0);
 FUNC_0(VAR_1->i2c_bus1);
 VAR_1->i2c_bus1 = ((void*)0);
}
