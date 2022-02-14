
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct sk_buff {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_26__ {int dma; int org; } ;
struct TYPE_25__ {int dma; int org; } ;
struct TYPE_23__ {int queue; } ;
struct TYPE_22__ {int queue; } ;
struct TYPE_21__ {int count; int queue; } ;
struct TYPE_20__ {int count; int queue; } ;
struct TYPE_17__ {int index; scalar_t__ membase; TYPE_9__* pcidev; TYPE_8__ tsq; TYPE_7__ rsq; int idr; TYPE_6__** scd2vc; int scq0; TYPE_5__ sbpool; TYPE_4__ lbpool; TYPE_3__ iovpool; TYPE_2__ hbpool; TYPE_11__* atmdev; } ;
typedef TYPE_10__ ns_dev ;
struct TYPE_27__ {int irq; int dev; } ;
struct TYPE_24__ {int * tx_vcc; int scq; } ;
struct TYPE_19__ {int (* stop ) (TYPE_11__*) ;} ;
struct TYPE_18__ {TYPE_1__* phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (TYPE_11__*) ;
 int ** VAR_6 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,TYPE_10__*) ;
 int FUNC_5 (TYPE_10__*,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (struct pci_dev*) ;
 TYPE_10__* FUNC_10 (struct pci_dev*) ;
 struct sk_buff* FUNC_11 (int *) ;
 int FUNC_12 (TYPE_11__*) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct pci_dev *VAR_7)
{
 int VAR_8, VAR_9;
 ns_dev *VAR_10 = FUNC_10(VAR_7);
 struct sk_buff *VAR_11;
 struct sk_buff *VAR_12;
 struct sk_buff *VAR_13;
 struct sk_buff *VAR_14;

 VAR_8 = VAR_10->index;

 if (VAR_6[VAR_8] == ((void*)0))
  return;

 if (VAR_10->atmdev->phy && VAR_10->atmdev->phy->stop)
  VAR_10->atmdev->phy->stop(VAR_10->atmdev);


 FUNC_13(0x00000000, VAR_10->membase + VAR_0);


 FUNC_1(VAR_10->atmdev);


 FUNC_9(VAR_7);


 VAR_9 = 0;
 FUNC_0("nicstar%d: freeing %d huge buffers.\n", VAR_8, VAR_10->hbpool.count);
 while ((VAR_11 = FUNC_11(&VAR_10->hbpool.queue)) != ((void*)0)) {
  FUNC_2(VAR_11);
  VAR_9++;
 }
 FUNC_0("nicstar%d: %d huge buffers freed.\n", VAR_8, VAR_9);
 VAR_9 = 0;
 FUNC_0("nicstar%d: freeing %d iovec buffers.\n", VAR_8,
        VAR_10->iovpool.count);
 while ((VAR_12 = FUNC_11(&VAR_10->iovpool.queue)) != ((void*)0)) {
  FUNC_2(VAR_12);
  VAR_9++;
 }
 FUNC_0("nicstar%d: %d iovec buffers freed.\n", VAR_8, VAR_9);
 while ((VAR_13 = FUNC_11(&VAR_10->lbpool.queue)) != ((void*)0))
  FUNC_2(VAR_13);
 while ((VAR_14 = FUNC_11(&VAR_10->sbpool.queue)) != ((void*)0))
  FUNC_2(VAR_14);
 FUNC_5(VAR_10, VAR_10->scq0, ((void*)0));
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (VAR_10->scd2vc[VAR_9] != ((void*)0))
   FUNC_5(VAR_10, VAR_10->scd2vc[VAR_9]->scq, VAR_10->scd2vc[VAR_9]->tx_vcc);
 }
 FUNC_6(&VAR_10->idr);
 FUNC_3(&VAR_10->pcidev->dev, VAR_2 + VAR_3,
     VAR_10->rsq.org, VAR_10->rsq.dma);
 FUNC_3(&VAR_10->pcidev->dev, VAR_4 + VAR_5,
     VAR_10->tsq.org, VAR_10->tsq.dma);
 FUNC_4(VAR_10->pcidev->irq, VAR_10);
 FUNC_7(VAR_10->membase);
 FUNC_8(VAR_10);
}
