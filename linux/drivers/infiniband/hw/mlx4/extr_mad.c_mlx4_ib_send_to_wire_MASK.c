
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef void* u32 ;
typedef size_t u16 ;
struct rdma_ah_attr {int dummy; } ;
struct mlx4_mad_snd_buf {int payload; } ;
struct TYPE_9__ {size_t*** virt2phys_pkey; } ;
struct TYPE_8__ {struct mlx4_ib_demux_pv_ctx** sqps; } ;
struct mlx4_ib_dev {int ib_dev; TYPE_2__ pkeys; TYPE_1__ sriov; } ;
struct mlx4_ib_demux_pv_qp {int tx_ix_head; int tx_ix_tail; TYPE_5__* tx_ring; int tx_lock; struct ib_qp* qp; } ;
struct mlx4_ib_demux_pv_ctx {scalar_t__ state; TYPE_4__* pd; struct mlx4_ib_demux_pv_qp* qp; } ;
struct TYPE_14__ {int wr_id; int num_sge; int send_flags; int opcode; struct ib_sge* sg_list; int * next; } ;
struct ib_ud_wr {int port_num; size_t pkey_index; TYPE_7__ wr; void* remote_qpn; void* remote_qkey; struct ib_ah* ah; } ;
struct ib_sge {int length; int lkey; int addr; } ;
struct ib_send_wr {int dummy; } ;
struct ib_qp {int dummy; } ;
struct ib_mad {int dummy; } ;
struct ib_ah {TYPE_4__* pd; int device; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_13__ {int sgid_index; } ;
struct TYPE_10__ {int map; scalar_t__ addr; } ;
struct TYPE_12__ {struct ib_ah* ah; TYPE_3__ buf; } ;
struct TYPE_11__ {int local_dma_lkey; int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (struct ib_qp*,TYPE_7__*,struct ib_send_wr const**) ;
 int FUNC_4 (struct ib_ah*) ;
 int FUNC_5 (int *,struct ib_mad*,int) ;
 int FUNC_6 (struct ib_ah*,struct rdma_ah_attr*,int ,int*,size_t) ;
 TYPE_6__* FUNC_7 (struct rdma_ah_attr*) ;
 struct ib_ah* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct mlx4_ib_dev *VAR_9, int VAR_10, u8 VAR_11,
    enum ib_qp_type VAR_12, u16 VAR_13,
    u32 VAR_14, u32 VAR_15, struct rdma_ah_attr *VAR_16,
    u8 *VAR_17, u16 VAR_18, struct ib_mad *VAR_19)
{
 struct ib_sge VAR_20;
 struct ib_ud_wr VAR_21;
 const struct ib_send_wr *VAR_22;
 struct mlx4_ib_demux_pv_ctx *VAR_23;
 struct mlx4_ib_demux_pv_qp *VAR_24;
 struct mlx4_mad_snd_buf *VAR_25;
 struct ib_ah *VAR_26;
 struct ib_qp *VAR_27 = ((void*)0);
 unsigned VAR_28 = 0;
 u16 VAR_29;
 int VAR_30;
 int VAR_31;

 VAR_23 = VAR_9->sriov.sqps[VAR_11-1];


 if (!VAR_23 || VAR_23->state != VAR_0)
  return -VAR_2;

 if (VAR_12 == VAR_4) {
  VAR_30 = 0;
  VAR_24 = &VAR_23->qp[0];
  VAR_29 = VAR_9->pkeys.virt2phys_pkey[VAR_10][VAR_11 - 1][0];
 } else {
  VAR_30 = 1;
  VAR_24 = &VAR_23->qp[1];
  VAR_29 = VAR_9->pkeys.virt2phys_pkey[VAR_10][VAR_11 - 1][VAR_13];
 }

 VAR_27 = VAR_24->qp;

 VAR_26 = FUNC_8(VAR_23->pd->device, VAR_8);
 if (!VAR_26)
  return -VAR_3;

 VAR_26->device = VAR_23->pd->device;
 VAR_26->pd = VAR_23->pd;


 VAR_31 = FUNC_6(VAR_26, VAR_16,
          FUNC_7(VAR_16)->sgid_index,
          VAR_17, VAR_18);
 if (VAR_31)
  goto out;

 FUNC_9(&VAR_24->tx_lock);
 if (VAR_24->tx_ix_head - VAR_24->tx_ix_tail >=
     (VAR_7 - 1))
  VAR_31 = -VAR_2;
 else
  VAR_28 = (++VAR_24->tx_ix_head) & (VAR_7 - 1);
 FUNC_10(&VAR_24->tx_lock);
 if (VAR_31)
  goto out;

 VAR_25 = (struct mlx4_mad_snd_buf *) (VAR_24->tx_ring[VAR_28].buf.addr);
 FUNC_4(VAR_24->tx_ring[VAR_28].ah);
 VAR_24->tx_ring[VAR_28].ah = VAR_26;
 FUNC_1(&VAR_9->ib_dev,
       VAR_24->tx_ring[VAR_28].buf.map,
       sizeof (struct mlx4_mad_snd_buf),
       VAR_1);

 FUNC_5(&VAR_25->payload, VAR_19, sizeof *VAR_19);

 FUNC_2(&VAR_9->ib_dev,
          VAR_24->tx_ring[VAR_28].buf.map,
          sizeof (struct mlx4_mad_snd_buf),
          VAR_1);

 VAR_20.addr = VAR_24->tx_ring[VAR_28].buf.map;
 VAR_20.length = sizeof (struct mlx4_mad_snd_buf);
 VAR_20.lkey = VAR_23->pd->local_dma_lkey;

 VAR_21.ah = VAR_26;
 VAR_21.port_num = VAR_11;
 VAR_21.pkey_index = VAR_29;
 VAR_21.remote_qkey = VAR_15;
 VAR_21.remote_qpn = VAR_14;
 VAR_21.wr.next = ((void*)0);
 VAR_21.wr.wr_id = ((u64) VAR_28) | FUNC_0(VAR_30);
 VAR_21.wr.sg_list = &VAR_20;
 VAR_21.wr.num_sge = 1;
 VAR_21.wr.opcode = VAR_6;
 VAR_21.wr.send_flags = VAR_5;

 VAR_31 = FUNC_3(VAR_27, &VAR_21.wr, &VAR_22);
 if (!VAR_31)
  return 0;

 FUNC_9(&VAR_24->tx_lock);
 VAR_24->tx_ix_tail++;
 FUNC_10(&VAR_24->tx_lock);
 VAR_24->tx_ring[VAR_28].ah = ((void*)0);
out:
 FUNC_4(VAR_26);
 return VAR_31;
}
