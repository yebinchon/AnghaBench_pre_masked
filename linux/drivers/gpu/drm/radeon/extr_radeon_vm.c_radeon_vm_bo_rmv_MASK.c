
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_vm {int mutex; int status_lock; int freed; int va; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ last; scalar_t__ start; } ;
struct radeon_bo_va {int last_pt_update; int vm_status; int bo; TYPE_1__ it; int bo_list; struct radeon_vm* vm; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct radeon_bo_va*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct radeon_device *VAR_0,
        struct radeon_bo_va *VAR_1)
{
 struct radeon_vm *VAR_2 = VAR_1->vm;

 FUNC_3(&VAR_1->bo_list);

 FUNC_4(&VAR_2->mutex);
 if (VAR_1->it.start || VAR_1->it.last)
  FUNC_0(&VAR_1->it, &VAR_2->va);

 FUNC_8(&VAR_2->status_lock);
 FUNC_3(&VAR_1->vm_status);
 if (VAR_1->it.start || VAR_1->it.last) {
  VAR_1->bo = FUNC_6(VAR_1->bo);
  FUNC_2(&VAR_1->vm_status, &VAR_2->freed);
 } else {
  FUNC_7(&VAR_1->last_pt_update);
  FUNC_1(VAR_1);
 }
 FUNC_9(&VAR_2->status_lock);

 FUNC_5(&VAR_2->mutex);
}
