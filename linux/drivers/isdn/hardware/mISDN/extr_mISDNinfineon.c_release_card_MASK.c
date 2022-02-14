
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_5__ {int dev; } ;
struct TYPE_8__ {TYPE_1__ dch; int (* release ) (TYPE_4__*) ;} ;
struct TYPE_6__ {TYPE_4__ isac; } ;
struct inf_hw {int pdev; struct inf_hw** sc; TYPE_3__* ci; int list; TYPE_2__ ipac; int irq; int lock; } ;
struct TYPE_7__ {int typ; } ;






 int VAR_0 ;
 int FUNC_0 (struct inf_hw*) ;
 int FUNC_1 (int ,struct inf_hw*) ;
 int VAR_1 ;
 int FUNC_2 (struct inf_hw*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct inf_hw*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void
FUNC_13(struct inf_hw *VAR_2) {
 ulong VAR_3;
 int VAR_4;

 FUNC_8(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_2);
 FUNC_9(&VAR_2->lock, VAR_3);
 VAR_2->ipac.isac.release(&VAR_2->ipac.isac);
 FUNC_1(VAR_2->irq, VAR_2);
 FUNC_4(&VAR_2->ipac.isac.dch.dev);
 FUNC_7(VAR_2);
 FUNC_11(&VAR_0, VAR_3);
 FUNC_3(&VAR_2->list);
 FUNC_12(&VAR_0, VAR_3);
 switch (VAR_2->ci->typ) {
 case 130:
 case 129:
 case 128:
  break;
 case 131:
  for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
   if (VAR_2->sc[VAR_4])
    FUNC_13(VAR_2->sc[VAR_4]);
   VAR_2->sc[VAR_4] = ((void*)0);
  }

 default:
  FUNC_5(VAR_2->pdev);
  FUNC_6(VAR_2->pdev, ((void*)0));
  break;
 }
 FUNC_2(VAR_2);
 VAR_1--;
}
