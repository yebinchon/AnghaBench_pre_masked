
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_smi_msg {int rsp_size; int* rsp; } ;
struct ipmi_smi {int dummy; } ;
struct TYPE_2__ {int netfn; int data_len; int data; } ;
struct ipmi_recv_msg {int recv_type; TYPE_1__ msg; int msg_data; } ;
struct ipmi_ipmb_addr {int slave_addr; int channel; int lun; int addr_type; } ;
struct ipmi_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ipmi_smi*,struct ipmi_recv_msg*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ipmi_smi*,int,int,int,int,struct ipmi_addr*,struct ipmi_recv_msg**) ;
 int VAR_3 ;
 int FUNC_2 (struct ipmi_smi*,int ) ;
 int FUNC_3 (int ,int*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct ipmi_smi *VAR_5,
       struct ipmi_smi_msg *VAR_6)
{
 struct ipmi_ipmb_addr VAR_7;
 struct ipmi_recv_msg *VAR_8;





 if (VAR_6->rsp_size < 11) {

  FUNC_2(VAR_5, VAR_3);
  return 0;
 }

 if (VAR_6->rsp[2] != 0) {

  return 0;
 }

 VAR_7.addr_type = VAR_0;
 VAR_7.slave_addr = VAR_6->rsp[6];
 VAR_7.channel = VAR_6->rsp[3] & 0x0f;
 VAR_7.lun = VAR_6->rsp[7] & 3;





 if (FUNC_1(VAR_5,
     VAR_6->rsp[7] >> 2,
     VAR_6->rsp[3] & 0x0f,
     VAR_6->rsp[8],
     (VAR_6->rsp[4] >> 2) & (~1),
     (struct ipmi_addr *) &VAR_7,
     &VAR_8)) {




  FUNC_2(VAR_5, VAR_4);
  return 0;
 }

 FUNC_3(VAR_8->msg_data, &VAR_6->rsp[9], VAR_6->rsp_size - 9);





 VAR_8->msg.netfn = VAR_6->rsp[4] >> 2;
 VAR_8->msg.data = VAR_8->msg_data;
 VAR_8->msg.data_len = VAR_6->rsp_size - 10;
 VAR_8->recv_type = VAR_1;
 if (FUNC_0(VAR_5, VAR_8))
  FUNC_2(VAR_5, VAR_4);
 else
  FUNC_2(VAR_5, VAR_2);

 return 0;
}
