
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int vm_end; int vm_start; struct vm_area_struct* vm_next; } ;
struct TYPE_3__ {int uses_skeys; } ;
struct mm_struct {int mmap_sem; int def_flags; TYPE_1__ context; struct vm_area_struct* mmap; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mm_struct*,int ,int ,int *,int *) ;

int FUNC_5(void)
{
 struct mm_struct *VAR_6 = VAR_4->mm;
 struct vm_area_struct *VAR_7;
 int VAR_8 = 0;

 FUNC_0(&VAR_6->mmap_sem);
 if (FUNC_2(VAR_6))
  goto out_up;

 VAR_6->context.uses_skeys = 1;
 for (VAR_7 = VAR_6->mmap; VAR_7; VAR_7 = VAR_7->vm_next) {
  if (FUNC_1(VAR_7, VAR_7->vm_start, VAR_7->vm_end,
    VAR_1, &VAR_7->vm_flags)) {
   VAR_6->context.uses_skeys = 0;
   VAR_8 = -VAR_0;
   goto out_up;
  }
 }
 VAR_6->def_flags &= ~VAR_3;

 FUNC_4(VAR_6, 0, VAR_2, &VAR_5, ((void*)0));

out_up:
 FUNC_3(&VAR_6->mmap_sem);
 return VAR_8;
}
