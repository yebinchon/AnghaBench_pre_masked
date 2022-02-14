
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct task_struct {int dummy; } ;
struct switch_stack {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct task_struct*,unsigned long,unsigned long*,int,int) ;
 long FUNC_1 (struct task_struct*,struct switch_stack*,unsigned long,unsigned long,unsigned long*) ;

long
FUNC_2 (struct task_struct *VAR_3, struct switch_stack *VAR_4,
      unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7, VAR_8;
 long VAR_9;


 for (VAR_7 = VAR_5; VAR_7 < VAR_6; VAR_7 += 8) {
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_6, VAR_7, &VAR_8);
  if (VAR_9 < 0)
   return VAR_9;
  if (FUNC_0(VAR_3, VAR_7, &VAR_8, sizeof(VAR_8),
    VAR_1 | VAR_2)
      != sizeof(VAR_8))
   return -VAR_0;
 }
 return 0;
}
