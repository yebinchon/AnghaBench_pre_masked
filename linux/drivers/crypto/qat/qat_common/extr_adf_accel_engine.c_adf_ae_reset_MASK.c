
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_fw_loader_data {int fw_loader; } ;
struct adf_accel_dev {struct adf_fw_loader_data* fw_loader; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct adf_accel_dev *VAR_1, int VAR_2)
{
 struct adf_fw_loader_data *VAR_3 = VAR_1->fw_loader;

 FUNC_1(VAR_3->fw_loader);
 if (FUNC_0(VAR_3->fw_loader))
  return -VAR_0;

 return 0;
}
