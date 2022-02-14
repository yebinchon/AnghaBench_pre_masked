
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (struct mm_struct*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 struct mm_struct VAR_5 ;

int FUNC_2(unsigned long VAR_6, unsigned long VAR_7, unsigned long VAR_8,
       unsigned long VAR_9)
{
 unsigned long VAR_10 = 0;
 struct mm_struct *VAR_11 = VAR_4->mm;

 if ((FUNC_0(VAR_6) == VAR_3) ||
     (FUNC_0(VAR_6) == VAR_2))
  VAR_11 = &VAR_5;

 if (VAR_9 & VAR_0)
  VAR_10 |= VAR_1;

 return FUNC_1(VAR_11, VAR_6, VAR_7, VAR_8, VAR_10);
}
