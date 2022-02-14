
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
typedef void* uint32_t ;
typedef int u8 ;
struct isert_conn {struct iscsi_conn* conn; } ;
struct isert_cmd {void* inv_rkey; void* write_va; void* write_stag; void* read_va; void* read_stag; } ;
struct iscsi_hdr {int opcode; int itt; int ttt; } ;
struct iser_rx_desc {struct iscsi_hdr iscsi_header; } ;
struct iscsi_text {int dummy; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {scalar_t__ SessionType; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct iscsi_cmd* FUNC_2 (struct iscsi_conn*,int ) ;
 int FUNC_3 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*) ;
 int FUNC_4 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*) ;
 struct isert_cmd* FUNC_5 (struct iscsi_cmd*) ;
 struct iscsi_cmd* FUNC_6 (struct iscsi_conn*,struct iser_rx_desc*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct isert_conn*,struct iser_rx_desc*,unsigned char*) ;
 int FUNC_9 (struct isert_conn*,struct isert_cmd*,struct iscsi_cmd*,struct iser_rx_desc*,unsigned char*) ;
 int FUNC_10 (struct isert_conn*,struct isert_cmd*,struct iscsi_cmd*,struct iser_rx_desc*,unsigned char*) ;
 int FUNC_11 (struct isert_conn*,struct isert_cmd*,struct iscsi_cmd*,struct iser_rx_desc*,struct iscsi_text*) ;

__attribute__((used)) static int
FUNC_12(struct isert_conn *VAR_2, struct iser_rx_desc *VAR_3,
  uint32_t VAR_4, uint64_t VAR_5,
  uint32_t VAR_6, uint64_t VAR_7)
{
 struct iscsi_hdr *VAR_8 = &VAR_3->iscsi_header;
 struct iscsi_conn *VAR_9 = VAR_2->conn;
 struct iscsi_cmd *VAR_10;
 struct isert_cmd *VAR_11;
 int VAR_12 = -VAR_0;
 u8 VAR_13 = (VAR_8->opcode & VAR_1);

 if (VAR_9->sess->sess_ops->SessionType &&
    (!(VAR_13 & 128) || !(VAR_13 & 133))) {
  FUNC_7("Got illegal opcode: 0x%02x in SessionType=Discovery,"
     " ignoring\n", VAR_13);
  return 0;
 }

 switch (VAR_13) {
 case 131:
  VAR_10 = FUNC_6(VAR_9, VAR_3);
  if (!VAR_10)
   break;

  VAR_11 = FUNC_5(VAR_10);
  VAR_11->read_stag = VAR_4;
  VAR_11->read_va = VAR_5;
  VAR_11->write_stag = VAR_6;
  VAR_11->write_va = VAR_7;
  VAR_11->inv_rkey = VAR_4 ? VAR_4 : VAR_6;

  VAR_12 = FUNC_10(VAR_2, VAR_11, VAR_10,
     VAR_3, (unsigned char *)VAR_8);
  break;
 case 132:
  VAR_10 = FUNC_6(VAR_9, VAR_3);
  if (!VAR_10)
   break;

  VAR_11 = FUNC_5(VAR_10);
  VAR_12 = FUNC_9(VAR_2, VAR_11, VAR_10,
        VAR_3, (unsigned char *)VAR_8);
  break;
 case 130:
  VAR_12 = FUNC_8(VAR_2, VAR_3,
      (unsigned char *)VAR_8);
  break;
 case 129:
  VAR_10 = FUNC_6(VAR_9, VAR_3);
  if (!VAR_10)
   break;

  VAR_12 = FUNC_4(VAR_9, VAR_10,
      (unsigned char *)VAR_8);
  break;
 case 133:
  VAR_10 = FUNC_6(VAR_9, VAR_3);
  if (!VAR_10)
   break;

  VAR_12 = FUNC_3(VAR_9, VAR_10, (unsigned char *)VAR_8);
  break;
 case 128:
  if (FUNC_0(VAR_8->ttt) != 0xFFFFFFFF)
   VAR_10 = FUNC_2(VAR_9, VAR_8->itt);
  else
   VAR_10 = FUNC_6(VAR_9, VAR_3);

  if (!VAR_10)
   break;

  VAR_11 = FUNC_5(VAR_10);
  VAR_12 = FUNC_11(VAR_2, VAR_11, VAR_10,
         VAR_3, (struct iscsi_text *)VAR_8);
  break;
 default:
  FUNC_7("Got unknown iSCSI OpCode: 0x%02x\n", VAR_13);
  FUNC_1();
  break;
 }

 return VAR_12;
}
