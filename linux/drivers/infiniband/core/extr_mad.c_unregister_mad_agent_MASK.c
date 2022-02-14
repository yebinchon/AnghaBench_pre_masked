
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_mad_port_private {int wq; int reg_lock; } ;
struct TYPE_4__ {int hi_tid; } ;
struct ib_mad_agent_private {int reg_req; TYPE_2__ agent; int comp; int timed_work; TYPE_1__* qp_info; } ;
struct TYPE_3__ {struct ib_mad_port_private* port_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_mad_agent_private*) ;
 int FUNC_2 (struct ib_mad_agent_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ib_mad_agent_private*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ib_mad_agent_private*,int ) ;
 int VAR_1 ;
 int FUNC_8 (struct ib_mad_agent_private*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ib_mad_agent_private*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static void FUNC_14(struct ib_mad_agent_private *VAR_2)
{
 struct ib_mad_port_private *VAR_3;


 FUNC_11(VAR_2);





 FUNC_1(VAR_2);
 VAR_3 = VAR_2->qp_info->port_priv;
 FUNC_0(&VAR_2->timed_work);

 FUNC_9(&VAR_3->reg_lock);
 FUNC_8(VAR_2);
 FUNC_10(&VAR_3->reg_lock);
 FUNC_13(&VAR_0, VAR_2->agent.hi_tid);

 FUNC_3(VAR_3->wq);
 FUNC_4(VAR_2);

 FUNC_2(VAR_2);
 FUNC_12(&VAR_2->comp);

 FUNC_5(&VAR_2->agent);

 FUNC_6(VAR_2->reg_req);
 FUNC_7(VAR_2, VAR_1);
}
