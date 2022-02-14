
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func_tuple {struct sdio_func_tuple* next; int size; int code; } ;
struct sdio_func {int vendor; int device; int dev; TYPE_1__* card; int class; struct sdio_func_tuple* tuples; } ;
struct sdio_device_id {scalar_t__ class; } ;
struct hci_dev {int quirks; int send; int flush; int close; int open; int dev_type; int bus; } ;
struct btsdio_data {struct hci_dev* hdev; int txq; int work; struct sdio_func* func; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (char*,struct sdio_func*,struct sdio_device_id const*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_7 ;



 int VAR_8 ;
 int FUNC_2 (struct hci_dev*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct btsdio_data* FUNC_3 (int *,int,int ) ;
 struct hci_dev* FUNC_4 () ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*,struct btsdio_data*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sdio_func*,struct btsdio_data*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct sdio_func *VAR_14,
    const struct sdio_device_id *VAR_15)
{
 struct btsdio_data *VAR_16;
 struct hci_dev *VAR_17;
 struct sdio_func_tuple *VAR_18 = VAR_14->tuples;
 int VAR_19;

 FUNC_0("func %p id %p class 0x%04x", VAR_14, VAR_15, VAR_14->class);

 while (VAR_18) {
  FUNC_0("code 0x%x size %d", VAR_18->code, VAR_18->size);
  VAR_18 = VAR_18->next;
 }




 if (VAR_14->vendor == VAR_8 &&
     !FUNC_8(VAR_14->card->host)) {
  switch (VAR_14->device) {
  case 130:
  case 129:
  case 128:
   return -VAR_0;
  }
 }

 VAR_16 = FUNC_3(&VAR_14->dev, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->func = VAR_14;

 FUNC_1(&VAR_16->work, VAR_13);

 FUNC_11(&VAR_16->txq);

 VAR_17 = FUNC_4();
 if (!VAR_17)
  return -VAR_1;

 VAR_17->bus = VAR_6;
 FUNC_7(VAR_17, VAR_16);

 if (VAR_15->class == VAR_7)
  VAR_17->dev_type = VAR_3;
 else
  VAR_17->dev_type = VAR_4;

 VAR_16->hdev = VAR_17;

 FUNC_2(VAR_17, &VAR_14->dev);

 VAR_17->open = VAR_11;
 VAR_17->close = VAR_9;
 VAR_17->flush = VAR_10;
 VAR_17->send = VAR_12;

 if (VAR_14->vendor == 0x0104 && VAR_14->device == 0x00c5)
  FUNC_10(VAR_5, &VAR_17->quirks);

 VAR_19 = FUNC_6(VAR_17);
 if (VAR_19 < 0) {
  FUNC_5(VAR_17);
  return VAR_19;
 }

 FUNC_9(VAR_14, VAR_16);

 return 0;
}
