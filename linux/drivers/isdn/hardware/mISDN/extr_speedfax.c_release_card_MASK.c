
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {int dev; } ;
struct TYPE_6__ {TYPE_1__ dch; int (* release ) (TYPE_3__*) ;} ;
struct TYPE_5__ {int (* release ) (TYPE_2__*) ;} ;
struct sfax_hw {int list; int pdev; int cfg; TYPE_3__ isac; TYPE_2__ isar; int irq; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct sfax_hw*) ;
 int FUNC_1 (int ,struct sfax_hw*) ;
 int FUNC_2 (struct sfax_hw*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int) ;
 int VAR_1 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static void
FUNC_14(struct sfax_hw *VAR_2) {
 u_long VAR_3;

 FUNC_8(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_2);
 FUNC_9(&VAR_2->lock, VAR_3);
 VAR_2->isac.release(&VAR_2->isac);
 FUNC_1(VAR_2->irq, VAR_2);
 VAR_2->isar.release(&VAR_2->isar);
 FUNC_4(&VAR_2->isac.dch.dev);
 FUNC_7(VAR_2->cfg, 256);
 FUNC_5(VAR_2->pdev);
 FUNC_6(VAR_2->pdev, ((void*)0));
 FUNC_12(&VAR_0, VAR_3);
 FUNC_3(&VAR_2->list);
 FUNC_13(&VAR_0, VAR_3);
 FUNC_2(VAR_2);
 VAR_1--;
}
