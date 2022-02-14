
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct isert_device {TYPE_1__* pd; struct ib_device* ib_device; } ;
struct isert_conn {struct isert_device* device; } ;
struct ib_send_wr {int dummy; } ;
struct TYPE_5__ {int num_sge; int iscsi_header; struct ib_sge* tx_sg; struct ib_send_wr send_wr; } ;
struct isert_cmd {TYPE_2__ tx_desc; int pdu_buf_dma; void* pdu_buf_len; } ;
struct iscsi_reject {int dlength; } ;
struct iscsi_conn {struct isert_conn* context; } ;
struct iscsi_cmd {scalar_t__ buf_ptr; } ;
struct ib_sge {int lkey; void* length; int addr; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (struct ib_device*,void*,void*,int ) ;
 scalar_t__ FUNC_2 (struct ib_device*,int ) ;
 int FUNC_3 (struct iscsi_cmd*,struct iscsi_conn*,struct iscsi_reject*) ;
 struct isert_cmd* FUNC_4 (struct iscsi_cmd*) ;
 int FUNC_5 (struct isert_conn*,struct isert_cmd*,TYPE_2__*) ;
 int FUNC_6 (char*,struct isert_conn*) ;
 int FUNC_7 (struct isert_conn*,struct isert_cmd*,struct ib_send_wr*) ;
 int FUNC_8 (struct isert_conn*,TYPE_2__*) ;
 int FUNC_9 (struct isert_conn*,struct isert_cmd*) ;

__attribute__((used)) static int
FUNC_10(struct iscsi_cmd *VAR_3, struct iscsi_conn *VAR_4)
{
 struct isert_cmd *VAR_5 = FUNC_4(VAR_3);
 struct isert_conn *VAR_6 = VAR_4->context;
 struct ib_send_wr *VAR_7 = &VAR_5->tx_desc.send_wr;
 struct isert_device *VAR_8 = VAR_6->device;
 struct ib_device *VAR_9 = VAR_8->ib_device;
 struct ib_sge *VAR_10 = &VAR_5->tx_desc.tx_sg[1];
 struct iscsi_reject *VAR_11 =
  (struct iscsi_reject *)&VAR_5->tx_desc.iscsi_header;

 FUNC_5(VAR_6, VAR_5, &VAR_5->tx_desc);
 FUNC_3(VAR_3, VAR_4, VAR_11);
 FUNC_8(VAR_6, &VAR_5->tx_desc);

 FUNC_0(VAR_11->dlength, VAR_2);
 VAR_5->pdu_buf_dma = FUNC_1(VAR_9,
   (void *)VAR_3->buf_ptr, VAR_2,
   VAR_0);
 if (FUNC_2(VAR_9, VAR_5->pdu_buf_dma))
  return -VAR_1;
 VAR_5->pdu_buf_len = VAR_2;
 VAR_10->addr = VAR_5->pdu_buf_dma;
 VAR_10->length = VAR_2;
 VAR_10->lkey = VAR_8->pd->local_dma_lkey;
 VAR_5->tx_desc.num_sge = 2;

 FUNC_7(VAR_6, VAR_5, VAR_7);

 FUNC_6("conn %p Posting Reject\n", VAR_6);

 return FUNC_9(VAR_6, VAR_5);
}
