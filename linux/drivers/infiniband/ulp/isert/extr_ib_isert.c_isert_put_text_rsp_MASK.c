
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct isert_device {TYPE_1__* pd; struct ib_device* ib_device; } ;
struct isert_conn {struct isert_device* device; } ;
struct ib_send_wr {int dummy; } ;
struct TYPE_5__ {int num_sge; struct ib_sge* tx_sg; int iscsi_header; struct ib_send_wr send_wr; } ;
struct isert_cmd {int pdu_buf_len; TYPE_2__ tx_desc; int pdu_buf_dma; } ;
struct iscsi_text_rsp {int dummy; } ;
struct iscsi_conn {struct isert_conn* context; } ;
struct iscsi_cmd {void* buf_ptr; } ;
struct ib_sge {int length; int lkey; int addr; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_device*,void*,int,int ) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;
 int FUNC_2 (struct iscsi_cmd*,struct iscsi_conn*,struct iscsi_text_rsp*,int ) ;
 struct isert_cmd* FUNC_3 (struct iscsi_cmd*) ;
 int FUNC_4 (struct isert_conn*,struct isert_cmd*,TYPE_2__*) ;
 int FUNC_5 (char*,struct isert_conn*) ;
 int FUNC_6 (struct isert_conn*,struct isert_cmd*,struct ib_send_wr*) ;
 int FUNC_7 (struct isert_conn*,TYPE_2__*) ;
 int FUNC_8 (struct isert_conn*,struct isert_cmd*) ;

__attribute__((used)) static int
FUNC_9(struct iscsi_cmd *VAR_3, struct iscsi_conn *VAR_4)
{
 struct isert_cmd *VAR_5 = FUNC_3(VAR_3);
 struct isert_conn *VAR_6 = VAR_4->context;
 struct ib_send_wr *VAR_7 = &VAR_5->tx_desc.send_wr;
 struct iscsi_text_rsp *VAR_8 =
  (struct iscsi_text_rsp *)&VAR_5->tx_desc.iscsi_header;
 u32 VAR_9;
 int VAR_10;

 FUNC_4(VAR_6, VAR_5, &VAR_5->tx_desc);
 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_8, VAR_2);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = VAR_10;
 FUNC_7(VAR_6, &VAR_5->tx_desc);

 if (VAR_9) {
  struct isert_device *VAR_11 = VAR_6->device;
  struct ib_device *VAR_12 = VAR_11->ib_device;
  struct ib_sge *VAR_13 = &VAR_5->tx_desc.tx_sg[1];
  void *VAR_14 = VAR_3->buf_ptr;

  VAR_5->pdu_buf_dma = FUNC_0(VAR_12,
    VAR_14, VAR_9, VAR_0);
  if (FUNC_1(VAR_12, VAR_5->pdu_buf_dma))
   return -VAR_1;

  VAR_5->pdu_buf_len = VAR_9;
  VAR_13->addr = VAR_5->pdu_buf_dma;
  VAR_13->length = VAR_9;
  VAR_13->lkey = VAR_11->pd->local_dma_lkey;
  VAR_5->tx_desc.num_sge = 2;
 }
 FUNC_6(VAR_6, VAR_5, VAR_7);

 FUNC_5("conn %p Text Response\n", VAR_6);

 return FUNC_8(VAR_6, VAR_5);
}
