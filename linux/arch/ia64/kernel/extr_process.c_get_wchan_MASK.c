
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_frame_info {int dummy; } ;
struct task_struct {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct unw_frame_info*,unsigned long*) ;
 int FUNC_2 (struct unw_frame_info*,struct task_struct*) ;
 scalar_t__ FUNC_3 (struct unw_frame_info*) ;

unsigned long
FUNC_4 (struct task_struct *VAR_2)
{
 struct unw_frame_info VAR_3;
 unsigned long VAR_4;
 int VAR_5 = 0;

 if (!VAR_2 || VAR_2 == VAR_1 || VAR_2->state == VAR_0)
  return 0;
 FUNC_2(&VAR_3, VAR_2);
 do {
  if (VAR_2->state == VAR_0)
   return 0;
  if (FUNC_3(&VAR_3) < 0)
   return 0;
  FUNC_1(&VAR_3, &VAR_4);
  if (!FUNC_0(VAR_4))
   return VAR_4;
 } while (VAR_5++ < 16);
 return 0;
}
