
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_mad_send_wr_private {int refcount; TYPE_1__* mad_agent_priv; int agent_list; scalar_t__ timeout; } ;
struct TYPE_2__ {int done_list; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct ib_mad_send_wr_private *VAR_0)
{
 VAR_0->timeout = 0;
 if (VAR_0->refcount == 1)
  FUNC_0(&VAR_0->agent_list,
         &VAR_0->mad_agent_priv->done_list);
}
