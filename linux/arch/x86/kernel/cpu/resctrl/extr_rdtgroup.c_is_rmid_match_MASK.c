
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {scalar_t__ rmid; } ;
struct TYPE_2__ {scalar_t__ rmid; } ;
struct rdtgroup {scalar_t__ type; TYPE_1__ mon; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct task_struct *VAR_2, struct rdtgroup *VAR_3)
{
 return (VAR_1 &&
  (VAR_3->type == VAR_0) && (VAR_2->rmid == VAR_3->mon.rmid));
}
