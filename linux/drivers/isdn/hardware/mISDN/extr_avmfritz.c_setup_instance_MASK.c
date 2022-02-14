
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_11__ {int ctrl; } ;
struct TYPE_16__ {int Bprotocols; int bchannels; int channelmap; TYPE_1__ D; } ;
struct TYPE_14__ {TYPE_7__ dev; } ;
struct TYPE_15__ {int (* release ) (TYPE_5__*) ;TYPE_4__ dch; int * hwlock; int name; } ;
struct fritzcard {scalar_t__ type; int list; TYPE_9__* bch; TYPE_5__ isac; int addr; int name; TYPE_3__* pdev; int lock; } ;
struct TYPE_12__ {int nr; int list; int ctrl; int send; } ;
struct TYPE_17__ {int nr; TYPE_2__ ch; struct fritzcard* hw; } ;
struct TYPE_13__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct fritzcard*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct fritzcard*) ;
 int FUNC_2 (struct fritzcard*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_9__*,int ,unsigned short) ;
 int FUNC_8 (TYPE_7__*,int *,int ) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_5__*,struct fritzcard*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (struct fritzcard*) ;
 int FUNC_15 (int ,scalar_t__,char*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ) ;

__attribute__((used)) static int
FUNC_20(struct fritzcard *VAR_14)
{
 int VAR_15, VAR_16;
 unsigned short VAR_17;
 u_long VAR_18;

 FUNC_15(VAR_14->name, VAR_9 - 1, "AVM.%d", VAR_1 + 1);
 FUNC_18(&VAR_13, VAR_18);
 FUNC_4(&VAR_14->list, &VAR_2);
 FUNC_19(&VAR_13, VAR_18);

 FUNC_0(VAR_14);
 VAR_14->isac.name = VAR_14->name;
 FUNC_16(&VAR_14->lock);
 VAR_14->isac.hwlock = &VAR_14->lock;
 FUNC_10(&VAR_14->isac, VAR_14);

 VAR_14->isac.dch.dev.Bprotocols = (1 << (VAR_7 & VAR_6)) |
  (1 << (VAR_5 & VAR_6));
 VAR_14->isac.dch.dev.D.ctrl = VAR_11;
 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
  VAR_14->bch[VAR_15].nr = VAR_15 + 1;
  FUNC_13(VAR_15 + 1, VAR_14->isac.dch.dev.channelmap);
  if (VAR_0 == VAR_14->type)
   VAR_17 = VAR_4;
  else
   VAR_17 = VAR_3;
  FUNC_7(&VAR_14->bch[VAR_15], VAR_8, VAR_17);
  VAR_14->bch[VAR_15].hw = VAR_14;
  VAR_14->bch[VAR_15].ch.send = VAR_12;
  VAR_14->bch[VAR_15].ch.ctrl = VAR_10;
  VAR_14->bch[VAR_15].ch.nr = VAR_15 + 1;
  FUNC_3(&VAR_14->bch[VAR_15].ch.list, &VAR_14->isac.dch.dev.bchannels);
 }
 VAR_16 = FUNC_14(VAR_14);
 if (VAR_16)
  goto error;
 VAR_16 = FUNC_8(&VAR_14->isac.dch.dev, &VAR_14->pdev->dev,
        VAR_14->name);
 if (VAR_16)
  goto error_reg;
 VAR_16 = FUNC_1(VAR_14);
 if (!VAR_16) {
  VAR_1++;
  FUNC_11("AVM %d cards installed DEBUG\n", VAR_1);
  return 0;
 }
 FUNC_9(&VAR_14->isac.dch.dev);
error_reg:
 FUNC_12(VAR_14->addr, 32);
error:
 VAR_14->isac.release(&VAR_14->isac);
 FUNC_6(&VAR_14->bch[1]);
 FUNC_6(&VAR_14->bch[0]);
 FUNC_18(&VAR_13, VAR_18);
 FUNC_5(&VAR_14->list);
 FUNC_19(&VAR_13, VAR_18);
 FUNC_2(VAR_14);
 return VAR_16;
}
