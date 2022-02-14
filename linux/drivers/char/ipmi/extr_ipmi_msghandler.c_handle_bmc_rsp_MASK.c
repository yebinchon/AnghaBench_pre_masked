
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_system_interface_addr {int lun; int channel; int addr_type; } ;
struct ipmi_smi_msg {int* rsp; scalar_t__ rsp_size; int msgid; scalar_t__ user_data; } ;
struct ipmi_smi {int si_dev; } ;
struct TYPE_2__ {int netfn; int cmd; scalar_t__ data_len; int data; } ;
struct ipmi_recv_msg {TYPE_1__ msg; int msg_data; int addr; int msgid; int recv_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipmi_smi*,struct ipmi_recv_msg*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ipmi_smi *VAR_3,
     struct ipmi_smi_msg *VAR_4)
{
 struct ipmi_recv_msg *VAR_5;
 struct ipmi_system_interface_addr *VAR_6;

 VAR_5 = (struct ipmi_recv_msg *) VAR_4->user_data;
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_3->si_dev,
    "IPMI message received with no owner. This could be because of a malformed message, or because of a hardware error.  Contact your hardware vendor for assistance.\n");
  return 0;
 }

 VAR_5->recv_type = VAR_1;
 VAR_5->msgid = VAR_4->msgid;
 VAR_6 = ((struct ipmi_system_interface_addr *)
      &VAR_5->addr);
 VAR_6->addr_type = VAR_2;
 VAR_6->channel = VAR_0;
 VAR_6->lun = VAR_4->rsp[0] & 3;
 VAR_5->msg.netfn = VAR_4->rsp[0] >> 2;
 VAR_5->msg.cmd = VAR_4->rsp[1];
 FUNC_2(VAR_5->msg_data, &VAR_4->rsp[2], VAR_4->rsp_size - 2);
 VAR_5->msg.data = VAR_5->msg_data;
 VAR_5->msg.data_len = VAR_4->rsp_size - 2;
 FUNC_0(VAR_3, VAR_5);

 return 0;
}
