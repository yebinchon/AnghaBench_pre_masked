
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_context {int dummy; } ;
struct amdgpu_device {struct psp_context psp; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct psp_context*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;
 struct psp_context *VAR_2 = &VAR_1->psp;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  FUNC_0("Failed to load psp firmware!\n");
  return VAR_3;
 }

 return 0;
}
