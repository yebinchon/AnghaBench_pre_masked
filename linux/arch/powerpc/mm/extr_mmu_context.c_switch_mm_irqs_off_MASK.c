
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct mm_struct*,struct mm_struct*,struct task_struct*) ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct task_struct*,struct mm_struct*) ;
 int FUNC_10 (struct mm_struct*,struct mm_struct*,struct task_struct*) ;

void FUNC_11(struct mm_struct *VAR_1, struct mm_struct *VAR_2,
   struct task_struct *VAR_3)
{
 bool VAR_4 = 0;


 if (!FUNC_2(FUNC_8(), FUNC_5(VAR_2))) {
  FUNC_1(FUNC_8(), FUNC_5(VAR_2));
  FUNC_3(VAR_2);
  FUNC_7();

  VAR_4 = 1;
 }


 FUNC_9(VAR_3, VAR_2);


 if (VAR_1 == VAR_2)
  return;





 if (FUNC_0(VAR_0))
  asm volatile ("dssall");

 if (VAR_4)
  FUNC_6(VAR_2);
 else
  FUNC_4(VAR_1, VAR_2, VAR_3);





 FUNC_10(VAR_1, VAR_2, VAR_3);
}
