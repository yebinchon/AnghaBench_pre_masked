
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {int * sp; int graph_idx; int task; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ,int *,unsigned long,int *) ;
 scalar_t__ FUNC_2 (struct unwind_state*) ;

unsigned long FUNC_3(struct unwind_state *VAR_0)
{
 unsigned long VAR_1;

 if (FUNC_2(VAR_0))
  return 0;

 VAR_1 = FUNC_0(*VAR_0->sp);

 return FUNC_1(VAR_0->task, &VAR_0->graph_idx,
         VAR_1, VAR_0->sp);
}
