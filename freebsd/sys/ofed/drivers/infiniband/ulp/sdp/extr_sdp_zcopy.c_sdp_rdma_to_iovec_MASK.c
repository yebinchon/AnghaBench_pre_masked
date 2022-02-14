
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_4__ {int * rdma_inflight; } ;
struct sdp_sock {scalar_t__ srcavail_cancel_mseq; scalar_t__ qp_active; TYPE_1__ tx_ring; int rcv_nxt; int wq; int socket; } ;
struct rx_srcavail_state {int len; scalar_t__ mseq; int used; int flags; TYPE_2__* umem; int fmr; } ;
struct mbuf {int dummy; } ;
struct iovec {int iov_base; int iov_len; } ;
struct TYPE_5__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rx_srcavail_state* FUNC_0 (struct mbuf*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct socket*,int ,int,int *,TYPE_2__**) ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*,char*,...) ;
 int FUNC_6 (struct socket*,int *,TYPE_2__**) ;
 int FUNC_7 (struct socket*,struct rx_srcavail_state*) ;
 int FUNC_8 (struct socket*,struct mbuf*,char*,int) ;
 int FUNC_9 (int ,int ) ;
 struct sdp_sock* FUNC_10 (struct socket*) ;
 int FUNC_11 (struct socket*,struct iovec*,int) ;
 int FUNC_12 (struct sdp_sock*) ;
 int FUNC_13 (struct socket*,char*,...) ;
 int FUNC_14 (struct socket*,int ) ;
 int FUNC_15 (struct socket*,int ) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct socket *VAR_4, struct iovec *VAR_5, struct mbuf *VAR_6,
  unsigned long *VAR_7)
{
 struct sdp_sock *VAR_8 = FUNC_10(VAR_4);
 struct rx_srcavail_state *VAR_9 = FUNC_0(VAR_6);
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = *VAR_7;
 int VAR_13;

 FUNC_5(VAR_8->socket, "preparing RDMA read."
  " len: 0x%x. buffer len: 0x%lx\n", VAR_12, VAR_5->iov_len);

 FUNC_14(VAR_4, VAR_3);

 if (VAR_12 > VAR_9->len) {
  FUNC_13(VAR_4, "len:0x%x > rx_sa->len: 0x%x\n", VAR_12, VAR_9->len);
  FUNC_1(1);
  VAR_12 = VAR_9->len;
 }

 VAR_11 = FUNC_3(VAR_4, VAR_5->iov_base, VAR_12, &VAR_9->fmr, &VAR_9->umem);
 if (VAR_11) {
  FUNC_13(VAR_4, "Error allocating fmr: %d\n", VAR_11);
  goto err_alloc_fmr;
 }

 VAR_11 = FUNC_7(VAR_4, VAR_9);
 if (FUNC_16(VAR_11)) {
  FUNC_13(VAR_4, "ib_post_send failed with status %d.\n", VAR_11);
  FUNC_9(VAR_8->socket, -VAR_0);
  FUNC_17(&VAR_8->wq);
  goto err_post_send;
 }

 FUNC_8(VAR_4, VAR_6, "Finished posting(rc=%d), now to wait", VAR_11);

 VAR_10 = VAR_8->srcavail_cancel_mseq > VAR_9->mseq;

 FUNC_4(VAR_4);

 FUNC_12(VAR_8);

 FUNC_8(VAR_4, VAR_6, "Finished waiting(rc=%d)", VAR_11);
 if (!VAR_8->qp_active) {
  FUNC_5(VAR_4, "QP destroyed during RDMA read\n");
  VAR_11 = -VAR_1;
  goto err_post_send;
 }

 VAR_13 = VAR_9->umem->length;

 FUNC_11(VAR_4, VAR_5, VAR_13);
 VAR_9->used += VAR_13;
 FUNC_2(VAR_13, &VAR_8->rcv_nxt);
 *VAR_7 = VAR_13;

 VAR_8->tx_ring.rdma_inflight = ((void*)0);

err_post_send:
 FUNC_6(VAR_4, &VAR_9->fmr, &VAR_9->umem);

err_alloc_fmr:
 if (VAR_11 && VAR_8->qp_active) {
  FUNC_13(VAR_4, "Couldn't do RDMA - post sendsm\n");
  VAR_9->flags |= VAR_2;
 }

 FUNC_15(VAR_4, VAR_3);

 return VAR_11;
}
