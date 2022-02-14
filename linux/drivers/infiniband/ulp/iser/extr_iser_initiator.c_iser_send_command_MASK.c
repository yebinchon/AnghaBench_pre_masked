
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_5__ {int done; } ;
struct iser_tx_desc {TYPE_1__ cqe; int type; } ;
struct iser_data_buf {int data_len; scalar_t__ size; int sg; } ;
struct TYPE_8__ {int sig_count; } ;
struct iser_conn {TYPE_4__ ib_conn; } ;
struct TYPE_7__ {scalar_t__ data_length; } ;
struct iscsi_task {int itt; TYPE_3__ unsol_r2t; scalar_t__ imm_count; struct scsi_cmnd* sc; scalar_t__ hdr; struct iscsi_iser_task* dd_data; } ;
struct iscsi_scsi_req {int flags; int data_length; } ;
struct iscsi_iser_task {int status; struct iser_data_buf* prot; struct iser_data_buf* data; struct iser_tx_desc desc; } ;
struct iscsi_conn {struct iser_conn* dd_data; } ;
struct TYPE_6__ {int sector_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (struct iser_conn*,struct iser_tx_desc*) ;
 int FUNC_2 (char*,struct iscsi_conn*,int ,int) ;
 int FUNC_3 (TYPE_4__*,struct iser_tx_desc*,int ) ;
 int FUNC_4 (struct iscsi_task*) ;
 int FUNC_5 (struct iscsi_task*,scalar_t__,scalar_t__,unsigned long) ;
 int FUNC_6 (int ) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_9 (struct scsi_cmnd*) ;
 int FUNC_10 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*) ;

int FUNC_13(struct iscsi_conn *VAR_7,
        struct iscsi_task *VAR_8)
{
 struct iser_conn *VAR_9 = VAR_7->dd_data;
 struct iscsi_iser_task *VAR_10 = VAR_8->dd_data;
 unsigned long VAR_11;
 int VAR_12;
 struct iser_data_buf *VAR_13, *VAR_14;
 struct iscsi_scsi_req *VAR_15 = (struct iscsi_scsi_req *)VAR_8->hdr;
 struct scsi_cmnd *VAR_16 = VAR_8->sc;
 struct iser_tx_desc *VAR_17 = &VAR_10->desc;
 u8 VAR_18 = ++VAR_9->ib_conn.sig_count;

 VAR_11 = FUNC_7(VAR_15->data_length);


 VAR_17->type = VAR_2;
 VAR_17->cqe.done = VAR_6;
 FUNC_1(VAR_9, VAR_17);

 if (VAR_15->flags & VAR_0) {
  VAR_13 = &VAR_10->data[VAR_3];
  VAR_14 = &VAR_10->prot[VAR_3];
 } else {
  VAR_13 = &VAR_10->data[VAR_4];
  VAR_14 = &VAR_10->prot[VAR_4];
 }

 if (FUNC_11(VAR_16)) {
  VAR_13->sg = FUNC_12(VAR_16);
  VAR_13->size = FUNC_11(VAR_16);
 }
 VAR_13->data_len = FUNC_8(VAR_16);

 if (FUNC_9(VAR_16)) {
  VAR_14->sg = FUNC_10(VAR_16);
  VAR_14->size = FUNC_9(VAR_16);
  VAR_14->data_len = (VAR_13->data_len >>
         FUNC_0(VAR_16->device->sector_size)) * 8;
 }

 if (VAR_15->flags & VAR_0) {
  VAR_12 = FUNC_4(VAR_8);
  if (VAR_12)
   goto send_command_error;
 }
 if (VAR_15->flags & VAR_1) {
  VAR_12 = FUNC_5(VAR_8,
          VAR_8->imm_count,
                 VAR_8->imm_count +
          VAR_8->unsol_r2t.data_length,
          VAR_11);
  if (VAR_12)
   goto send_command_error;
 }

 VAR_10->status = VAR_5;

 VAR_12 = FUNC_3(&VAR_9->ib_conn, VAR_17,
        FUNC_6(VAR_18));
 if (!VAR_12)
  return 0;

send_command_error:
 FUNC_2("conn %p failed task->itt %d err %d\n",VAR_7, VAR_8->itt, VAR_12);
 return VAR_12;
}
