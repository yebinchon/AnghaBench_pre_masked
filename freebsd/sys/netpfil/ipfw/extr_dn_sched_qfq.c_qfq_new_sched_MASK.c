
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {struct qfq_group* groups; } ;
struct qfq_group {int index; int slot_shift; } ;
struct dn_sch_inst {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct dn_sch_inst *VAR_3)
{
 struct qfq_sched *VAR_4 = (struct qfq_sched *)(VAR_3 + 1);
 struct qfq_group *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 <= VAR_1; VAR_6++) {
  VAR_5 = &VAR_4->groups[VAR_6];
  VAR_5->index = VAR_6;
  VAR_5->slot_shift = VAR_2 + VAR_0 -
     (VAR_1 - VAR_6);
 }
 return 0;
}
