
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_smi {int recv_tasklet; int watchdog_pretimeouts_to_deliver; scalar_t__ in_shutdown; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ipmi_smi *VAR_0)
{
 if (VAR_0->in_shutdown)
  return;

 FUNC_0(&VAR_0->watchdog_pretimeouts_to_deliver, 1);
 FUNC_1(&VAR_0->recv_tasklet);
}
