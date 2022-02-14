
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_table {unsigned long timeout; scalar_t__ retries_left; struct ipmi_recv_msg* recv_msg; int seqid; scalar_t__ broadcast; scalar_t__ inuse; } ;
struct list_head {int dummy; } ;
struct ipmi_smi_msg {int dummy; } ;
struct ipmi_smi {int seq_lock; scalar_t__ handlers; scalar_t__ in_shutdown; } ;
struct ipmi_recv_msg {int addr; int link; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ipmi_smi_msg*) ;
 int FUNC_1 (struct ipmi_smi*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct list_head*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct ipmi_smi_msg* FUNC_4 (struct ipmi_smi*,struct ipmi_recv_msg*,int,int ) ;
 int FUNC_5 (struct ipmi_smi*,int ) ;
 int FUNC_6 (struct ipmi_smi*,scalar_t__,struct ipmi_smi_msg*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_9(struct ipmi_smi *VAR_9, struct seq_table *VAR_10,
         struct list_head *VAR_11,
         unsigned long VAR_12,
         int VAR_13, unsigned long *VAR_14,
         bool *VAR_15)
{
 struct ipmi_recv_msg *VAR_16;

 if (VAR_9->in_shutdown)
  return;

 if (!VAR_10->inuse)
  return;

 if (VAR_12 < VAR_10->timeout) {
  VAR_10->timeout -= VAR_12;
  *VAR_15 = 1;
  return;
 }

 if (VAR_10->retries_left == 0) {

  VAR_10->inuse = 0;
  FUNC_5(VAR_9, VAR_0);
  VAR_16 = VAR_10->recv_msg;
  FUNC_3(&VAR_16->link, VAR_11);
  if (VAR_10->broadcast)
   FUNC_1(VAR_9, VAR_6);
  else if (FUNC_2(&VAR_10->recv_msg->addr))
   FUNC_1(VAR_9, VAR_8);
  else
   FUNC_1(VAR_9, VAR_7);
 } else {
  struct ipmi_smi_msg *VAR_17;


  *VAR_15 = 1;





  VAR_10->timeout = VAR_1;
  VAR_10->retries_left--;
  VAR_17 = FUNC_4(VAR_9, VAR_10->recv_msg, VAR_13,
         VAR_10->seqid);
  if (!VAR_17) {
   if (FUNC_2(&VAR_10->recv_msg->addr))
    FUNC_1(VAR_9,
           VAR_3);
   else
    FUNC_1(VAR_9,
           VAR_2);
   return;
  }

  FUNC_8(&VAR_9->seq_lock, *VAR_14);
  if (VAR_9->handlers) {
   if (FUNC_2(&VAR_10->recv_msg->addr))
    FUNC_1(VAR_9,
           VAR_5);
   else
    FUNC_1(VAR_9,
           VAR_4);

   FUNC_6(VAR_9, VAR_9->handlers, VAR_17, 0);
  } else
   FUNC_0(VAR_17);

  FUNC_7(&VAR_9->seq_lock, *VAR_14);
 }
}
