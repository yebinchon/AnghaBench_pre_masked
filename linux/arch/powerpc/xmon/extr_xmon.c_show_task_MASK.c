
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ksp; } ;
struct task_struct {char state; int exit_state; int comm; int parent; int pid; TYPE_1__ thread; } ;
struct TYPE_4__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int FUNC_0 (char*,struct task_struct*,int ,int ,int ,char,int ,int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_6)
{
 char VAR_7;






 VAR_7 = (VAR_6->state == 0) ? 'R' :
  (VAR_6->state < 0) ? 'U' :
  (VAR_6->state & VAR_5) ? 'D' :
  (VAR_6->state & VAR_3) ? 'T' :
  (VAR_6->state & VAR_4) ? 'C' :
  (VAR_6->exit_state & VAR_1) ? 'Z' :
  (VAR_6->exit_state & VAR_0) ? 'E' :
  (VAR_6->state & VAR_2) ? 'S' : '?';

 FUNC_0("%px %016lx %6d %6d %c %2d %s\n", VAR_6,
  VAR_6->thread.ksp,
  VAR_6->pid, FUNC_1(VAR_6->parent)->pid,
  VAR_7, FUNC_2(VAR_6),
  VAR_6->comm);
}
