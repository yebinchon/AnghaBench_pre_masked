
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mrvl_data {int tx_len; int rawq; int flags; } ;
struct hci_uart {struct mrvl_data* priv; } ;
struct hci_dev {int dev; } ;
struct firmware {int size; int * data; } ;
struct TYPE_2__ {int pkt_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct hci_dev*,char*,int) ;
 int FUNC_2 (struct hci_dev*,char*,...) ;
 int FUNC_3 (struct hci_dev*,char*,...) ;
 struct sk_buff* FUNC_4 (int,int ) ;
 struct hci_uart* FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_uart*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (struct firmware const**,char const*,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct sk_buff*,int const*,int) ;
 int FUNC_12 (int *,struct sk_buff*) ;
 int FUNC_13 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct hci_dev *VAR_8, const char *VAR_9)
{
 struct hci_uart *VAR_10 = FUNC_5(VAR_8);
 struct mrvl_data *VAR_11 = VAR_10->priv;
 const struct firmware *VAR_12 = ((void*)0);
 const u8 *VAR_13, *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_9(&VAR_12, VAR_9, &VAR_8->dev);
 if (VAR_15 < 0) {
  FUNC_2(VAR_8, "Failed to load firmware file %s", VAR_9);
  return VAR_15;
 }

 VAR_13 = VAR_12->data;
 VAR_14 = VAR_12->data + VAR_12->size;

 FUNC_3(VAR_8, "Loading %s", VAR_9);

 FUNC_10(VAR_6, &VAR_11->flags);

 while (VAR_13 <= VAR_14) {
  struct sk_buff *VAR_16;




  VAR_15 = FUNC_13(&VAR_11->flags, VAR_6,
       VAR_7,
       FUNC_7(2000));
  if (VAR_15 == 1) {
   FUNC_2(VAR_8, "Firmware load interrupted");
   VAR_15 = -VAR_0;
   break;
  } else if (VAR_15) {
   FUNC_2(VAR_8, "Firmware request timeout");
   VAR_15 = -VAR_3;
   break;
  }

  FUNC_1(VAR_8, "Firmware request, expecting %d bytes",
      VAR_11->tx_len);

  if (VAR_13 == VAR_14) {




   if (!VAR_11->tx_len) {
    FUNC_3(VAR_8, "Firmware loading complete");
   } else {
    FUNC_2(VAR_8, "Firmware loading failure");
    VAR_15 = -VAR_1;
   }
   break;
  }

  if (VAR_13 + VAR_11->tx_len > VAR_14) {
   VAR_11->tx_len = VAR_14 - VAR_13;
   FUNC_1(VAR_8, "Adjusting tx_len to %d",
       VAR_11->tx_len);
  }

  VAR_16 = FUNC_4(VAR_11->tx_len, VAR_4);
  if (!VAR_16) {
   FUNC_2(VAR_8, "Failed to alloc mem for FW packet");
   VAR_15 = -VAR_2;
   break;
  }
  FUNC_0(VAR_16)->pkt_type = VAR_5;

  FUNC_11(VAR_16, VAR_13, VAR_11->tx_len);
  VAR_13 += VAR_11->tx_len;

  FUNC_10(VAR_6, &VAR_11->flags);

  FUNC_12(&VAR_11->rawq, VAR_16);
  FUNC_6(VAR_10);
 }

 FUNC_8(VAR_12);
 return VAR_15;
}
