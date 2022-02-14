
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef scalar_t__ pte_t ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (struct mm_struct*,unsigned long) ;

int FUNC_5(struct pt_regs *VAR_1, unsigned long VAR_2)
{
 struct mm_struct *VAR_3 = VAR_0->mm;
 pte_t VAR_4;
 int VAR_5 = 0;

 if (FUNC_2(VAR_1)) {

  VAR_4 = FUNC_4(VAR_3, VAR_2);
  if (!VAR_4 && FUNC_1(VAR_4))
   VAR_5 = 1;
 } else {

  VAR_4 = FUNC_3(VAR_2);
  if (!VAR_4 && FUNC_0(VAR_4))
   VAR_5 = 1;
 }
 return VAR_5;
}
