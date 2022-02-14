
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_srcavail_state {int abort_flags; int umem; int fmr; int bytes_acked; } ;
struct socket {int dummy; } ;
struct sdp_sock {int tx_sa_lock; int * tx_sa; int srcavail_cancel_work; scalar_t__ qp_active; } ;
struct iovec {int iov_len; int iov_base; } ;
typedef enum tx_sa_flag { ____Placeholder_tx_sa_flag } tx_sa_flag ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct socket*,int ,int ,int *,int *) ;
 int FUNC_3 (struct socket*,char*) ;
 int FUNC_4 (struct socket*,char*) ;
 int FUNC_5 (struct socket*,int *,int *) ;
 int FUNC_6 (struct socket*,struct tx_srcavail_state*) ;
 int FUNC_7 (struct socket*) ;
 int FUNC_8 (struct socket*) ;
 struct sdp_sock* FUNC_9 (struct socket*) ;
 int FUNC_10 (struct socket*,struct iovec*,int ) ;
 int FUNC_11 (struct sdp_sock*,long*,int) ;
 int FUNC_12 (struct socket*,char*,...) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (struct sdp_sock*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (struct socket*,long*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_18(struct socket *VAR_4, struct tx_srcavail_state *VAR_5,
  struct iovec *VAR_6, long *VAR_7)
{
 struct sdp_sock *VAR_8 = FUNC_9(VAR_4);
 int VAR_9 = 0;
 unsigned long VAR_10;

 VAR_9 = FUNC_2(VAR_4, VAR_6->iov_base, VAR_6->iov_len,
   &VAR_5->fmr, &VAR_5->umem);
 if (VAR_9) {
  FUNC_12(VAR_4, "Error allocating fmr: %d\n", VAR_9);
  goto err_alloc_fmr;
 }

 if (FUNC_15(VAR_8) == 0) {
  VAR_9 = FUNC_17(VAR_4, VAR_7);
  if (VAR_9) {
   FUNC_12(VAR_4, "Couldn't get send buffer\n");
   goto err_no_tx_slots;
  }
 }

 VAR_9 = FUNC_6(VAR_4, VAR_5);
 if (VAR_9) {
  FUNC_3(VAR_4, "Error posting SrcAvail\n");
  goto err_abort_send;
 }

 VAR_9 = FUNC_11(VAR_8, VAR_7, 0);
 if (FUNC_16(VAR_9)) {
  enum tx_sa_flag VAR_11 = VAR_5->abort_flags;

  if (VAR_11 & VAR_2) {
   FUNC_4(VAR_4, "Got SendSM. use SEND verb.\n");
  } else if (VAR_11 & VAR_1) {
   FUNC_4(VAR_4, "SrcAvail error completion\n");
   FUNC_8(VAR_4);
   FUNC_0(VAR_3);
  } else if (VAR_8->qp_active) {
   FUNC_7(VAR_4);



   *VAR_7 = 2 * VAR_0;
   FUNC_4(VAR_4, "Waiting for SendSM\n");
   FUNC_11(VAR_8, VAR_7, 1);
   FUNC_4(VAR_4, "finished waiting\n");

   FUNC_1(&VAR_8->srcavail_cancel_work);
  } else {
   FUNC_4(VAR_4, "QP was destroyed while waiting\n");
  }
 } else {
  FUNC_4(VAR_4, "got RdmaRdCompl\n");
 }

 FUNC_13(&VAR_8->tx_sa_lock, VAR_10);
 VAR_8->tx_sa = ((void*)0);
 FUNC_14(&VAR_8->tx_sa_lock, VAR_10);

err_abort_send:
 FUNC_10(VAR_4, VAR_6, VAR_5->bytes_acked);

err_no_tx_slots:
 FUNC_5(VAR_4, &VAR_5->fmr, &VAR_5->umem);

err_alloc_fmr:
 return VAR_9;
}
