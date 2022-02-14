
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_frame_info {unsigned long ip; } ;
struct task_struct {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct unwind_frame_info*,struct task_struct*) ;
 scalar_t__ FUNC_2 (struct unwind_frame_info*) ;

unsigned long
FUNC_3(struct task_struct *VAR_3)
{
 struct unwind_frame_info VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;

 if (!VAR_3 || VAR_3 == VAR_2 || VAR_3->state == VAR_1)
  return 0;





 FUNC_1(&VAR_4, VAR_3);
 do {
  if (FUNC_2(&VAR_4) < 0)
   return 0;
  VAR_5 = VAR_4.ip;
  if (!FUNC_0(VAR_5))
   return VAR_5;
 } while (VAR_6++ < VAR_0);
 return 0;
}
