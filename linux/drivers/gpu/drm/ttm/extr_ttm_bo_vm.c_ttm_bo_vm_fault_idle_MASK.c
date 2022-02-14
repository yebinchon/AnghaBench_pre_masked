
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int flags; TYPE_2__* vma; } ;
struct TYPE_6__ {int resv; } ;
struct ttm_buffer_object {int * moving; TYPE_3__ base; } ;
struct TYPE_5__ {TYPE_1__* vm_mm; } ;
struct TYPE_4__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct ttm_buffer_object*) ;
 int FUNC_6 (struct ttm_buffer_object*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static vm_fault_t FUNC_9(struct ttm_buffer_object *VAR_6,
    struct vm_fault *VAR_7)
{
 vm_fault_t VAR_8 = 0;
 int VAR_9 = 0;

 if (FUNC_4(!VAR_6->moving))
  goto out_unlock;




 if (FUNC_0(VAR_6->moving))
  goto out_clear;





 if (VAR_7->flags & VAR_1) {
  VAR_8 = VAR_4;
  if (VAR_7->flags & VAR_2)
   goto out_unlock;

  FUNC_5(VAR_6);
  FUNC_8(&VAR_7->vma->vm_mm->mmap_sem);
  (void) FUNC_2(VAR_6->moving, 1);
  FUNC_3(VAR_6->base.resv);
  FUNC_6(VAR_6);
  goto out_unlock;
 }




 VAR_9 = FUNC_2(VAR_6->moving, 1);
 if (FUNC_7(VAR_9 != 0)) {
  VAR_8 = (VAR_9 != -VAR_0) ? VAR_5 :
   VAR_3;
  goto out_unlock;
 }

out_clear:
 FUNC_1(VAR_6->moving);
 VAR_6->moving = ((void*)0);

out_unlock:
 return VAR_8;
}
