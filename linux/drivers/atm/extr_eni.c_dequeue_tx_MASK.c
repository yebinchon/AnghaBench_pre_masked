
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct eni_tx {scalar_t__ words; int tx_wait; TYPE_2__* stats; int (* pop ) (struct eni_tx*,struct sk_buff*) ;TYPE_1__* pci_dev; int tx_queue; int index; } ;
struct eni_dev {scalar_t__ words; int tx_wait; TYPE_2__* stats; int (* pop ) (struct eni_tx*,struct sk_buff*) ;TYPE_1__* pci_dev; int tx_queue; int index; } ;
struct atm_vcc {scalar_t__ words; int tx_wait; TYPE_2__* stats; int (* pop ) (struct eni_tx*,struct sk_buff*) ;TYPE_1__* pci_dev; int tx_queue; int index; } ;
struct atm_dev {scalar_t__ words; int tx_wait; TYPE_2__* stats; int (* pop ) (struct eni_tx*,struct sk_buff*) ;TYPE_1__* pci_dev; int tx_queue; int index; } ;
struct TYPE_8__ {struct eni_tx* vcc; } ;
struct TYPE_7__ {scalar_t__ txing; struct eni_tx* tx; } ;
struct TYPE_6__ {int tx; } ;
struct TYPE_5__ {int dev; } ;


 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (char*,scalar_t__,unsigned int) ;
 struct eni_tx* FUNC_2 (struct eni_tx*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 TYPE_3__* FUNC_6 (struct eni_tx*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct eni_tx*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_11 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 struct sk_buff* FUNC_13 (int *) ;
 int FUNC_14 (int *,struct sk_buff*) ;
 int FUNC_15 (struct eni_tx*,struct sk_buff*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct atm_dev *VAR_2)
{
 struct eni_dev *VAR_3;
 struct atm_vcc *VAR_4;
 struct sk_buff *VAR_5;
 struct eni_tx *VAR_6;

 FUNC_8(VAR_2);
 VAR_3 = FUNC_2(VAR_2);
 FUNC_8(VAR_3);
 while ((VAR_5 = FUNC_13(&VAR_3->tx_queue))) {
  VAR_4 = FUNC_0(VAR_5)->vcc;
  FUNC_8(VAR_4);
  VAR_6 = FUNC_6(VAR_4)->tx;
  FUNC_8(FUNC_6(VAR_4)->tx);
  FUNC_1("dequeue_tx: next 0x%lx curr 0x%x\n",FUNC_4(VAR_5),
      (unsigned) FUNC_12(FUNC_7(VAR_6->index)));
  if (FUNC_6(VAR_4)->txing < VAR_6->words && FUNC_4(VAR_5) ==
      FUNC_12(FUNC_7(VAR_6->index))) {
   FUNC_14(&VAR_3->tx_queue,VAR_5);
   break;
  }
  FUNC_6(VAR_4)->txing -= FUNC_5(VAR_5);
  FUNC_11(&VAR_3->pci_dev->dev,FUNC_3(VAR_5),VAR_5->len,
     VAR_0);
  if (VAR_4->pop) VAR_4->pop(VAR_4,VAR_5);
  else FUNC_10(VAR_5);
  FUNC_9(&VAR_4->stats->tx);
  FUNC_16(&VAR_3->tx_wait);
  VAR_1++;
 }
}
