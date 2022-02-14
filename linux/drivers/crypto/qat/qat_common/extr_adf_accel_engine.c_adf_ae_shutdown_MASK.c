
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_hw_device_data {int fw_name; } ;
struct adf_fw_loader_data {int fw_loader; } ;
struct adf_accel_dev {struct adf_fw_loader_data* fw_loader; struct adf_hw_device_data* hw_device; } ;


 int FUNC_0 (struct adf_fw_loader_data*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct adf_accel_dev *VAR_0)
{
 struct adf_fw_loader_data *VAR_1 = VAR_0->fw_loader;
 struct adf_hw_device_data *VAR_2 = VAR_0->hw_device;

 if (!VAR_2->fw_name)
  return 0;

 FUNC_1(VAR_1->fw_loader);
 FUNC_0(VAR_0->fw_loader);
 VAR_0->fw_loader = ((void*)0);
 return 0;
}
