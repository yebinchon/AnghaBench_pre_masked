
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int u_long ;
struct TYPE_22__ {int (* init ) (TYPE_6__*) ;int (* firmware ) (TYPE_6__*,int ,int ) ;int (* release ) (TYPE_6__*) ;TYPE_4__* ch; int owner; int name; void* ctrl; int * hwlock; } ;
struct TYPE_17__ {int ctrl; } ;
struct TYPE_16__ {int bchannels; int channelmap; int Bprotocols; TYPE_1__ D; } ;
struct TYPE_21__ {TYPE_13__ dev; } ;
struct TYPE_23__ {int (* release ) (TYPE_7__*) ;TYPE_5__ dch; int name; int * hwlock; } ;
struct sfax_hw {int list; TYPE_10__* pdev; TYPE_6__ isar; TYPE_7__ isac; int cfg; int irq; int name; int lock; } ;
struct firmware {int size; int data; } ;
struct TYPE_18__ {int list; } ;
struct TYPE_19__ {TYPE_2__ ch; } ;
struct TYPE_20__ {TYPE_3__ bch; } ;
struct TYPE_15__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sfax_hw*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sfax_hw*) ;
 int FUNC_2 (int ,struct sfax_hw*) ;
 int FUNC_3 (struct sfax_hw*) ;
 int FUNC_4 (struct sfax_hw*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_13__*,int *,int ) ;
 int FUNC_9 (TYPE_13__*) ;
 int FUNC_10 (TYPE_7__*,struct sfax_hw*) ;
 int FUNC_11 (TYPE_6__*,struct sfax_hw*) ;
 int FUNC_12 (TYPE_10__*) ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (char*,int,...) ;
 int FUNC_15 (struct firmware const*) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (struct firmware const**,char*,int *) ;
 int FUNC_18 (int,int ) ;
 int FUNC_19 (struct sfax_hw*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_20 (int ,scalar_t__,char*,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_6__*) ;
 int FUNC_23 (TYPE_6__*,int ,int ) ;
 int FUNC_24 (TYPE_7__*) ;
 int FUNC_25 (TYPE_6__*) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (int *,int ) ;

__attribute__((used)) static int
FUNC_28(struct sfax_hw *VAR_9)
{
 const struct firmware *VAR_10;
 int VAR_11, VAR_12;
 u_long VAR_13;

 FUNC_20(VAR_9->name, VAR_2 - 1, "Speedfax.%d", VAR_6 + 1);
 FUNC_26(&VAR_4, VAR_13);
 FUNC_6(&VAR_9->list, &VAR_0);
 FUNC_27(&VAR_4, VAR_13);
 FUNC_0(VAR_9);
 FUNC_21(&VAR_9->lock);
 VAR_9->isac.hwlock = &VAR_9->lock;
 VAR_9->isar.hwlock = &VAR_9->lock;
 VAR_9->isar.ctrl = (void *)&VAR_7;
 VAR_9->isac.name = VAR_9->name;
 VAR_9->isar.name = VAR_9->name;
 VAR_9->isar.owner = VAR_3;

 VAR_12 = FUNC_17(&VAR_10, "isdn/ISAR.BIN", &VAR_9->pdev->dev);
 if (VAR_12 < 0) {
  FUNC_13("%s: firmware request failed %d\n",
   VAR_9->name, VAR_12);
  goto error_fw;
 }
 if (VAR_5 & VAR_1)
  FUNC_14("%s: got firmware %zu bytes\n",
     VAR_9->name, VAR_10->size);

 FUNC_10(&VAR_9->isac, VAR_9);

 VAR_9->isac.dch.dev.D.ctrl = VAR_8;
 VAR_9->isac.dch.dev.Bprotocols =
  FUNC_11(&VAR_9->isar, VAR_9);
 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  FUNC_18(VAR_11 + 1, VAR_9->isac.dch.dev.channelmap);
  FUNC_5(&VAR_9->isar.ch[VAR_11].bch.ch.list,
    &VAR_9->isac.dch.dev.bchannels);
 }

 VAR_12 = FUNC_19(VAR_9);
 if (VAR_12)
  goto error_setup;
 VAR_12 = VAR_9->isar.init(&VAR_9->isar);
 if (VAR_12)
  goto error;
 VAR_12 = FUNC_8(&VAR_9->isac.dch.dev,
        &VAR_9->pdev->dev, VAR_9->name);
 if (VAR_12)
  goto error;
 VAR_12 = FUNC_3(VAR_9);
 if (VAR_12)
  goto error_init;
 VAR_12 = VAR_9->isar.firmware(&VAR_9->isar, VAR_10->data, VAR_10->size);
 if (!VAR_12) {
  FUNC_15(VAR_10);
  VAR_6++;
  FUNC_14("SpeedFax %d cards installed\n", VAR_6);
  return 0;
 }
 FUNC_1(VAR_9);
 FUNC_2(VAR_9->irq, VAR_9);
error_init:
 FUNC_9(&VAR_9->isac.dch.dev);
error:
 FUNC_16(VAR_9->cfg, 256);
error_setup:
 VAR_9->isac.release(&VAR_9->isac);
 VAR_9->isar.release(&VAR_9->isar);
 FUNC_15(VAR_10);
error_fw:
 FUNC_12(VAR_9->pdev);
 FUNC_26(&VAR_4, VAR_13);
 FUNC_7(&VAR_9->list);
 FUNC_27(&VAR_4, VAR_13);
 FUNC_4(VAR_9);
 return VAR_12;
}
