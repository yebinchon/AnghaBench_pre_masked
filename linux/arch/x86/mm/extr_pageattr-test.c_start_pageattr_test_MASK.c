
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct task_struct* FUNC_2 (int ,int *,char*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct task_struct *VAR_1;

 VAR_1 = FUNC_2(VAR_0, ((void*)0), "pageattr-test");
 if (!FUNC_0(VAR_1))
  FUNC_3(VAR_1);
 else
  FUNC_1(1);

 return 0;
}
