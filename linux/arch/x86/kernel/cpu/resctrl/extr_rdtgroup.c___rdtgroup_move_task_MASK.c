
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {scalar_t__ closid; int rmid; } ;
struct TYPE_6__ {int func; } ;
struct task_move_callback {TYPE_3__ work; struct rdtgroup* rdtgrp; } ;
struct TYPE_5__ {int rmid; TYPE_1__* parent; } ;
struct rdtgroup {scalar_t__ type; scalar_t__ closid; TYPE_2__ mon; int waitcount; } ;
struct TYPE_4__ {scalar_t__ closid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct task_move_callback*) ;
 struct task_move_callback* FUNC_3 (int,int ) ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct task_struct*,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_6(struct task_struct *VAR_6,
    struct rdtgroup *VAR_7)
{
 struct task_move_callback *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;
 VAR_8->work.func = VAR_5;
 VAR_8->rdtgrp = VAR_7;





 FUNC_1(&VAR_7->waitcount);
 VAR_9 = FUNC_5(VAR_6, &VAR_8->work, 1);
 if (VAR_9) {





  FUNC_0(&VAR_7->waitcount);
  FUNC_2(VAR_8);
  FUNC_4("Task exited\n");
 } else {





  if (VAR_7->type == VAR_3) {
   VAR_6->closid = VAR_7->closid;
   VAR_6->rmid = VAR_7->mon.rmid;
  } else if (VAR_7->type == VAR_4) {
   if (VAR_7->mon.parent->closid == VAR_6->closid) {
    VAR_6->rmid = VAR_7->mon.rmid;
   } else {
    FUNC_4("Can't move task to different control group\n");
    VAR_9 = -VAR_0;
   }
  }
 }
 return VAR_9;
}
