
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_len; int * data; } ;
struct ipmi_recv_msg {scalar_t__ msgid; TYPE_1__ msg; int recv_type; } ;
struct aem_ipmi_data {scalar_t__ tx_msgid; unsigned short rx_msg_len; int read_complete; int rx_msg_data; int rx_result; int rx_recv_type; int bmc_device; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct ipmi_recv_msg*) ;
 int FUNC_3 (int ,int *,unsigned short) ;

__attribute__((used)) static void FUNC_4(struct ipmi_recv_msg *VAR_1, void *VAR_2)
{
 unsigned short VAR_3;
 struct aem_ipmi_data *VAR_4 = VAR_2;

 if (VAR_1->msgid != VAR_4->tx_msgid) {
  FUNC_1(VAR_4->bmc_device,
   "Mismatch between received msgid (%02x) and transmitted msgid (%02x)!\n",
   (int)VAR_1->msgid,
   (int)VAR_4->tx_msgid);
  FUNC_2(VAR_1);
  return;
 }

 VAR_4->rx_recv_type = VAR_1->recv_type;
 if (VAR_1->msg.data_len > 0)
  VAR_4->rx_result = VAR_1->msg.data[0];
 else
  VAR_4->rx_result = VAR_0;

 if (VAR_1->msg.data_len > 1) {
  VAR_3 = VAR_1->msg.data_len - 1;
  if (VAR_4->rx_msg_len < VAR_3)
   VAR_3 = VAR_4->rx_msg_len;
  VAR_4->rx_msg_len = VAR_3;
  FUNC_3(VAR_4->rx_msg_data, VAR_1->msg.data + 1, VAR_4->rx_msg_len);
 } else
  VAR_4->rx_msg_len = 0;

 FUNC_2(VAR_1);
 FUNC_0(&VAR_4->read_complete);
}
