
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dev; } ;
struct sdio_device_id {scalar_t__ driver_data; } ;
struct hci_dev {int manufacturer; int quirks; int send; int shutdown; int setup; int flush; int close; int open; int bus; } ;
struct btmtksdio_dev {int * dev; struct hci_dev* hdev; int txq; int tx_work; struct sdio_func* func; void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hci_dev*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,char*) ;
 struct btmtksdio_dev* FUNC_3 (int *,int,int ) ;
 struct hci_dev* FUNC_4 () ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*,struct btmtksdio_dev*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct sdio_func*,struct btmtksdio_dev*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct sdio_func *VAR_12,
      const struct sdio_device_id *VAR_13)
{
 struct btmtksdio_dev *VAR_14;
 struct hci_dev *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_3(&VAR_12->dev, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->data = (void *)VAR_13->driver_data;
 if (!VAR_14->data)
  return -VAR_0;

 VAR_14->dev = &VAR_12->dev;
 VAR_14->func = VAR_12;

 FUNC_0(&VAR_14->tx_work, VAR_11);
 FUNC_13(&VAR_14->txq);


 VAR_15 = FUNC_4();
 if (!VAR_15) {
  FUNC_2(&VAR_12->dev, "Can't allocate HCI device\n");
  return -VAR_1;
 }

 VAR_14->hdev = VAR_15;

 VAR_15->bus = VAR_4;
 FUNC_7(VAR_15, VAR_14);

 VAR_15->open = VAR_7;
 VAR_15->close = VAR_5;
 VAR_15->flush = VAR_6;
 VAR_15->setup = VAR_9;
 VAR_15->shutdown = VAR_10;
 VAR_15->send = VAR_8;
 FUNC_1(VAR_15, &VAR_12->dev);

 VAR_15->manufacturer = 70;
 FUNC_12(VAR_3, &VAR_15->quirks);

 VAR_16 = FUNC_6(VAR_15);
 if (VAR_16 < 0) {
  FUNC_2(&VAR_12->dev, "Can't register HCI device\n");
  FUNC_5(VAR_15);
  return VAR_16;
 }

 FUNC_11(VAR_12, VAR_14);






 if (FUNC_9(VAR_14->dev))
  FUNC_8(VAR_14->dev);
 FUNC_10(VAR_14->dev);

 return 0;
}
