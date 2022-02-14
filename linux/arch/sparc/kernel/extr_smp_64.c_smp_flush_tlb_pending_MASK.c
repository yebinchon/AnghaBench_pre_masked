
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tlb_pending_info {unsigned long nr; unsigned long* vaddrs; int ctx; } ;
struct mm_struct {int mm_users; int context; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 () ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,struct tlb_pending_info*,int) ;
 int VAR_1 ;

void FUNC_9(struct mm_struct *VAR_2, unsigned long VAR_3, unsigned long *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_2->context);
 struct tlb_pending_info VAR_6;
 int VAR_7 = FUNC_5();

 VAR_6.ctx = VAR_5;
 VAR_6.nr = VAR_3;
 VAR_6.vaddrs = VAR_4;

 if (VAR_2 == VAR_0->mm && FUNC_2(&VAR_2->mm_users) == 1)
  FUNC_3(FUNC_6(VAR_2), FUNC_4(VAR_7));
 else
  FUNC_8(FUNC_6(VAR_2), VAR_1,
           &VAR_6, 1);

 FUNC_1(VAR_5, VAR_3, VAR_4);

 FUNC_7();
}
