
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_6__ {int * function; } ;
struct TYPE_5__ {int dev; int l1; TYPE_3__ timer; } ;
struct TYPE_4__ {scalar_t__ protocol; scalar_t__ int_m2; } ;
struct hfc_pci {int pdev; TYPE_2__ dch; int * bch; int irq; scalar_t__ initdone; TYPE_1__ hw; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct hfc_pci*) ;
 int FUNC_2 (int ,struct hfc_pci*) ;
 int FUNC_3 (struct hfc_pci*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct hfc_pci*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void
FUNC_13(struct hfc_pci *VAR_3) {
 u_long VAR_4;

 FUNC_11(&VAR_3->lock, VAR_4);
 VAR_3->hw.int_m2 = 0;
 FUNC_1(VAR_3);
 FUNC_8(&VAR_3->bch[0], 1, VAR_1);
 FUNC_8(&VAR_3->bch[1], 2, VAR_1);
 if (VAR_3->dch.timer.function != ((void*)0)) {
  FUNC_0(&VAR_3->dch.timer);
  VAR_3->dch.timer.function = ((void*)0);
 }
 FUNC_12(&VAR_3->lock, VAR_4);
 if (VAR_3->hw.protocol == VAR_2)
  FUNC_4(VAR_3->dch.l1, VAR_0);
 if (VAR_3->initdone)
  FUNC_2(VAR_3->irq, VAR_3);
 FUNC_10(VAR_3);
 FUNC_7(&VAR_3->dch.dev);
 FUNC_5(&VAR_3->bch[1]);
 FUNC_5(&VAR_3->bch[0]);
 FUNC_6(&VAR_3->dch);
 FUNC_9(VAR_3->pdev, ((void*)0));
 FUNC_3(VAR_3);
}
