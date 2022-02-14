
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;



 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct task_struct*,unsigned long,unsigned long) ;
 int FUNC_2 (struct task_struct*,long,unsigned long,unsigned long) ;

long FUNC_3(struct task_struct *VAR_0, long VAR_1,
   unsigned long VAR_2, unsigned long VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_1) {



 case 128:
  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
  if (VAR_4 == 0 && VAR_1 == 128)
   FUNC_0(VAR_2, VAR_2 + 4);
  break;
 default:
  VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 }

 return VAR_4;
}
