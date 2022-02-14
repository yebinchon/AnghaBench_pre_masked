
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int mm_users; int context; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 () ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long,unsigned long,int ,int ) ;
 int VAR_1 ;

void FUNC_9(struct mm_struct *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_2->context);
 int VAR_5 = FUNC_5();

 if (VAR_2 == VAR_0->mm && FUNC_2(&VAR_2->mm_users) == 1)
  FUNC_3(FUNC_6(VAR_2), FUNC_4(VAR_5));
 else
  FUNC_8(&VAR_1,
          VAR_4, VAR_3, 0,
          FUNC_6(VAR_2));
 FUNC_1(VAR_4, VAR_3);

 FUNC_7();
}
