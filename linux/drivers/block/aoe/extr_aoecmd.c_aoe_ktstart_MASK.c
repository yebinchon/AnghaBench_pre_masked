
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct ktstate {int rendez; struct task_struct* task; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct task_struct* FUNC_2 (int ,struct ktstate*,char*,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct ktstate *VAR_2)
{
 struct task_struct *VAR_3;

 FUNC_1(&VAR_2->rendez);
 VAR_3 = FUNC_2(VAR_1, VAR_2, "%s", VAR_2->name);
 if (VAR_3 == ((void*)0) || FUNC_0(VAR_3))
  return -VAR_0;
 VAR_2->task = VAR_3;
 FUNC_3(&VAR_2->rendez);
 FUNC_1(&VAR_2->rendez);
 return 0;
}
