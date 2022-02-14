
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {int vm_start; int vm_flags; int vm_page_prot; void* vm_end; } ;
struct TYPE_5__ {int rbs_bot; } ;
struct TYPE_7__ {int personality; TYPE_2__* mm; TYPE_1__ thread; } ;
struct TYPE_6__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 TYPE_4__* VAR_13 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_2__*,struct vm_area_struct*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct vm_area_struct* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct vm_area_struct*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct vm_area_struct*) ;

void
FUNC_10 (void)
{
 struct vm_area_struct *VAR_14;

 FUNC_2();






 VAR_14 = FUNC_6(VAR_13->mm);
 if (VAR_14) {
  FUNC_9(VAR_14);
  VAR_14->vm_start = VAR_13->thread.rbs_bot & VAR_1;
  VAR_14->vm_end = VAR_14->vm_start + VAR_3;
  VAR_14->vm_flags = VAR_5|VAR_8|VAR_4;
  VAR_14->vm_page_prot = FUNC_8(VAR_14->vm_flags);
  FUNC_1(&VAR_13->mm->mmap_sem);
  if (FUNC_3(VAR_13->mm, VAR_14)) {
   FUNC_5(&VAR_13->mm->mmap_sem);
   FUNC_7(VAR_14);
   return;
  }
  FUNC_5(&VAR_13->mm->mmap_sem);
 }


 if (!(VAR_13->personality & VAR_0)) {
  VAR_14 = FUNC_6(VAR_13->mm);
  if (VAR_14) {
   FUNC_9(VAR_14);
   VAR_14->vm_end = VAR_3;
   VAR_14->vm_page_prot = FUNC_0(FUNC_4(VAR_2) | VAR_12);
   VAR_14->vm_flags = VAR_11 | VAR_10 | VAR_9 |
     VAR_7 | VAR_6;
   FUNC_1(&VAR_13->mm->mmap_sem);
   if (FUNC_3(VAR_13->mm, VAR_14)) {
    FUNC_5(&VAR_13->mm->mmap_sem);
    FUNC_7(VAR_14);
    return;
   }
   FUNC_5(&VAR_13->mm->mmap_sem);
  }
 }
}
