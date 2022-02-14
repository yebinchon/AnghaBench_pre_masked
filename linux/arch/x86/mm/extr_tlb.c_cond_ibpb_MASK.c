
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {unsigned long mm; } ;
struct TYPE_2__ {int last_user_mm; int last_user_mm_ibpb; } ;


 unsigned long VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct task_struct *VAR_4)
{
 if (!VAR_4 || !VAR_4->mm)
  return;
 if (FUNC_2(&VAR_3)) {
  unsigned long VAR_5, VAR_6;
  VAR_6 = FUNC_1(VAR_4);
  VAR_5 = FUNC_4(VAR_1.last_user_mm_ibpb);





  if (VAR_6 != VAR_5 &&
      (VAR_6 | VAR_5) & VAR_0)
   FUNC_0();

  FUNC_5(VAR_1.last_user_mm_ibpb, VAR_6);
 }

 if (FUNC_3(&VAR_2)) {





  if (FUNC_4(VAR_1.last_user_mm) != VAR_4->mm) {
   FUNC_0();
   FUNC_5(VAR_1.last_user_mm, VAR_4->mm);
  }
 }
}
