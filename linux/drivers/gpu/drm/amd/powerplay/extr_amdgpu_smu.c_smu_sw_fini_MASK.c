
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int * irq_source; } ;
struct amdgpu_device {struct smu_context smu; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct smu_context*) ;
 int FUNC_3 (struct smu_context*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;
 struct smu_context *VAR_2 = &VAR_1->smu;
 int VAR_3;

 FUNC_0(VAR_2->irq_source);
 VAR_2->irq_source = ((void*)0);

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  FUNC_1("Failed to sw fini smc table!\n");
  return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_1("Failed to init smu_fini_power!\n");
  return VAR_3;
 }

 return 0;
}
