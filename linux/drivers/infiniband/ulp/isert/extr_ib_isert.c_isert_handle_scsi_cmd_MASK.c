
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isert_conn {struct iscsi_conn* conn; } ;
struct isert_cmd {int sg; } ;
struct iser_rx_desc {int * data; } ;
struct iscsi_scsi_req {int cmdsn; } ;
struct iscsi_conn {int dummy; } ;
struct TYPE_2__ {unsigned int data_length; int t_data_nents; int * t_data_sg; int se_cmd_flags; } ;
struct iscsi_cmd {int immediate_data; int first_burst_len; int unsolicited_data; unsigned int write_data_done; TYPE_1__ se_cmd; int istate_lock; int i_state; int cmd_flags; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_scsi_req*) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*,int ) ;
 int FUNC_3 (struct iscsi_cmd*) ;
 int FUNC_4 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (unsigned long,int ) ;
 int FUNC_7 (int *,int,int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_13(struct isert_conn *VAR_4,
        struct isert_cmd *VAR_5, struct iscsi_cmd *VAR_6,
        struct iser_rx_desc *VAR_7, unsigned char *VAR_8)
{
 struct iscsi_conn *VAR_9 = VAR_4->conn;
 struct iscsi_scsi_req *VAR_10 = (struct iscsi_scsi_req *)VAR_8;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 bool VAR_16 = 0;
 unsigned int VAR_17;

 VAR_15 = FUNC_4(VAR_9, VAR_6, VAR_8);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_11 = VAR_6->immediate_data;
 VAR_12 = VAR_6->first_burst_len;
 VAR_13 = VAR_6->unsolicited_data;
 VAR_17 = VAR_6->se_cmd.data_length;

 if (VAR_11 && VAR_12 == VAR_17)
  VAR_6->se_cmd.se_cmd_flags |= VAR_3;
 VAR_15 = FUNC_1(VAR_9, VAR_6, VAR_10);
 if (VAR_15 < 0) {
  return 0;
 } else if (VAR_15 > 0) {
  VAR_16 = 1;
  goto sequence_cmd;
 }

 if (!VAR_11)
  return 0;

 if (VAR_12 != VAR_17) {
  VAR_14 = FUNC_6(1UL, FUNC_0(VAR_12, VAR_2));
  FUNC_7(VAR_6->se_cmd.t_data_sg, VAR_14,
        &VAR_7->data[0], VAR_12);
  FUNC_5("Copy Immediate sg_nents: %u imm_data_len: %d\n",
     VAR_14, VAR_12);
 } else {
  FUNC_8(&VAR_5->sg, 1);
  VAR_6->se_cmd.t_data_sg = &VAR_5->sg;
  VAR_6->se_cmd.t_data_nents = 1;
  FUNC_9(&VAR_5->sg, &VAR_7->data[0], VAR_12);
  FUNC_5("Transfer Immediate imm_data_len: %d\n",
     VAR_12);
 }

 VAR_6->write_data_done += VAR_12;

 if (VAR_6->write_data_done == VAR_6->se_cmd.data_length) {
  FUNC_10(&VAR_6->istate_lock);
  VAR_6->cmd_flags |= VAR_0;
  VAR_6->i_state = VAR_1;
  FUNC_11(&VAR_6->istate_lock);
 }

sequence_cmd:
 VAR_15 = FUNC_2(VAR_9, VAR_6, VAR_8, VAR_10->cmdsn);

 if (!VAR_15 && VAR_16 == 0 && VAR_13)
  FUNC_3(VAR_6);
 else if (VAR_16 && VAR_11)
  FUNC_12(&VAR_6->se_cmd);

 return 0;
}
