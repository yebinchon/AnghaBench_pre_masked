
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_frame_info {int dummy; } ;
struct task_struct {int dummy; } ;


 int FUNC_0 (struct unw_frame_info*,int *) ;
 int FUNC_1 (struct unw_frame_info*,struct task_struct*) ;
 int FUNC_2 (int (*) (struct unw_frame_info*,int *),int *) ;

void
FUNC_3 (struct task_struct *VAR_0, unsigned long *VAR_1)
{
 if (!VAR_0)
  FUNC_2(FUNC_0, ((void*)0));
 else {
  struct unw_frame_info VAR_2;

  FUNC_1(&VAR_2, VAR_0);
  FUNC_0(&VAR_2, ((void*)0));
 }
}
