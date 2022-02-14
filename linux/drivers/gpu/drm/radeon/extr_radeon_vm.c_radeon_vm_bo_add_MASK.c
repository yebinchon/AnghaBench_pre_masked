
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_vm {int mutex; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ last; scalar_t__ start; } ;
struct radeon_bo_va {int ref_count; int bo_list; int vm_status; scalar_t__ flags; TYPE_1__ it; struct radeon_bo* bo; struct radeon_vm* vm; } ;
struct radeon_bo {int va; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct radeon_bo_va* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct radeon_bo_va *FUNC_5(struct radeon_device *VAR_1,
          struct radeon_vm *VAR_2,
          struct radeon_bo *VAR_3)
{
 struct radeon_bo_va *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct radeon_bo_va), VAR_0);
 if (VAR_4 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_4->vm = VAR_2;
 VAR_4->bo = VAR_3;
 VAR_4->it.start = 0;
 VAR_4->it.last = 0;
 VAR_4->flags = 0;
 VAR_4->ref_count = 1;
 FUNC_0(&VAR_4->bo_list);
 FUNC_0(&VAR_4->vm_status);

 FUNC_3(&VAR_2->mutex);
 FUNC_2(&VAR_4->bo_list, &VAR_3->va);
 FUNC_4(&VAR_2->mutex);

 return VAR_4;
}
