
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_6__ {scalar_t__ class; } ;
struct TYPE_10__ {TYPE_1__ dev; } ;
struct TYPE_7__ {TYPE_5__ dev; } ;
struct TYPE_8__ {TYPE_2__ dch; int (* release ) (TYPE_3__*) ;} ;
struct tiger_hw {scalar_t__ irq; int pdev; int list; int dma; scalar_t__ dma_p; TYPE_4__* bc; TYPE_3__ isac; scalar_t__ base_s; int base; int lock; } ;
struct TYPE_9__ {struct tiger_hw* hrbuf; struct tiger_hw* hsbuf; int bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,struct tiger_hw*) ;
 int FUNC_1 (struct tiger_hw*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (struct tiger_hw*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,scalar_t__,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;

__attribute__((used)) static void
FUNC_17(struct tiger_hw *VAR_3)
{
 u_long VAR_4;
 int VAR_5;

 if (VAR_3->base_s) {
  FUNC_12(&VAR_3->lock, VAR_4);
  FUNC_6(VAR_3);
  FUNC_5(&VAR_3->bc[0], VAR_0);
  FUNC_5(&VAR_3->bc[1], VAR_0);
  VAR_3->isac.release(&VAR_3->isac);
  FUNC_13(&VAR_3->lock, VAR_4);
  FUNC_11(VAR_3->base, VAR_3->base_s);
  VAR_3->base_s = 0;
 }
 if (VAR_3->irq > 0)
  FUNC_0(VAR_3->irq, VAR_3);
 if (VAR_3->isac.dch.dev.dev.class)
  FUNC_4(&VAR_3->isac.dch.dev);

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  FUNC_3(&VAR_3->bc[VAR_5].bch);
  FUNC_1(VAR_3->bc[VAR_5].hsbuf);
  FUNC_1(VAR_3->bc[VAR_5].hrbuf);
 }
 if (VAR_3->dma_p)
  FUNC_9(VAR_3->pdev, VAR_1,
        VAR_3->dma_p, VAR_3->dma);
 FUNC_15(&VAR_2, VAR_4);
 FUNC_2(&VAR_3->list);
 FUNC_16(&VAR_2, VAR_4);
 FUNC_7(VAR_3->pdev);
 FUNC_8(VAR_3->pdev);
 FUNC_10(VAR_3->pdev, ((void*)0));
 FUNC_1(VAR_3);
}
