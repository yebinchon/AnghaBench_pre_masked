
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parallel_processes {int max_processes; TYPE_2__* children; } ;
struct TYPE_3__ {int pid; } ;
struct TYPE_4__ {scalar_t__ state; TYPE_1__ process; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct parallel_processes *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = VAR_1->max_processes;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  if (VAR_1->children[VAR_3].state == VAR_0)
   FUNC_0(VAR_1->children[VAR_3].process.pid, VAR_2);
}
