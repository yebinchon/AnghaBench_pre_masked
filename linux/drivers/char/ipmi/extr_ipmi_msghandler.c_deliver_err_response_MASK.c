
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_smi {int dummy; } ;
struct TYPE_2__ {int netfn; int data_len; int* data; } ;
struct ipmi_recv_msg {int* msg_data; TYPE_1__ msg; int recv_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipmi_smi*,struct ipmi_recv_msg*) ;

__attribute__((used)) static void FUNC_1(struct ipmi_smi *VAR_1,
     struct ipmi_recv_msg *VAR_2, int VAR_3)
{
 VAR_2->recv_type = VAR_0;
 VAR_2->msg_data[0] = VAR_3;
 VAR_2->msg.netfn |= 1;
 VAR_2->msg.data_len = 1;
 VAR_2->msg.data = VAR_2->msg_data;
 FUNC_0(VAR_1, VAR_2);
}
