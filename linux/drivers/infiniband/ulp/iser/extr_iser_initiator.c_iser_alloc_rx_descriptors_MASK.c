
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct ib_sge {int lkey; int length; int addr; } ;
struct TYPE_4__ {int done; } ;
struct iser_rx_desc {int dma_addr; struct ib_sge rx_sg; TYPE_1__ cqe; } ;
struct iser_device {TYPE_3__* reg_ops; int ib_device; TYPE_2__* pd; } ;
struct ib_conn {struct iser_device* device; } ;
struct iser_conn {int qp_max_recv_dtos; int qp_max_recv_dtos_mask; int min_posted_rx; int num_rx_descs; struct iser_rx_desc* rx_descs; scalar_t__ rx_desc_head; int pages_per_mr; struct ib_conn ib_conn; } ;
struct iscsi_session {int cmds_max; int scsi_cmds_max; } ;
struct TYPE_6__ {int (* free_reg_res ) (struct ib_conn*) ;scalar_t__ (* alloc_reg_res ) (struct ib_conn*,int ,int ) ;} ;
struct TYPE_5__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct iser_conn*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct iser_conn*) ;
 int VAR_4 ;
 int FUNC_6 (struct iser_rx_desc*) ;
 struct iser_rx_desc* FUNC_7 (int,int,int ) ;
 scalar_t__ FUNC_8 (struct ib_conn*,int ,int ) ;
 int FUNC_9 (struct ib_conn*) ;

int FUNC_10(struct iser_conn *VAR_5,
         struct iscsi_session *VAR_6)
{
 int VAR_7, VAR_8;
 u64 VAR_9;
 struct iser_rx_desc *VAR_10;
 struct ib_sge *VAR_11;
 struct ib_conn *VAR_12 = &VAR_5->ib_conn;
 struct iser_device *VAR_13 = VAR_12->device;

 VAR_5->qp_max_recv_dtos = VAR_6->cmds_max;
 VAR_5->qp_max_recv_dtos_mask = VAR_6->cmds_max - 1;
 VAR_5->min_posted_rx = VAR_5->qp_max_recv_dtos >> 2;

 if (VAR_13->reg_ops->alloc_reg_res(VAR_12, VAR_6->scsi_cmds_max,
        VAR_5->pages_per_mr))
  goto create_rdma_reg_res_failed;

 if (FUNC_3(VAR_5))
  goto alloc_login_buf_fail;

 VAR_5->num_rx_descs = VAR_6->cmds_max;
 VAR_5->rx_descs = FUNC_7(VAR_5->num_rx_descs,
         sizeof(struct iser_rx_desc),
         VAR_2);
 if (!VAR_5->rx_descs)
  goto rx_desc_alloc_fail;

 VAR_10 = VAR_5->rx_descs;

 for (VAR_7 = 0; VAR_7 < VAR_5->qp_max_recv_dtos; VAR_7++, VAR_10++) {
  VAR_9 = FUNC_0(VAR_13->ib_device, (void *)VAR_10,
     VAR_3, VAR_0);
  if (FUNC_1(VAR_13->ib_device, VAR_9))
   goto rx_desc_dma_map_failed;

  VAR_10->dma_addr = VAR_9;
  VAR_10->cqe.done = VAR_4;
  VAR_11 = &VAR_10->rx_sg;
  VAR_11->addr = VAR_10->dma_addr;
  VAR_11->length = VAR_3;
  VAR_11->lkey = VAR_13->pd->local_dma_lkey;
 }

 VAR_5->rx_desc_head = 0;
 return 0;

rx_desc_dma_map_failed:
 VAR_10 = VAR_5->rx_descs;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++, VAR_10++)
  FUNC_2(VAR_13->ib_device, VAR_10->dma_addr,
        VAR_3, VAR_0);
 FUNC_6(VAR_5->rx_descs);
 VAR_5->rx_descs = ((void*)0);
rx_desc_alloc_fail:
 FUNC_5(VAR_5);
alloc_login_buf_fail:
 VAR_13->reg_ops->free_reg_res(VAR_12);
create_rdma_reg_res_failed:
 FUNC_4("failed allocating rx descriptors / data buffers\n");
 return -VAR_1;
}
