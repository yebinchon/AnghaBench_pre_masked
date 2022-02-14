
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct isert_device {TYPE_2__* pd; struct ib_device* ib_device; } ;
struct isert_conn {struct isert_device* device; } ;
struct ib_send_wr {int dummy; } ;
struct TYPE_7__ {int num_sge; struct ib_sge* tx_sg; int iscsi_header; struct ib_send_wr send_wr; } ;
struct isert_cmd {TYPE_3__ tx_desc; int pdu_buf_dma; void* pdu_buf_len; } ;
struct iscsi_scsi_rsp {int dlength; } ;
struct iscsi_conn {struct isert_conn* context; } ;
struct TYPE_5__ {int se_cmd_flags; int scsi_sense_length; scalar_t__ sense_buffer; } ;
struct iscsi_cmd {scalar_t__ sense_buffer; TYPE_1__ se_cmd; } ;
struct ib_sge {int lkey; void* length; int addr; } ;
struct ib_device {int dummy; } ;
typedef int __be16 ;
struct TYPE_6__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (struct ib_device*,void*,void*,int ) ;
 scalar_t__ FUNC_2 (struct ib_device*,int ) ;
 int FUNC_3 (struct iscsi_cmd*,struct iscsi_conn*,int,struct iscsi_scsi_rsp*) ;
 struct isert_cmd* FUNC_4 (struct iscsi_cmd*) ;
 int FUNC_5 (struct isert_conn*,struct isert_cmd*,TYPE_3__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct isert_conn*,struct isert_cmd*,struct ib_send_wr*) ;
 int FUNC_8 (struct isert_conn*,TYPE_3__*) ;
 int FUNC_9 (struct isert_conn*,struct isert_cmd*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(struct iscsi_conn *VAR_4, struct iscsi_cmd *VAR_5)
{
 struct isert_cmd *VAR_6 = FUNC_4(VAR_5);
 struct isert_conn *VAR_7 = VAR_4->context;
 struct ib_send_wr *VAR_8 = &VAR_6->tx_desc.send_wr;
 struct iscsi_scsi_rsp *VAR_9 = (struct iscsi_scsi_rsp *)
    &VAR_6->tx_desc.iscsi_header;

 FUNC_5(VAR_7, VAR_6, &VAR_6->tx_desc);
 FUNC_3(VAR_5, VAR_4, 1, VAR_9);
 FUNC_8(VAR_7, &VAR_6->tx_desc);



 if (VAR_5->se_cmd.sense_buffer &&
     ((VAR_5->se_cmd.se_cmd_flags & VAR_3) ||
     (VAR_5->se_cmd.se_cmd_flags & VAR_2))) {
  struct isert_device *VAR_10 = VAR_7->device;
  struct ib_device *VAR_11 = VAR_10->ib_device;
  struct ib_sge *VAR_12 = &VAR_6->tx_desc.tx_sg[1];
  u32 VAR_13, VAR_14;

  FUNC_10(VAR_5->se_cmd.scsi_sense_length,
       VAR_5->sense_buffer);
  VAR_5->se_cmd.scsi_sense_length += sizeof(__be16);

  VAR_13 = -(VAR_5->se_cmd.scsi_sense_length) & 3;
  FUNC_0(VAR_9->dlength, (u32)VAR_5->se_cmd.scsi_sense_length);
  VAR_14 = VAR_5->se_cmd.scsi_sense_length + VAR_13;

  VAR_6->pdu_buf_dma = FUNC_1(VAR_11,
    (void *)VAR_5->sense_buffer, VAR_14,
    VAR_0);
  if (FUNC_2(VAR_11, VAR_6->pdu_buf_dma))
   return -VAR_1;

  VAR_6->pdu_buf_len = VAR_14;
  VAR_12->addr = VAR_6->pdu_buf_dma;
  VAR_12->length = VAR_14;
  VAR_12->lkey = VAR_10->pd->local_dma_lkey;
  VAR_6->tx_desc.num_sge = 2;
 }

 FUNC_7(VAR_7, VAR_6, VAR_8);

 FUNC_6("Posting SCSI Response\n");

 return FUNC_9(VAR_7, VAR_6);
}
