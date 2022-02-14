
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 unsigned long* FUNC_0 (struct task_struct*,int *) ;
 int FUNC_1 (struct task_struct*,int *,unsigned long*,int ) ;

void FUNC_2(struct task_struct *VAR_2, unsigned long *VAR_3)
{
 VAR_2 = VAR_2 ? : VAR_1;





 if (!VAR_3 && VAR_2 == VAR_1)
  VAR_3 = FUNC_0(VAR_1, ((void*)0));

 FUNC_1(VAR_2, ((void*)0), VAR_3, VAR_0);
}
