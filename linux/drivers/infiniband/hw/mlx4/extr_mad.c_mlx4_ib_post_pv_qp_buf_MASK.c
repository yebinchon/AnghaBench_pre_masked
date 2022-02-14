
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct mlx4_tunnel_mad {int dummy; } ;
struct mlx4_mad_rcv_buf {int dummy; } ;
struct mlx4_ib_demux_pv_qp {TYPE_3__* qp; TYPE_2__* ring; int proxy_qpt; } ;
struct mlx4_ib_demux_pv_ctx {int ib_dev; TYPE_1__* pd; } ;
struct ib_sge {int length; int lkey; int addr; } ;
struct ib_recv_wr {int num_sge; int wr_id; struct ib_sge* sg_list; int * next; } ;
struct TYPE_6__ {scalar_t__ qp_type; } ;
struct TYPE_5__ {int map; } ;
struct TYPE_4__ {int local_dma_lkey; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (TYPE_3__*,struct ib_recv_wr*,struct ib_recv_wr const**) ;

__attribute__((used)) static int FUNC_3(struct mlx4_ib_demux_pv_ctx *VAR_3,
      struct mlx4_ib_demux_pv_qp *VAR_4,
      int VAR_5)
{
 struct ib_sge VAR_6;
 struct ib_recv_wr VAR_7;
 const struct ib_recv_wr *VAR_8;
 int VAR_9;

 VAR_9 = (VAR_4->qp->qp_type == VAR_1) ?
  sizeof (struct mlx4_tunnel_mad) : sizeof (struct mlx4_mad_rcv_buf);

 VAR_6.addr = VAR_4->ring[VAR_5].map;
 VAR_6.length = VAR_9;
 VAR_6.lkey = VAR_3->pd->local_dma_lkey;

 VAR_7.next = ((void*)0);
 VAR_7.sg_list = &VAR_6;
 VAR_7.num_sge = 1;
 VAR_7.wr_id = (u64) VAR_5 | VAR_2 |
  FUNC_0(VAR_4->proxy_qpt);
 FUNC_1(VAR_3->ib_dev, VAR_4->ring[VAR_5].map,
          VAR_9, VAR_0);
 return FUNC_2(VAR_4->qp, &VAR_7, &VAR_8);
}
