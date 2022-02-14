
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_hw_device_data {int dummy; } ;
typedef enum dev_sku_info { ____Placeholder_dev_sku_info } dev_sku_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adf_hw_device_data*) ;

__attribute__((used)) static enum dev_sku_info FUNC_1(struct adf_hw_device_data *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 == 8)
  return VAR_0;
 else if (VAR_4 == 10)
  return VAR_1;

 return VAR_2;
}
