
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int send; int flush; int close; int open; int bus; } ;
struct bluecard_info {int ctrl_reg; struct hci_dev* hdev; int txq; int hw_state; int tx_state; TYPE_2__* p_dev; int * rx_skb; scalar_t__ rx_count; int rx_state; int timer; int lock; } ;
struct TYPE_4__ {int dev; TYPE_1__** resource; } ;
struct TYPE_3__ {unsigned int start; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct hci_dev*,int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 struct hci_dev* FUNC_2 () ;
 int FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,struct bluecard_info*) ;
 unsigned char FUNC_6 (unsigned int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,unsigned int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct bluecard_info *VAR_29)
{
 unsigned int VAR_30 = VAR_29->p_dev->resource[0]->start;
 struct hci_dev *VAR_31;
 unsigned char VAR_32;

 FUNC_12(&(VAR_29->lock));

 FUNC_13(&VAR_29->timer, VAR_24, 0);

 FUNC_10(&(VAR_29->txq));

 VAR_29->rx_state = VAR_7;
 VAR_29->rx_count = 0;
 VAR_29->rx_skb = ((void*)0);


 VAR_31 = FUNC_2();
 if (!VAR_31) {
  FUNC_0("Can't allocate HCI device");
  return -VAR_5;
 }

 VAR_29->hdev = VAR_31;

 VAR_31->bus = VAR_6;
 FUNC_5(VAR_31, VAR_29);
 FUNC_1(VAR_31, &VAR_29->p_dev->dev);

 VAR_31->open = VAR_27;
 VAR_31->close = VAR_25;
 VAR_31->flush = VAR_26;
 VAR_31->send = VAR_28;

 VAR_32 = FUNC_6(VAR_30 + 0x30);

 if ((VAR_32 & 0x0f) == 0x02)
  FUNC_9(VAR_1, &(VAR_29->hw_state));

 if (VAR_32 & 0x10)
  FUNC_9(VAR_2, &(VAR_29->hw_state));

 if (VAR_32 & 0x20)
  FUNC_9(VAR_0, &(VAR_29->hw_state));


 VAR_29->ctrl_reg = VAR_13 | VAR_15;
 FUNC_8(VAR_29->ctrl_reg, VAR_30 + VAR_11);


 FUNC_8(0x80, VAR_30 + 0x30);


 FUNC_7(10);


 FUNC_8(0x00, VAR_30 + 0x30);


 VAR_29->ctrl_reg = VAR_12 | VAR_14;
 FUNC_8(VAR_29->ctrl_reg, VAR_30 + VAR_11);


 FUNC_8(0xff, VAR_30 + VAR_18);
 VAR_29->ctrl_reg |= VAR_16;
 FUNC_8(VAR_29->ctrl_reg, VAR_30 + VAR_11);

 if ((VAR_32 & 0x0f) == 0x03) {

  VAR_29->ctrl_reg |= VAR_17;
  FUNC_8(VAR_29->ctrl_reg, VAR_30 + VAR_11);


  VAR_29->ctrl_reg |= 0x03;
  FUNC_8(VAR_29->ctrl_reg, VAR_30 + VAR_11);


  VAR_29->ctrl_reg &= ~VAR_17;
  FUNC_8(VAR_29->ctrl_reg, VAR_30 + VAR_11);

  FUNC_9(VAR_21, &(VAR_29->tx_state));
  FUNC_9(VAR_22, &(VAR_29->tx_state));
  FUNC_9(VAR_23, &(VAR_29->tx_state));
 }


 FUNC_8(VAR_9, VAR_30 + VAR_8);
 FUNC_8(VAR_10, VAR_30 + VAR_8);


 FUNC_9(VAR_3, &(VAR_29->hw_state));


 FUNC_11(&(VAR_29->txq));


 FUNC_8((0x0f << VAR_20) | 1, VAR_30 + VAR_19);


 FUNC_7(1250);


 if (FUNC_4(VAR_31) < 0) {
  FUNC_0("Can't register HCI device");
  VAR_29->hdev = ((void*)0);
  FUNC_3(VAR_31);
  return -VAR_4;
 }

 return 0;
}
