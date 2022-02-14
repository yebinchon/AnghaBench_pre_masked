
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psp_context {int dummy; } ;
struct TYPE_2__ {int mutex; } ;
struct amdgpu_device {TYPE_1__ firmware; struct psp_context psp; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct psp_context*) ;
 int FUNC_5 (struct psp_context*) ;

__attribute__((used)) static int FUNC_6(void *VAR_0)
{
 int VAR_1;
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;
 struct psp_context *VAR_3 = &VAR_2->psp;

 FUNC_1("PSP is resuming...\n");

 FUNC_2(&VAR_2->firmware.mutex);

 VAR_1 = FUNC_4(VAR_3);
 if (VAR_1)
  goto failed;

 VAR_1 = FUNC_5(VAR_3);
 if (VAR_1)
  goto failed;

 FUNC_3(&VAR_2->firmware.mutex);

 return 0;

failed:
 FUNC_0("PSP resume failed\n");
 FUNC_3(&VAR_2->firmware.mutex);
 return VAR_1;
}
