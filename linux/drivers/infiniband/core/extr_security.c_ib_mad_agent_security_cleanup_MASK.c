
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_mad_agent {int security; int mad_agent_sec_list; TYPE_1__* qp; int port_num; int device; } ;
struct TYPE_2__ {scalar_t__ qp_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ib_mad_agent *VAR_2)
{
 if (!FUNC_1(VAR_2->device, VAR_2->port_num))
  return;

 if (VAR_2->qp->qp_type == VAR_0) {
  FUNC_3(&VAR_1);
  FUNC_0(&VAR_2->mad_agent_sec_list);
  FUNC_4(&VAR_1);
 }

 FUNC_2(VAR_2->security);
}
