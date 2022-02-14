
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct se_cmd {int sam_task_attr; int tag; } ;
struct srpt_send_ioctx {int * sense_data; struct se_cmd cmd; } ;
struct TYPE_2__ {int offset; struct srp_cmd* buf; } ;
struct srpt_recv_ioctx {TYPE_1__ ioctx; } ;
struct srpt_rdma_ch {int sess; int imm_data_offset; } ;
struct srp_cmd {int task_attr; int tag; int lun; int cdb; } ;
struct scatterlist {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct srpt_recv_ioctx*,struct srpt_send_ioctx*,struct srp_cmd*,int*,struct scatterlist**,unsigned int*,int *,int ) ;
 int FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*,int ,int ,int *,int ,int ,int ,int,int ,struct scatterlist*,unsigned int,int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_7(struct srpt_rdma_ch *VAR_6,
       struct srpt_recv_ioctx *VAR_7,
       struct srpt_send_ioctx *VAR_8)
{
 struct se_cmd *VAR_9;
 struct srp_cmd *VAR_10;
 struct scatterlist *VAR_11 = ((void*)0);
 unsigned VAR_12 = 0;
 u64 VAR_13;
 enum dma_data_direction VAR_14;
 int VAR_15;

 FUNC_0(!VAR_8);

 VAR_10 = VAR_7->ioctx.buf + VAR_7->ioctx.offset;
 VAR_9 = &VAR_8->cmd;
 VAR_9->tag = VAR_10->tag;

 switch (VAR_10->task_attr) {
 case 128:
  VAR_9->sam_task_attr = VAR_5;
  break;
 case 129:
 default:
  VAR_9->sam_task_attr = VAR_4;
  break;
 case 130:
  VAR_9->sam_task_attr = VAR_3;
  break;
 case 131:
  VAR_9->sam_task_attr = VAR_2;
  break;
 }

 VAR_15 = FUNC_4(VAR_7, VAR_8, VAR_10, &VAR_14,
          &VAR_11, &VAR_12, &VAR_13, VAR_6->imm_data_offset);
 if (VAR_15) {
  if (VAR_15 != -VAR_0) {
   FUNC_2("0x%llx: parsing SRP descriptor table failed.\n",
          VAR_10->tag);
  }
  goto busy;
 }

 VAR_15 = FUNC_6(VAR_9, VAR_6->sess, VAR_10->cdb,
          &VAR_8->sense_data[0],
          FUNC_3(&VAR_10->lun), VAR_13,
          VAR_5, VAR_14, VAR_1,
          VAR_11, VAR_12, ((void*)0), 0, ((void*)0), 0);
 if (VAR_15 != 0) {
  FUNC_1("target_submit_cmd() returned %d for tag %#llx\n", VAR_15,
    VAR_10->tag);
  goto busy;
 }
 return;

busy:
 FUNC_5(VAR_9);
}
