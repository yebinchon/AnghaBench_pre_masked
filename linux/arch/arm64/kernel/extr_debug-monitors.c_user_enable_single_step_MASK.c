
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*) ;
 struct thread_info* FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct thread_info*,int ) ;

void FUNC_4(struct task_struct *VAR_1)
{
 struct thread_info *VAR_2 = FUNC_2(VAR_1);

 if (!FUNC_3(VAR_2, VAR_0))
  FUNC_0(FUNC_1(VAR_1));
}
