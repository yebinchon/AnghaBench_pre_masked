
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {unsigned long pinned_vm; int mmap_sem; } ;
struct ib_umem {unsigned long diff; int work; struct mm_struct* mm; int pid; struct ib_ucontext* context; scalar_t__ odp_data; } ;
struct ib_ucontext {scalar_t__ closing; int device; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct ib_umem*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct task_struct* FUNC_4 (int ,int ) ;
 struct mm_struct* FUNC_5 (struct task_struct*) ;
 int VAR_1 ;
 unsigned long FUNC_6 (struct ib_umem*) ;
 int FUNC_7 (struct ib_umem*) ;
 int VAR_2 ;
 int FUNC_8 (struct ib_umem*) ;
 int FUNC_9 (struct mm_struct*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct task_struct*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(struct ib_umem *VAR_3)
{
 struct ib_ucontext *VAR_4 = VAR_3->context;
 struct mm_struct *VAR_5;
 struct task_struct *VAR_6;
 unsigned long VAR_7;

 if (VAR_3->odp_data) {
  FUNC_7(VAR_3);
  return;
 }

 FUNC_1(VAR_3->context->device, VAR_3, 1);

 VAR_6 = FUNC_4(VAR_3->pid, VAR_0);
 FUNC_10(VAR_3->pid);
 if (!VAR_6)
  goto out;
 VAR_5 = FUNC_5(VAR_6);
 FUNC_11(VAR_6);
 if (!VAR_5)
  goto out;

 VAR_7 = FUNC_6(VAR_3);
 if (VAR_4->closing) {
  if (!FUNC_3(&VAR_5->mmap_sem)) {
   FUNC_0(&VAR_3->work, VAR_1);
   VAR_3->mm = VAR_5;
   VAR_3->diff = VAR_7;

   FUNC_12(VAR_2, &VAR_3->work);
   return;
  }
 } else
  FUNC_2(&VAR_5->mmap_sem);

 VAR_5->pinned_vm -= VAR_7;
 FUNC_13(&VAR_5->mmap_sem);
 FUNC_9(VAR_5);
out:
 FUNC_8(VAR_3);
}
