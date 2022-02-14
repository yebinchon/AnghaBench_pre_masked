
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {int * overdrive_table; int * max_sustainable_clocks; int * driver_pptable; } ;
struct smu_context {struct smu_table_context smu_table; } ;
struct amdgpu_device {int flags; struct smu_context smu; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct smu_context*) ;
 int FUNC_2 (struct smu_context*) ;
 int FUNC_3 (struct smu_context*,int) ;
 int FUNC_4 (struct smu_context*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 struct smu_context *VAR_3 = &VAR_2->smu;
 struct smu_table_context *VAR_4 = &VAR_3->smu_table;
 int VAR_5 = 0;

 if (VAR_2->flags & VAR_0) {
  FUNC_3(&VAR_2->smu, 1);
  FUNC_4(&VAR_2->smu, 1);
 }

 FUNC_0(VAR_4->driver_pptable);
 VAR_4->driver_pptable = ((void*)0);

 FUNC_0(VAR_4->max_sustainable_clocks);
 VAR_4->max_sustainable_clocks = ((void*)0);

 FUNC_0(VAR_4->overdrive_table);
 VAR_4->overdrive_table = ((void*)0);

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  return VAR_5;

 return 0;
}
