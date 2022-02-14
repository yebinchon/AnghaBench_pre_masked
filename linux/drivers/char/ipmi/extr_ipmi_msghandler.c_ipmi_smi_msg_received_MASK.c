
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_smi_msg {int link; } ;
struct ipmi_smi {int run_to_completion; int recv_tasklet; int xmit_msgs_lock; struct ipmi_smi_msg* curr_msg; int waiting_rcv_msgs_lock; int waiting_rcv_msgs; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ipmi_smi *VAR_0,
      struct ipmi_smi_msg *VAR_1)
{
 unsigned long VAR_2 = 0;
 int VAR_3 = VAR_0->run_to_completion;





 if (!VAR_3)
  FUNC_2(&VAR_0->waiting_rcv_msgs_lock, VAR_2);
 FUNC_0(&VAR_1->link, &VAR_0->waiting_rcv_msgs);
 if (!VAR_3)
  FUNC_3(&VAR_0->waiting_rcv_msgs_lock,
           VAR_2);

 if (!VAR_3)
  FUNC_2(&VAR_0->xmit_msgs_lock, VAR_2);




 if (VAR_1 == VAR_0->curr_msg)
  VAR_0->curr_msg = ((void*)0);
 if (!VAR_3)
  FUNC_3(&VAR_0->xmit_msgs_lock, VAR_2);

 if (VAR_3)
  FUNC_1((unsigned long) VAR_0);
 else
  FUNC_4(&VAR_0->recv_tasklet);
}
