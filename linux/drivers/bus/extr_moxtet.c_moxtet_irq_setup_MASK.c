
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int exists; int masked; int chip; int * domain; } ;
struct moxtet {int dev_irq; TYPE_1__ irq; TYPE_2__* dev; } ;
struct TYPE_4__ {int of_node; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int ,int,int ,int *,struct moxtet*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct moxtet*) ;
 int VAR_5 ;
 int FUNC_5 (int ,int *,int ,int ,char*,struct moxtet*) ;

__attribute__((used)) static int FUNC_6(struct moxtet *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_6->irq.domain = FUNC_3(VAR_6->dev->of_node,
         VAR_2, 0,
         &VAR_4, VAR_6);
 if (VAR_6->irq.domain == ((void*)0)) {
  FUNC_1(VAR_6->dev, "Could not add IRQ domain\n");
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7)
  if (VAR_6->irq.exists & FUNC_0(VAR_7))
   FUNC_2(VAR_6->irq.domain, VAR_7);

 VAR_6->irq.chip = VAR_3;
 VAR_6->irq.masked = ~0;

 VAR_8 = FUNC_5(VAR_6->dev_irq, ((void*)0), VAR_5,
       VAR_1, "moxtet", VAR_6);
 if (VAR_8 < 0)
  goto err_free;

 return 0;

err_free:
 FUNC_4(VAR_6);
 return VAR_8;
}
