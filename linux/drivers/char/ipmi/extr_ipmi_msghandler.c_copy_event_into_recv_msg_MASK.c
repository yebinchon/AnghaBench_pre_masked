
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_system_interface_addr {int lun; int channel; int addr_type; } ;
struct ipmi_smi_msg {int* rsp; scalar_t__ rsp_size; } ;
struct TYPE_2__ {int netfn; int cmd; scalar_t__ data_len; int data; } ;
struct ipmi_recv_msg {TYPE_1__ msg; int msg_data; int recv_type; int addr; scalar_t__ msgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ipmi_recv_msg *VAR_3,
         struct ipmi_smi_msg *VAR_4)
{
 struct ipmi_system_interface_addr *VAR_5;

 VAR_3->msgid = 0;
 VAR_5 = (struct ipmi_system_interface_addr *) &VAR_3->addr;
 VAR_5->addr_type = VAR_2;
 VAR_5->channel = VAR_1;
 VAR_5->lun = VAR_4->rsp[0] & 3;
 VAR_3->recv_type = VAR_0;
 VAR_3->msg.netfn = VAR_4->rsp[0] >> 2;
 VAR_3->msg.cmd = VAR_4->rsp[1];
 FUNC_0(VAR_3->msg_data, &VAR_4->rsp[3], VAR_4->rsp_size - 3);
 VAR_3->msg.data = VAR_3->msg_data;
 VAR_3->msg.data_len = VAR_4->rsp_size - 3;
}
