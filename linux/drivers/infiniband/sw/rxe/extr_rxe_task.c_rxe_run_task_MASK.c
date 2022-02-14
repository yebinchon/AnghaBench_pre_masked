
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_task {int tasklet; scalar_t__ destroyed; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct rxe_task *VAR_0, int VAR_1)
{
 if (VAR_0->destroyed)
  return;

 if (VAR_1)
  FUNC_1(&VAR_0->tasklet);
 else
  FUNC_0((unsigned long)VAR_0);
}
