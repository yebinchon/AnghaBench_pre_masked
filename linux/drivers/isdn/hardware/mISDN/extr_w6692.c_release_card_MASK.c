
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {int dev; int l1; } ;
struct w6692_hw {int fmask; scalar_t__ subtype; int xdata; int pdev; int list; TYPE_2__ dch; TYPE_1__* bc; int addr; int irq; int lock; } ;
struct TYPE_3__ {int bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct w6692_hw*,int ,int) ;
 int VAR_4 ;
 int FUNC_1 (struct w6692_hw*) ;
 int FUNC_2 (int ,struct w6692_hw*) ;
 int FUNC_3 (struct w6692_hw*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;

__attribute__((used)) static void
FUNC_17(struct w6692_hw *VAR_6)
{
 u_long VAR_7;

 FUNC_12(&VAR_6->lock, VAR_7);
 FUNC_1(VAR_6);
 FUNC_14(&VAR_6->bc[0], VAR_1);
 FUNC_14(&VAR_6->bc[1], VAR_1);
 if ((VAR_6->fmask & VAR_5) || VAR_6->subtype == VAR_2) {
  VAR_6->xdata |= 0x04;
  FUNC_0(VAR_6, VAR_3, VAR_6->xdata);
 }
 FUNC_13(&VAR_6->lock, VAR_7);
 FUNC_2(VAR_6->irq, VAR_6);
 FUNC_4(VAR_6->dch.l1, VAR_0);
 FUNC_8(&VAR_6->dch.dev);
 FUNC_11(VAR_6->addr, 256);
 FUNC_6(&VAR_6->bc[1].bch);
 FUNC_6(&VAR_6->bc[0].bch);
 FUNC_7(&VAR_6->dch);
 FUNC_15(&VAR_4, VAR_7);
 FUNC_5(&VAR_6->list);
 FUNC_16(&VAR_4, VAR_7);
 FUNC_9(VAR_6->pdev);
 FUNC_10(VAR_6->pdev, ((void*)0));
 FUNC_3(VAR_6);
}
