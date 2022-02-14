
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgd_mem {int lock; int sync; } ;
struct kgd_dev {int dummy; } ;
struct amdgpu_sync {int dummy; } ;


 int FUNC_0 (int *,struct amdgpu_sync*) ;
 int FUNC_1 (struct amdgpu_sync*) ;
 int FUNC_2 (struct amdgpu_sync*) ;
 int FUNC_3 (struct amdgpu_sync*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(
  struct kgd_dev *VAR_0, struct kgd_mem *VAR_1, bool VAR_2)
{
 struct amdgpu_sync VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3);

 FUNC_4(&VAR_1->lock);
 FUNC_0(&VAR_1->sync, &VAR_3);
 FUNC_5(&VAR_1->lock);

 VAR_4 = FUNC_3(&VAR_3, VAR_2);
 FUNC_2(&VAR_3);
 return VAR_4;
}
