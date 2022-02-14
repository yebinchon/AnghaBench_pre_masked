
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct socket {int sk_sleep; } ;
struct sdp_sock {int tx_sa_lock; TYPE_1__* tx_sa; struct socket* socket; } ;
struct TYPE_2__ {int bytes_acked; scalar_t__ mseq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct socket*,char*,...) ;
 int FUNC_2 (struct socket*,int *,char*,struct sdp_sock*,TYPE_1__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct sdp_sock *VAR_0, u32 VAR_1,
  u32 VAR_2)
{
 struct socket *VAR_3 = VAR_0->socket;
 unsigned long VAR_4;

 FUNC_2(VAR_3, ((void*)0), "RdmaRdCompl ssk=%p tx_sa=%p", VAR_0, VAR_0->tx_sa);
 FUNC_1(VAR_3, "RdmaRdCompl ssk=%p tx_sa=%p\n", VAR_0, VAR_0->tx_sa);

 FUNC_3(&VAR_0->tx_sa_lock, VAR_4);

 FUNC_0(!VAR_0);

 if (!VAR_0->tx_sa) {
  FUNC_1(VAR_3, "Got RdmaRdCompl for aborted SrcAvail\n");
  goto out;
 }

 if (VAR_0->tx_sa->mseq > VAR_1) {
  FUNC_1(VAR_3, "RdmaRdCompl arrived for old SrcAvail. "
   "SendSM mseq_ack: 0x%x, SrcAvail mseq: 0x%x\n",
   VAR_1, VAR_0->tx_sa->mseq);
  goto out;
 }

 VAR_0->tx_sa->bytes_acked += VAR_2;

 FUNC_5(VAR_3->sk_sleep);
 FUNC_1(VAR_3, "woke up sleepers\n");

out:
 FUNC_4(&VAR_0->tx_sa_lock, VAR_4);
 return;
}
