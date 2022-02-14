
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_hive_info {int number_devices; int * kobj; struct amdgpu_device* adev; } ;
struct amdgpu_device {TYPE_2__* dev; TYPE_1__* ddev; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_5__ {int unique; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_2,
      struct amdgpu_hive_info *VAR_3)
{
 int VAR_4 = 0;
 char VAR_5[10] = { 0 };


 VAR_4 = FUNC_1(VAR_2->dev, &VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "XGMI: Failed to create device file xgmi_device_id\n");
  return VAR_4;
 }


 VAR_4 = FUNC_1(VAR_2->dev, &VAR_1);
 if (VAR_4)
  FUNC_3("failed to create xgmi_error\n");



 if (VAR_2 != VAR_3->adev) {
  VAR_4 = FUNC_5(&VAR_2->dev->kobj, VAR_3->kobj,
     "xgmi_hive_info");
  if (VAR_4) {
   FUNC_0(VAR_2->dev, "XGMI: Failed to create link to hive info");
   goto remove_file;
  }
 }

 FUNC_4(VAR_5, "node%d", VAR_3->number_devices);

 VAR_4 = FUNC_5(VAR_3->kobj, &VAR_2->dev->kobj, VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "XGMI: Failed to create link from hive info");
  goto remove_link;
 }

 goto success;


remove_link:
 FUNC_6(&VAR_2->dev->kobj, VAR_2->ddev->unique);

remove_file:
 FUNC_2(VAR_2->dev, &VAR_0);

success:
 return VAR_4;
}
