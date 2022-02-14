
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_12__ {int ctrl; int send; } ;
struct TYPE_16__ {int Dprotocols; int Bprotocols; int nrbchan; int bchannels; int channelmap; TYPE_1__ D; } ;
struct TYPE_17__ {TYPE_5__ dev; struct w6692_hw* hw; } ;
struct w6692_hw {int fmask; int list; TYPE_7__ dch; TYPE_4__* bc; int addr; int irq; int name; TYPE_3__* pdev; int lock; } ;
struct TYPE_13__ {int nr; int list; int ctrl; int send; } ;
struct TYPE_18__ {int nr; TYPE_2__ ch; struct w6692_hw* hw; } ;
struct TYPE_15__ {TYPE_8__ bch; } ;
struct TYPE_14__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct w6692_hw*) ;
 int VAR_10 ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (int ,struct w6692_hw*) ;
 int FUNC_3 (struct w6692_hw*) ;
 int FUNC_4 (struct w6692_hw*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_8__*,int ,int ) ;
 int FUNC_11 (TYPE_7__*,int ,int ) ;
 int FUNC_12 (TYPE_5__*,int *,int ) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (struct w6692_hw*) ;
 int FUNC_18 (int ,scalar_t__,char*,int) ;
 int FUNC_19 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int ) ;

__attribute__((used)) static int
FUNC_22(struct w6692_hw *VAR_17)
{
 int VAR_18, VAR_19;
 u_long VAR_20;

 FUNC_18(VAR_17->name, VAR_7 - 1, "w6692.%d", VAR_12 + 1);
 FUNC_20(&VAR_10, VAR_20);
 FUNC_6(&VAR_17->list, &VAR_0);
 FUNC_21(&VAR_10, VAR_20);
 VAR_17->fmask = (1 << VAR_12);
 FUNC_0(VAR_17);
 FUNC_19(&VAR_17->lock);
 FUNC_11(&VAR_17->dch, VAR_6, VAR_8);
 VAR_17->dch.dev.Dprotocols = (1 << VAR_4);
 VAR_17->dch.dev.D.send = VAR_16;
 VAR_17->dch.dev.D.ctrl = VAR_13;
 VAR_17->dch.dev.Bprotocols = (1 << (VAR_3 & VAR_2)) |
  (1 << (VAR_1 & VAR_2));
 VAR_17->dch.hw = VAR_17;
 VAR_17->dch.dev.nrbchan = 2;
 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  FUNC_10(&VAR_17->bc[VAR_18].bch, VAR_5,
       VAR_9);
  VAR_17->bc[VAR_18].bch.hw = VAR_17;
  VAR_17->bc[VAR_18].bch.nr = VAR_18 + 1;
  VAR_17->bc[VAR_18].bch.ch.nr = VAR_18 + 1;
  VAR_17->bc[VAR_18].bch.ch.send = VAR_15;
  VAR_17->bc[VAR_18].bch.ch.ctrl = VAR_11;
  FUNC_16(VAR_18 + 1, VAR_17->dch.dev.channelmap);
  FUNC_5(&VAR_17->bc[VAR_18].bch.ch.list, &VAR_17->dch.dev.bchannels);
 }
 VAR_19 = FUNC_17(VAR_17);
 if (VAR_19)
  goto error_setup;
 VAR_19 = FUNC_12(&VAR_17->dch.dev, &VAR_17->pdev->dev,
        VAR_17->name);
 if (VAR_19)
  goto error_reg;
 VAR_19 = FUNC_3(VAR_17);
 if (VAR_19)
  goto error_init;
 VAR_19 = FUNC_1(&VAR_17->dch, VAR_14);
 if (!VAR_19) {
  VAR_12++;
  FUNC_14("W6692 %d cards installed\n", VAR_12);
  return 0;
 }

 FUNC_2(VAR_17->irq, VAR_17);
error_init:
 FUNC_13(&VAR_17->dch.dev);
error_reg:
 FUNC_15(VAR_17->addr, 256);
error_setup:
 FUNC_8(&VAR_17->bc[1].bch);
 FUNC_8(&VAR_17->bc[0].bch);
 FUNC_9(&VAR_17->dch);
 FUNC_20(&VAR_10, VAR_20);
 FUNC_7(&VAR_17->list);
 FUNC_21(&VAR_10, VAR_20);
 FUNC_4(VAR_17);
 return VAR_19;
}
