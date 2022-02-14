
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int send; int flush; int close; int open; int bus; } ;
struct dtl1_info {int ri_latch; struct hci_dev* hdev; int lock; TYPE_2__* p_dev; int tx_state; int * rx_skb; int rx_count; int rx_state; int txq; } ;
struct TYPE_4__ {TYPE_1__** resource; int dev; } ;
struct TYPE_3__ {unsigned int start; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_dev*,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct hci_dev* FUNC_2 () ;
 int FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,struct dtl1_info*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct dtl1_info *VAR_22)
{
 unsigned long VAR_23;
 unsigned int VAR_24 = VAR_22->p_dev->resource[0]->start;
 struct hci_dev *VAR_25;

 FUNC_11(&(VAR_22->lock));

 FUNC_10(&(VAR_22->txq));

 VAR_22->rx_state = VAR_4;
 VAR_22->rx_count = VAR_3;
 VAR_22->rx_skb = ((void*)0);

 FUNC_9(VAR_17, &(VAR_22->tx_state));


 VAR_25 = FUNC_2();
 if (!VAR_25) {
  FUNC_0("Can't allocate HCI device");
  return -VAR_1;
 }

 VAR_22->hdev = VAR_25;

 VAR_25->bus = VAR_2;
 FUNC_5(VAR_25, VAR_22);
 FUNC_1(VAR_25, &VAR_22->p_dev->dev);

 VAR_25->open = VAR_20;
 VAR_25->close = VAR_18;
 VAR_25->flush = VAR_19;
 VAR_25->send = VAR_21;

 FUNC_12(&(VAR_22->lock), VAR_23);


 FUNC_8(0, VAR_24 + VAR_11);


 FUNC_8(0, VAR_24 + VAR_5);


 FUNC_8(VAR_10, VAR_24 + VAR_9);
 FUNC_8((VAR_12 | VAR_14 | VAR_13), VAR_24 + VAR_11);

 VAR_22->ri_latch = FUNC_6(VAR_22->p_dev->resource[0]->start + VAR_15)
    & VAR_16;


 FUNC_8(VAR_7 | VAR_6 | VAR_8, VAR_24 + VAR_5);

 FUNC_13(&(VAR_22->lock), VAR_23);


 FUNC_7(2000);


 if (FUNC_4(VAR_25) < 0) {
  FUNC_0("Can't register HCI device");
  VAR_22->hdev = ((void*)0);
  FUNC_3(VAR_25);
  return -VAR_0;
 }

 return 0;
}
