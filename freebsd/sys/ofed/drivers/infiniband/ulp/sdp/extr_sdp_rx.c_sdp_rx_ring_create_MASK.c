
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * buffer; int tail; int head; } ;
struct sdp_sock {TYPE_2__ rx_ring; int socket; int rx_comp_work; } ;
struct ib_device {int dummy; } ;
struct ib_cq_init_attr {int cqe; int flags; int comp_vector; } ;
struct ib_cq {int dummy; } ;
struct TYPE_4__ {struct ib_cq* cq; } ;
struct TYPE_6__ {TYPE_1__ rx_ring; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct ib_cq*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ib_cq*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 struct ib_cq* FUNC_5 (struct ib_device*,int ,int ,struct sdp_sock*,struct ib_cq_init_attr*) ;
 int * FUNC_6 (int,int ,int ) ;
 int FUNC_7 (struct sdp_sock*) ;
 int FUNC_8 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int) ;

int
FUNC_11(struct sdp_sock *VAR_6, struct ib_device *VAR_7)
{
 struct ib_cq_init_attr VAR_8 = {
  .cqe = VAR_2,
  .comp_vector = 0,
  .flags = 0,
 };
 struct ib_cq *VAR_9;
 int VAR_10 = 0;

 FUNC_8(VAR_6->socket, "rx ring created");
 FUNC_0(&VAR_6->rx_comp_work, VAR_3);
 FUNC_3(&VAR_6->rx_ring.head, 1);
 FUNC_3(&VAR_6->rx_ring.tail, 1);

 VAR_6->rx_ring.buffer = FUNC_6(sizeof(*VAR_6->rx_ring.buffer) * VAR_2,
     VAR_0, VAR_1);

 VAR_9 = FUNC_5(VAR_7, VAR_5, VAR_4,
     VAR_6, &VAR_8);
 if (FUNC_1(VAR_9)) {
  VAR_10 = FUNC_2(VAR_9);
  FUNC_10(VAR_6->socket, "Unable to allocate RX CQ: %d.\n", VAR_10);
  goto err_cq;
 }

 FUNC_9(VAR_6->socket)->rx_ring.cq = VAR_9;
 FUNC_7(VAR_6);

 return 0;

err_cq:
 FUNC_4(VAR_6->rx_ring.buffer, VAR_0);
 VAR_6->rx_ring.buffer = ((void*)0);
 return VAR_10;
}
