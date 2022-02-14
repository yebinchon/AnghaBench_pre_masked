
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int security; int port_num; int device; int smp_allowed; TYPE_1__* qp; } ;
struct ib_mad_agent_private {TYPE_2__ agent; } ;
struct TYPE_3__ {scalar_t__ qp_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct ib_mad_agent_private *VAR_2, u16 VAR_3)
{
 if (!FUNC_2(VAR_2->agent.device, VAR_2->agent.port_num))
  return 0;

 if (VAR_2->agent.qp->qp_type == VAR_1) {
  if (!FUNC_0(VAR_2->agent.smp_allowed))
   return -VAR_0;
  return 0;
 }

 return FUNC_1(VAR_2->agent.device,
           VAR_2->agent.port_num,
           VAR_3,
           VAR_2->agent.security);
}
