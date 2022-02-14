
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_constraint {int flags; } ;
struct cpu_hw_events {struct event_constraint* constraint_list; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static struct event_constraint *
FUNC_1(struct cpu_hw_events *VAR_1, struct event_constraint *VAR_2, int VAR_3)
{
 FUNC_0(!VAR_1->constraint_list);

 if (!(VAR_2->flags & VAR_0)) {
  struct event_constraint *VAR_4;




  VAR_4 = &VAR_1->constraint_list[VAR_3];





  *VAR_4 = *VAR_2;




  VAR_4->flags |= VAR_0;
  VAR_2 = VAR_4;
 }

 return VAR_2;
}
