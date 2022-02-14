
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prod_dev_id {unsigned int product_id; unsigned char device_id; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct bmc_device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (struct device_driver*,int *,struct prod_dev_id*,int ) ;
 int FUNC_1 (struct device*) ;
 struct bmc_device* FUNC_2 (struct device*) ;

__attribute__((used)) static struct bmc_device *FUNC_3(
 struct device_driver *VAR_1,
 unsigned int VAR_2, unsigned char VAR_3)
{
 struct prod_dev_id VAR_4 = {
  .product_id = VAR_2,
  .device_id = VAR_3,
 };
 struct device *VAR_5;
 struct bmc_device *VAR_6 = ((void*)0);

 VAR_5 = FUNC_0(VAR_1, ((void*)0), &VAR_4, VAR_0);
 if (VAR_5) {
  VAR_6 = FUNC_2(VAR_5);
  FUNC_1(VAR_5);
 }
 return VAR_6;
}
