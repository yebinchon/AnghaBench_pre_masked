
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {scalar_t__* df_perfmon_config_assign_mask; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_1(VAR_2->dev, &VAR_1);
 if (VAR_4)
  FUNC_0("failed to create file for available df counters\n");

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->df_perfmon_config_assign_mask[VAR_3] = 0;
}
