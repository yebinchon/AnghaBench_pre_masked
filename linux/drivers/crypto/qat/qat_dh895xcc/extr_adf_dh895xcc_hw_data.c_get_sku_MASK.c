
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_hw_device_data {int fuses; } ;
typedef enum dev_sku_info { ____Placeholder_dev_sku_info } dev_sku_info ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum dev_sku_info FUNC_0(struct adf_hw_device_data *VAR_7)
{
 int VAR_8 = (VAR_7->fuses & VAR_0)
     >> VAR_1;

 switch (VAR_8) {
 case 131:
  return VAR_2;
 case 130:
  return VAR_3;
 case 129:
  return VAR_4;
 case 128:
  return VAR_5;
 default:
  return VAR_6;
 }
 return VAR_6;
}
