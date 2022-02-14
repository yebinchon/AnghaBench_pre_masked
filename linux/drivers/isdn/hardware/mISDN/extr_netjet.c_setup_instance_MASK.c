
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_9__ {int ctrl; } ;
struct TYPE_15__ {int Bprotocols; int bchannels; int channelmap; TYPE_1__ D; } ;
struct TYPE_12__ {TYPE_7__ dev; } ;
struct TYPE_14__ {TYPE_4__ dch; int * hwlock; int name; } ;
struct tiger_hw {int name; TYPE_5__* pdev; TYPE_6__ isac; TYPE_3__* bc; int lock; int list; } ;
struct TYPE_10__ {int nr; int list; int ctrl; int send; } ;
struct TYPE_16__ {int nr; struct tiger_hw* hw; TYPE_2__ ch; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_11__ {TYPE_8__ bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tiger_hw*) ;
 int VAR_7 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_8__*,int ,int) ;
 int FUNC_4 (TYPE_7__*,int *,int ) ;
 int FUNC_5 (TYPE_6__*,struct tiger_hw*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct tiger_hw*) ;
 int VAR_11 ;
 int FUNC_7 (struct tiger_hw*) ;
 int FUNC_8 (struct tiger_hw*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int ,scalar_t__,char*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static int
FUNC_15(struct tiger_hw *VAR_12)
{
 int VAR_13, VAR_14;
 u_long VAR_15;

 FUNC_11(VAR_12->name, VAR_5 - 1, "netjet.%d", VAR_9 + 1);
 FUNC_13(&VAR_7, VAR_15);
 FUNC_2(&VAR_12->list, &VAR_0);
 FUNC_14(&VAR_7, VAR_15);

 FUNC_0(VAR_12);
 VAR_12->isac.name = VAR_12->name;
 FUNC_12(&VAR_12->lock);
 VAR_12->isac.hwlock = &VAR_12->lock;
 FUNC_5(&VAR_12->isac, VAR_12);

 VAR_12->isac.dch.dev.Bprotocols = (1 << (VAR_3 & VAR_2)) |
  (1 << (VAR_1 & VAR_2));
 VAR_12->isac.dch.dev.D.ctrl = VAR_10;
 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  VAR_12->bc[VAR_13].bch.nr = VAR_13 + 1;
  FUNC_10(VAR_13 + 1, VAR_12->isac.dch.dev.channelmap);
  FUNC_3(&VAR_12->bc[VAR_13].bch, VAR_4,
       VAR_6 >> 1);
  VAR_12->bc[VAR_13].bch.hw = VAR_12;
  VAR_12->bc[VAR_13].bch.ch.send = VAR_11;
  VAR_12->bc[VAR_13].bch.ch.ctrl = VAR_8;
  VAR_12->bc[VAR_13].bch.ch.nr = VAR_13 + 1;
  FUNC_1(&VAR_12->bc[VAR_13].bch.ch.list,
    &VAR_12->isac.dch.dev.bchannels);
  VAR_12->bc[VAR_13].bch.hw = VAR_12;
 }
 VAR_14 = FUNC_8(VAR_12);
 if (VAR_14)
  goto error;
 VAR_14 = FUNC_4(&VAR_12->isac.dch.dev, &VAR_12->pdev->dev,
        VAR_12->name);
 if (VAR_14)
  goto error;
 VAR_14 = FUNC_6(VAR_12);
 if (!VAR_14) {
  VAR_9++;
  FUNC_9("Netjet %d cards installed\n", VAR_9);
  return 0;
 }
error:
 FUNC_7(VAR_12);
 return VAR_14;
}
