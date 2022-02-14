
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int dummy; } ;
struct hfi1_asic_data {void* i2c_bus1; void* i2c_bus0; } ;


 int VAR_0 ;
 void* FUNC_0 (struct hfi1_devdata*,struct hfi1_asic_data*,int) ;

int FUNC_1(struct hfi1_devdata *VAR_1, struct hfi1_asic_data *VAR_2)
{
 VAR_2->i2c_bus0 = FUNC_0(VAR_1, VAR_2, 0);
 VAR_2->i2c_bus1 = FUNC_0(VAR_1, VAR_2, 1);
 if (!VAR_2->i2c_bus0 || !VAR_2->i2c_bus1)
  return -VAR_0;
 return 0;
}
