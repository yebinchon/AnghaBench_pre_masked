
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ib_sge {int addr; int length; int lkey; } ;
struct ib_recv_wr {int num_sge; TYPE_2__* wr_cqe; struct ib_sge* sg_list; int * next; } ;
struct ib_mad_queue {scalar_t__ count; scalar_t__ max_active; int lock; int list; } ;
struct ib_mad_qp_info {TYPE_5__* port_priv; int qp; struct ib_mad_queue recv_queue; } ;
struct TYPE_10__ {int done; } ;
struct TYPE_11__ {int list; TYPE_2__ cqe; struct ib_mad_queue* mad_queue; } ;
struct TYPE_12__ {int mapping; TYPE_3__ mad_list; } ;
struct ib_mad_private {TYPE_4__ header; int grh; } ;
struct TYPE_14__ {int dev; } ;
struct TYPE_13__ {TYPE_6__* device; TYPE_1__* pd; } ;
struct TYPE_9__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_mad_private* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_6__*,int *,int ,int ) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_6__*,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,struct ib_recv_wr*,int *) ;
 int FUNC_6 (struct ib_mad_private*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ib_mad_private*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct ib_mad_qp_info *VAR_4,
        struct ib_mad_private *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7, VAR_8;
 struct ib_mad_private *VAR_9;
 struct ib_sge VAR_10;
 struct ib_recv_wr VAR_11;
 struct ib_mad_queue *VAR_12 = &VAR_4->recv_queue;


 VAR_10.lkey = VAR_4->port_priv->pd->local_dma_lkey;


 VAR_11.next = ((void*)0);
 VAR_11.sg_list = &VAR_10;
 VAR_11.num_sge = 1;

 do {

  if (VAR_5) {
   VAR_9 = VAR_5;
   VAR_5 = ((void*)0);
  } else {
   VAR_9 = FUNC_0(FUNC_10(VAR_4->port_priv),
           VAR_2);
   if (!VAR_9) {
    VAR_8 = -VAR_1;
    break;
   }
  }
  VAR_10.length = FUNC_9(VAR_9);
  VAR_10.addr = FUNC_2(VAR_4->port_priv->device,
       &VAR_9->grh,
       FUNC_9(VAR_9),
       VAR_0);
  if (FUNC_13(FUNC_3(VAR_4->port_priv->device,
        VAR_10.addr))) {
   VAR_8 = -VAR_1;
   break;
  }
  VAR_9->header.mapping = VAR_10.addr;
  VAR_9->header.mad_list.mad_queue = VAR_12;
  VAR_9->header.mad_list.cqe.done = VAR_3;
  VAR_11.wr_cqe = &VAR_9->header.mad_list.cqe;


  FUNC_11(&VAR_12->lock, VAR_6);
  VAR_7 = (++VAR_12->count < VAR_12->max_active);
  FUNC_7(&VAR_9->header.mad_list.list, &VAR_12->list);
  FUNC_12(&VAR_12->lock, VAR_6);
  VAR_8 = FUNC_5(VAR_4->qp, &VAR_11, ((void*)0));
  if (VAR_8) {
   FUNC_11(&VAR_12->lock, VAR_6);
   FUNC_8(&VAR_9->header.mad_list.list);
   VAR_12->count--;
   FUNC_12(&VAR_12->lock, VAR_6);
   FUNC_4(VAR_4->port_priv->device,
         VAR_9->header.mapping,
         FUNC_9(VAR_9),
         VAR_0);
   FUNC_6(VAR_9);
   FUNC_1(&VAR_4->port_priv->device->dev,
    "ib_post_recv failed: %d\n", VAR_8);
   break;
  }
 } while (VAR_7);

 return VAR_8;
}
