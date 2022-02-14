
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_notifier {int dummy; } ;
struct mm_struct {int dummy; } ;
struct ib_ucontext_per_mm {struct mmu_notifier mn; int tgid; int umem_rwsem; int umem_tree; } ;
struct TYPE_2__ {int group_leader; struct mm_struct* mm; } ;


 int VAR_0 ;
 struct mmu_notifier* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 struct ib_ucontext_per_mm* FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static struct mmu_notifier *FUNC_7(struct mm_struct *VAR_5)
{
 struct ib_ucontext_per_mm *VAR_6;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->umem_tree = VAR_3;
 FUNC_3(&VAR_6->umem_rwsem);

 FUNC_1(VAR_5 != VAR_4->mm);
 FUNC_5();
 VAR_6->tgid = FUNC_2(VAR_4->group_leader, VAR_2);
 FUNC_6();
 return &VAR_6->mn;
}
