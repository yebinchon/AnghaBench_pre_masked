
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ras_common_if {size_t block; } ;
struct ras_manager {int node; struct amdgpu_device* adev; struct ras_common_if head; } ;
struct amdgpu_ras {int head; struct ras_manager* objs; } ;
struct amdgpu_device {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct ras_manager*) ;
 struct amdgpu_ras* FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct ras_manager*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static struct ras_manager *FUNC_4(struct amdgpu_device *VAR_1,
  struct ras_common_if *VAR_2)
{
 struct amdgpu_ras *VAR_3 = FUNC_1(VAR_1);
 struct ras_manager *VAR_4;

 if (!VAR_3)
  return ((void*)0);

 if (VAR_2->block >= VAR_0)
  return ((void*)0);

 VAR_4 = &VAR_3->objs[VAR_2->block];

 if (FUNC_0(VAR_4))
  return ((void*)0);

 VAR_4->head = *VAR_2;
 VAR_4->adev = VAR_1;
 FUNC_3(&VAR_4->node, &VAR_3->head);
 FUNC_2(VAR_4);

 return VAR_4;
}
