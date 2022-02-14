
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int launch_proc_t ;


 int FUNC_0 (int ,int ,int ,int ,void*,void*) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (struct task_struct*) ;

__attribute__((used)) static int FUNC_6(int VAR_1, struct task_struct *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)FUNC_5(VAR_2);
 unsigned long VAR_4 = FUNC_2(VAR_2);

 FUNC_0(FUNC_3(VAR_1), FUNC_4(VAR_1),
  (launch_proc_t)FUNC_1(VAR_0),
  0, (void *) VAR_4, (void *) VAR_3);
 return 0;
}
