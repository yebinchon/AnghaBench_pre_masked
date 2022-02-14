
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_hw_device_data {int fw_name; } ;
struct adf_fw_loader_data {int * fw_loader; int * mmp_fw; int * uof_fw; } ;
struct adf_accel_dev {struct adf_hw_device_data* hw_device; struct adf_fw_loader_data* fw_loader; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct adf_accel_dev *VAR_0)
{
 struct adf_fw_loader_data *VAR_1 = VAR_0->fw_loader;
 struct adf_hw_device_data *VAR_2 = VAR_0->hw_device;

 if (!VAR_2->fw_name)
  return;

 FUNC_1(VAR_1->fw_loader);
 FUNC_0(VAR_1->fw_loader);
 FUNC_2(VAR_1->uof_fw);
 FUNC_2(VAR_1->mmp_fw);
 VAR_1->uof_fw = ((void*)0);
 VAR_1->mmp_fw = ((void*)0);
 VAR_1->fw_loader = ((void*)0);
}
