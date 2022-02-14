
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_proto_ops {scalar_t__ (* get_host_intf ) (void*) ;int (* set_bt_context ) (void*,struct rsi_hci_adapter*) ;} ;
struct rsi_hci_adapter {struct hci_dev* hdev; struct rsi_proto_ops* proto_ops; void* priv; } ;
struct hci_dev {int send; int flush; int close; int open; int dev_type; int bus; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct hci_dev* FUNC_1 () ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,struct rsi_hci_adapter*) ;
 int FUNC_5 (struct rsi_hci_adapter*) ;
 struct rsi_hci_adapter* FUNC_6 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (void*,struct rsi_hci_adapter*) ;
 scalar_t__ FUNC_8 (void*) ;

__attribute__((used)) static int FUNC_9(void *VAR_11, struct rsi_proto_ops *VAR_12)
{
 struct rsi_hci_adapter *VAR_13 = ((void*)0);
 struct hci_dev *VAR_14;
 int VAR_15 = 0;

 VAR_13 = FUNC_6(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->priv = VAR_11;
 VAR_12->set_bt_context(VAR_11, VAR_13);
 VAR_13->proto_ops = VAR_12;

 VAR_14 = FUNC_1();
 if (!VAR_14) {
  FUNC_0("Failed to alloc HCI device");
  goto err;
 }

 VAR_13->hdev = VAR_14;

 if (VAR_12->get_host_intf(VAR_11) == VAR_6)
  VAR_14->bus = VAR_4;
 else
  VAR_14->bus = VAR_5;

 FUNC_4(VAR_14, VAR_13);
 VAR_14->dev_type = VAR_3;
 VAR_14->open = VAR_9;
 VAR_14->close = VAR_7;
 VAR_14->flush = VAR_8;
 VAR_14->send = VAR_10;

 VAR_15 = FUNC_3(VAR_14);
 if (VAR_15 < 0) {
  FUNC_0("HCI registration failed with errcode %d", VAR_15);
  FUNC_2(VAR_14);
  goto err;
 }

 return 0;
err:
 VAR_13->hdev = ((void*)0);
 FUNC_5(VAR_13);
 return -VAR_0;
}
