
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ace_device {int fsm_continue_flag; int lock; } ;


 int FUNC_0 (struct ace_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct ace_device *VAR_1 = (void *)VAR_0;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->lock, VAR_2);


 VAR_1->fsm_continue_flag = 1;
 while (VAR_1->fsm_continue_flag)
  FUNC_0(VAR_1);

 FUNC_2(&VAR_1->lock, VAR_2);
}
