
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int of_node; } ;
struct platform_device {TYPE_9__ dev; } ;
struct TYPE_13__ {int lteir; } ;
struct TYPE_12__ {int* irq; TYPE_2__* regs; TYPE_9__* dev; int irq_wait; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_9__*,char*,...) ;
 int FUNC_1 (TYPE_9__*,TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int,int ) ;
 TYPE_2__* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int,int ,int ,char*,TYPE_1__*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 int VAR_9;

 if (!VAR_8->dev.of_node) {
  FUNC_0(&VAR_8->dev, "Device OF-Node is NULL");
  return -VAR_0;
 }

 VAR_6 = FUNC_8(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 FUNC_1(&VAR_8->dev, VAR_6);

 FUNC_12(&VAR_6->lock);
 FUNC_4(&VAR_6->irq_wait);

 VAR_6->regs = FUNC_9(VAR_8->dev.of_node, 0);
 if (!VAR_6->regs) {
  FUNC_0(&VAR_8->dev, "failed to get memory region\n");
  VAR_9 = -VAR_1;
  goto err;
 }

 VAR_6->irq[0] = FUNC_6(VAR_8->dev.of_node, 0);
 if (!VAR_6->irq[0]) {
  FUNC_0(&VAR_8->dev, "failed to get irq resource\n");
  VAR_9 = -VAR_1;
  goto err;
 }

 VAR_6->dev = &VAR_8->dev;

 VAR_9 = FUNC_3(VAR_6, VAR_8->dev.of_node);
 if (VAR_9 < 0)
  goto err;

 VAR_9 = FUNC_11(VAR_6->irq[0], VAR_7, 0,
    "fsl-lbc", VAR_6);
 if (VAR_9 != 0) {
  FUNC_0(&VAR_8->dev, "failed to install irq (%d)\n",
   VAR_6->irq[0]);
  VAR_9 = VAR_6->irq[0];
  goto err;
 }

 VAR_6->irq[1] = FUNC_6(VAR_8->dev.of_node, 1);
 if (VAR_6->irq[1]) {
  VAR_9 = FUNC_11(VAR_6->irq[1], VAR_7,
    VAR_4, "fsl-lbc-err", VAR_6);
  if (VAR_9) {
   FUNC_0(&VAR_8->dev, "failed to install irq (%d)\n",
     VAR_6->irq[1]);
   VAR_9 = VAR_6->irq[1];
   goto err1;
  }
 }


 FUNC_10(&VAR_6->regs->lteir, VAR_5);

 return 0;

err1:
 FUNC_2(VAR_6->irq[0], VAR_6);
err:
 FUNC_5(VAR_6->regs);
 FUNC_7(VAR_6);
 VAR_6 = ((void*)0);
 return VAR_9;
}
