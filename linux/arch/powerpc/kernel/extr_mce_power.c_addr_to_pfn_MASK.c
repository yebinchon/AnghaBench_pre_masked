
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct mm_struct {int pgd; } ;
typedef int pte_t ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int * FUNC_0 (int ,unsigned long,int *,unsigned int*) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__* VAR_3 ;
 struct mm_struct VAR_4 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 unsigned long FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct pt_regs*) ;

unsigned long FUNC_8(struct pt_regs *VAR_5, unsigned long VAR_6)
{
 pte_t *VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9, VAR_10;
 struct mm_struct *VAR_11;

 if (FUNC_7(VAR_5))
  VAR_11 = VAR_3->mm;
 else
  VAR_11 = &VAR_4;

 FUNC_3(VAR_10);
 VAR_7 = FUNC_0(VAR_11->pgd, VAR_6, ((void*)0), &VAR_8);

 if (!VAR_7 || FUNC_5(*VAR_7)) {
  VAR_9 = VAR_2;
  goto out;
 }

 if (VAR_8 <= VAR_0)
  VAR_9 = FUNC_4(*VAR_7);
 else {
  unsigned long VAR_12 = (1ul << VAR_8) - VAR_1;
  VAR_9 = FUNC_4(FUNC_1(FUNC_6(*VAR_7) | (VAR_6 & VAR_12)));
 }

out:
 FUNC_2(VAR_10);
 return VAR_9;
}
