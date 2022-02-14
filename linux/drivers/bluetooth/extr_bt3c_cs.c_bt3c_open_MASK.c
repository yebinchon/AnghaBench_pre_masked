
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_dev {int send; int flush; int close; int open; int bus; } ;
struct firmware {int size; int data; } ;
struct bt3c_info {struct hci_dev* hdev; TYPE_1__* p_dev; int * rx_skb; scalar_t__ rx_count; int rx_state; int txq; int lock; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hci_dev*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bt3c_info*,int ,int ) ;
 struct hci_dev* FUNC_3 () ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,struct bt3c_info*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (struct firmware const**,char*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct bt3c_info *VAR_7)
{
 const struct firmware *VAR_8;
 struct hci_dev *VAR_9;
 int VAR_10;

 FUNC_11(&(VAR_7->lock));

 FUNC_10(&(VAR_7->txq));

 VAR_7->rx_state = VAR_2;
 VAR_7->rx_count = 0;
 VAR_7->rx_skb = ((void*)0);


 VAR_9 = FUNC_3();
 if (!VAR_9) {
  FUNC_0("Can't allocate HCI device");
  return -VAR_0;
 }

 VAR_7->hdev = VAR_9;

 VAR_9->bus = VAR_1;
 FUNC_6(VAR_9, VAR_7);
 FUNC_1(VAR_9, &VAR_7->p_dev->dev);

 VAR_9->open = VAR_5;
 VAR_9->close = VAR_3;
 VAR_9->flush = VAR_4;
 VAR_9->send = VAR_6;


 VAR_10 = FUNC_9(&VAR_8, "BT3CPCC.bin", &VAR_7->p_dev->dev);
 if (VAR_10 < 0) {
  FUNC_0("Firmware request failed");
  goto error;
 }

 VAR_10 = FUNC_2(VAR_7, VAR_8->data, VAR_8->size);

 FUNC_8(VAR_8);

 if (VAR_10 < 0) {
  FUNC_0("Firmware loading failed");
  goto error;
 }


 FUNC_7(1000);


 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10 < 0) {
  FUNC_0("Can't register HCI device");
  goto error;
 }

 return 0;

error:
 VAR_7->hdev = ((void*)0);
 FUNC_4(VAR_9);
 return VAR_10;
}
