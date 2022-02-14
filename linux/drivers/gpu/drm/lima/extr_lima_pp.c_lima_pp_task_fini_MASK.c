
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_sched_pipe {int num_processor; scalar_t__* processor; scalar_t__ bcast_processor; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct lima_sched_pipe *VAR_0)
{
 if (VAR_0->bcast_processor)
  FUNC_0(VAR_0->bcast_processor);
 else {
  int VAR_1;

  for (VAR_1 = 0; VAR_1 < VAR_0->num_processor; VAR_1++)
   FUNC_0(VAR_0->processor[VAR_1]);
 }
}
