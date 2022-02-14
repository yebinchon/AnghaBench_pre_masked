
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct socket {int sk_sleep; } ;
struct sdp_sock {int tx_sa_lock; int srcavail_cancel_work; TYPE_1__* tx_sa; struct socket* socket; } ;
struct TYPE_2__ {int abort_flags; int mseq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct socket*,char*,...) ;
 int FUNC_2 (struct socket*,int *,char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct sdp_sock *VAR_1, u32 VAR_2)
{
 struct socket *VAR_3 = VAR_1->socket;
 unsigned long VAR_4;

 FUNC_3(&VAR_1->tx_sa_lock, VAR_4);

 if (!VAR_1->tx_sa) {
  FUNC_2(VAR_3, ((void*)0), "SendSM for cancelled/finished SrcAvail");
  goto out;
 }

 if (VAR_1->tx_sa->mseq > VAR_2) {
  FUNC_1(VAR_3, "SendSM arrived for old SrcAvail. "
   "SendSM mseq_ack: 0x%x, SrcAvail mseq: 0x%x\n",
   VAR_2, VAR_1->tx_sa->mseq);
  goto out;
 }

 FUNC_1(VAR_3, "Got SendSM - aborting SrcAvail\n");

 VAR_1->tx_sa->abort_flags |= VAR_0;
 FUNC_0(&VAR_1->srcavail_cancel_work);

 FUNC_5(VAR_3->sk_sleep);
 FUNC_1(VAR_3, "woke up sleepers\n");

out:
 FUNC_4(&VAR_1->tx_sa_lock, VAR_4);
}
