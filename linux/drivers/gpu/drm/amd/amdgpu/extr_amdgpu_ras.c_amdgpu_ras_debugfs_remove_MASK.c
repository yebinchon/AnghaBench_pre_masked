
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ras_manager {int * ent; } ;
struct ras_common_if {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 struct ras_manager* FUNC_0 (struct amdgpu_device*,struct ras_common_if*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ras_manager*) ;

void FUNC_3(struct amdgpu_device *VAR_0,
  struct ras_common_if *VAR_1)
{
 struct ras_manager *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_2 || !VAR_2->ent)
  return;

 FUNC_1(VAR_2->ent);
 VAR_2->ent = ((void*)0);
 FUNC_2(VAR_2);
}
