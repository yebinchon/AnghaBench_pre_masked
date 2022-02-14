
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_frame_info {scalar_t__ ip; } ;
struct task_struct {int dummy; } ;
struct stack_trace {scalar_t__ nr_entries; scalar_t__ max_entries; scalar_t__* entries; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct unwind_frame_info*,struct task_struct*,int *) ;
 scalar_t__ FUNC_2 (struct unwind_frame_info*) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_0, struct stack_trace *VAR_1)
{
 struct unwind_frame_info VAR_2;

 FUNC_1(&VAR_2, VAR_0, ((void*)0));


 VAR_1->nr_entries = 0;
 while (VAR_1->nr_entries < VAR_1->max_entries) {
  if (FUNC_2(&VAR_2) < 0 || VAR_2.ip == 0)
   break;

  if (FUNC_0(VAR_2.ip))
   VAR_1->entries[VAR_1->nr_entries++] = VAR_2.ip;
 }
}
