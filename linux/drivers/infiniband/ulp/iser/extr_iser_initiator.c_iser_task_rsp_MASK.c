
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_hdr {int itt; int opcode; } ;
struct iser_rx_desc {int dma_addr; int data; struct iscsi_hdr iscsi_header; } ;
struct iser_conn {scalar_t__ min_posted_rx; scalar_t__ qp_max_recv_dtos; int iscsi_conn; } ;
struct ib_wc {scalar_t__ status; int byte_len; int wr_cqe; TYPE_1__* qp; } ;
struct ib_cq {int dummy; } ;
struct ib_conn {int post_recv_buf_count; TYPE_2__* device; } ;
struct TYPE_4__ {int ib_device; } ;
struct TYPE_3__ {struct ib_conn* qp_context; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct iscsi_hdr*,int ,int) ;
 scalar_t__ FUNC_4 (struct iser_conn*,struct ib_wc*,struct iscsi_hdr*) ;
 int FUNC_5 (char*,int ,int ,int) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (struct ib_wc*,char*) ;
 int FUNC_8 (struct iser_conn*,int) ;
 struct iser_rx_desc* FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 struct iser_conn* FUNC_11 (struct ib_conn*) ;
 scalar_t__ FUNC_12 (int) ;

void FUNC_13(struct ib_cq *VAR_5, struct ib_wc *VAR_6)
{
 struct ib_conn *VAR_7 = VAR_6->qp->qp_context;
 struct iser_conn *VAR_8 = FUNC_11(VAR_7);
 struct iser_rx_desc *VAR_9 = FUNC_9(VAR_6->wr_cqe);
 struct iscsi_hdr *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (FUNC_12(VAR_6->status != VAR_1)) {
  FUNC_7(VAR_6, "task_rsp");
  return;
 }

 FUNC_0(VAR_7->device->ib_device,
       VAR_9->dma_addr, VAR_4,
       VAR_0);

 VAR_10 = &VAR_9->iscsi_header;
 VAR_11 = VAR_6->byte_len - VAR_3;

 FUNC_5("op 0x%x itt 0x%x dlen %d\n", VAR_10->opcode,
   VAR_10->itt, VAR_11);

 if (FUNC_4(VAR_8, VAR_6, VAR_10)) {
  FUNC_2(VAR_8->iscsi_conn,
       VAR_2);
  return;
 }

 FUNC_3(VAR_8->iscsi_conn, VAR_10, VAR_9->data, VAR_11);

 FUNC_1(VAR_7->device->ib_device,
          VAR_9->dma_addr, VAR_4,
          VAR_0);





 VAR_7->post_recv_buf_count--;

 VAR_12 = VAR_7->post_recv_buf_count;
 if (VAR_12 + VAR_8->min_posted_rx <= VAR_8->qp_max_recv_dtos) {
  VAR_13 = FUNC_10(VAR_8->qp_max_recv_dtos - VAR_12,
       VAR_8->min_posted_rx);
  VAR_14 = FUNC_8(VAR_8, VAR_13);
  if (VAR_14)
   FUNC_6("posting %d rx bufs err %d\n", VAR_13, VAR_14);
 }
}
