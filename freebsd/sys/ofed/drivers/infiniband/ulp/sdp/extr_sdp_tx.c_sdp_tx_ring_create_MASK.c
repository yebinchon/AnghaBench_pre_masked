
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * buffer; scalar_t__ poll_cnt; struct ib_cq* cq; int tail; int head; int timer; } ;
struct sdp_sock {TYPE_1__ tx_ring; int socket; int lock; int nagle_timer; } ;
struct ib_device {int dummy; } ;
struct ib_cq_init_attr {int cqe; int flags; int comp_vector; } ;
struct ib_cq {int dummy; } ;


 scalar_t__ FUNC_0 (struct ib_cq*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ib_cq*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 struct ib_cq* FUNC_5 (struct ib_device*,int ,int ,struct sdp_sock*,struct ib_cq_init_attr*) ;
 int * FUNC_6 (int,int ,int ) ;
 int FUNC_7 (struct sdp_sock*) ;
 int FUNC_8 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,char*,int) ;

int
FUNC_10(struct sdp_sock *VAR_5, struct ib_device *VAR_6)
{
 struct ib_cq_init_attr VAR_7 = {
  .cqe = VAR_2,
  .comp_vector = 0,
  .flags = 0,
 };
 struct ib_cq *VAR_8;
 int VAR_9 = 0;

 FUNC_8(VAR_5->socket, "tx ring create\n");
 FUNC_3(&VAR_5->tx_ring.timer, &VAR_5->lock, 0);
 FUNC_3(&VAR_5->nagle_timer, &VAR_5->lock, 0);
 FUNC_2(&VAR_5->tx_ring.head, 1);
 FUNC_2(&VAR_5->tx_ring.tail, 1);

 VAR_5->tx_ring.buffer = FUNC_6(sizeof(*VAR_5->tx_ring.buffer) * VAR_2,
     VAR_0, VAR_1);

 VAR_8 = FUNC_5(VAR_6, VAR_4, VAR_3,
     VAR_5, &VAR_7);
 if (FUNC_0(VAR_8)) {
  VAR_9 = FUNC_1(VAR_8);
  FUNC_9(VAR_5->socket, "Unable to allocate TX CQ: %d.\n", VAR_9);
  goto err_cq;
 }
 VAR_5->tx_ring.cq = VAR_8;
 VAR_5->tx_ring.poll_cnt = 0;
 FUNC_7(VAR_5);

 return 0;

err_cq:
 FUNC_4(VAR_5->tx_ring.buffer, VAR_0);
 VAR_5->tx_ring.buffer = ((void*)0);
 return VAR_9;
}
