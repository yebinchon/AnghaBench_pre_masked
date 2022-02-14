
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int mutex; } ;
struct amdgpu_device {struct smu_context smu; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct smu_context*,int) ;
 int FUNC_4 (struct smu_context*) ;

__attribute__((used)) static int FUNC_5(void *VAR_0)
{
 int VAR_1;
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;
 struct smu_context *VAR_3 = &VAR_2->smu;

 FUNC_2("SMU is resuming...\n");

 FUNC_0(&VAR_3->mutex);

 VAR_1 = FUNC_3(VAR_3, 0);
 if (VAR_1)
  goto failed;

 VAR_1 = FUNC_4(VAR_3);
 if (VAR_1)
  goto failed;

 FUNC_1(&VAR_3->mutex);

 FUNC_2("SMU is resumed successfully!\n");

 return 0;
failed:
 FUNC_1(&VAR_3->mutex);
 return VAR_1;
}
