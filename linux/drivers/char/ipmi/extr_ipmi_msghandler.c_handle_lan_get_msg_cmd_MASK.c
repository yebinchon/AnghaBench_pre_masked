
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_user {int refcount; } ;
struct ipmi_smi_msg {int rsp_size; int* rsp; } ;
struct ipmi_smi {int dummy; } ;
struct TYPE_2__ {int netfn; int cmd; int data_len; int data; } ;
struct ipmi_recv_msg {int msgid; int msg_data; TYPE_1__ msg; int recv_type; struct ipmi_user* user; int addr; } ;
struct ipmi_lan_addr {int session_handle; int remote_SWID; int local_SWID; int lun; int channel; int privilege; int addr_type; } ;
struct cmd_rcvr {struct ipmi_user* user; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ipmi_smi*,struct ipmi_recv_msg*) ;
 struct cmd_rcvr* FUNC_1 (struct ipmi_smi*,unsigned char,unsigned char,unsigned char) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ipmi_recv_msg* FUNC_2 () ;
 int FUNC_3 (struct ipmi_smi*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct ipmi_smi *VAR_6,
      struct ipmi_smi_msg *VAR_7)
{
 struct cmd_rcvr *VAR_8;
 int VAR_9 = 0;
 unsigned char VAR_10;
 unsigned char VAR_11;
 unsigned char VAR_12;
 struct ipmi_user *VAR_13 = ((void*)0);
 struct ipmi_lan_addr *VAR_14;
 struct ipmi_recv_msg *VAR_15;

 if (VAR_7->rsp_size < 12) {

  FUNC_3(VAR_6, VAR_4);
  return 0;
 }

 if (VAR_7->rsp[2] != 0) {

  return 0;
 }

 VAR_10 = VAR_7->rsp[6] >> 2;
 VAR_11 = VAR_7->rsp[10];
 VAR_12 = VAR_7->rsp[3] & 0xf;

 FUNC_7();
 VAR_8 = FUNC_1(VAR_6, VAR_10, VAR_11, VAR_12);
 if (VAR_8) {
  VAR_13 = VAR_8->user;
  FUNC_4(&VAR_13->refcount);
 } else
  VAR_13 = ((void*)0);
 FUNC_8();

 if (VAR_13 == ((void*)0)) {

  FUNC_3(VAR_6, VAR_5);





  VAR_9 = 0;
 } else {
  VAR_15 = FUNC_2();
  if (!VAR_15) {




   VAR_9 = 1;
   FUNC_5(&VAR_13->refcount, VAR_2);
  } else {

   VAR_14 = (struct ipmi_lan_addr *) &VAR_15->addr;
   VAR_14->addr_type = VAR_1;
   VAR_14->session_handle = VAR_7->rsp[4];
   VAR_14->remote_SWID = VAR_7->rsp[8];
   VAR_14->local_SWID = VAR_7->rsp[5];
   VAR_14->lun = VAR_7->rsp[9] & 3;
   VAR_14->channel = VAR_7->rsp[3] & 0xf;
   VAR_14->privilege = VAR_7->rsp[3] >> 4;





   VAR_15->user = VAR_13;
   VAR_15->recv_type = VAR_0;
   VAR_15->msgid = VAR_7->rsp[9] >> 2;
   VAR_15->msg.netfn = VAR_7->rsp[6] >> 2;
   VAR_15->msg.cmd = VAR_7->rsp[10];
   VAR_15->msg.data = VAR_15->msg_data;





   VAR_15->msg.data_len = VAR_7->rsp_size - 12;
   FUNC_6(VAR_15->msg_data, &VAR_7->rsp[11],
          VAR_7->rsp_size - 12);
   if (FUNC_0(VAR_6, VAR_15))
    FUNC_3(VAR_6, VAR_5);
   else
    FUNC_3(VAR_6, VAR_3);
  }
 }

 return VAR_9;
}
