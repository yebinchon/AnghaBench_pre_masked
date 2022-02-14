
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipfw_flow_id {int dummy; } ;
struct TYPE_2__ {int flags; int sched_mask; } ;
struct dn_schk {scalar_t__ siht; TYPE_1__ sch; } ;
struct dn_sch_inst {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dn_sch_inst* FUNC_0 (scalar_t__,uintptr_t,int ,struct dn_schk*) ;
 int FUNC_1 (int *,struct ipfw_flow_id*) ;
 scalar_t__ FUNC_2 (int ,int ,struct dn_schk*) ;

struct dn_sch_inst *
FUNC_3(struct dn_schk *VAR_2, struct ipfw_flow_id *VAR_3)
{

 if (VAR_2->sch.flags & VAR_1) {
  struct ipfw_flow_id VAR_4 = *VAR_3;
  FUNC_1(&VAR_2->sch.sched_mask, &VAR_4);
  return FUNC_0(VAR_2->siht, (uintptr_t)&VAR_4,
   VAR_0, VAR_2);
 }
 if (!VAR_2->siht)
  VAR_2->siht = FUNC_2(0, 0, VAR_2);
 return (struct dn_sch_inst *)VAR_2->siht;
}
