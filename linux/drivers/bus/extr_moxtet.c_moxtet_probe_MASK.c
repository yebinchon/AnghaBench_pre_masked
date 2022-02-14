
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct spi_device {TYPE_2__ dev; } ;
struct TYPE_5__ {scalar_t__ exists; } ;
struct moxtet {int dev_irq; TYPE_2__* dev; TYPE_1__ irq; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 struct moxtet* FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (struct moxtet*) ;
 int FUNC_4 (struct moxtet*) ;
 int FUNC_5 (struct moxtet*) ;
 int FUNC_6 (struct moxtet*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct moxtet*) ;
 int FUNC_10 (struct spi_device*,struct moxtet*) ;
 int FUNC_11 (struct spi_device*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_4)
{
 struct moxtet *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_11(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_2(&VAR_4->dev, sizeof(struct moxtet),
         VAR_3);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev = &VAR_4->dev;
 FUNC_10(VAR_4, VAR_5);

 FUNC_7(&VAR_5->lock);

 VAR_5->dev_irq = FUNC_8(VAR_5->dev->of_node, 0);
 if (VAR_5->dev_irq == -VAR_2)
  return -VAR_2;

 if (VAR_5->dev_irq <= 0) {
  FUNC_0(VAR_5->dev, "No IRQ resource found\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5->irq.exists) {
  VAR_6 = FUNC_4(VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
 }

 FUNC_9(VAR_5);
 FUNC_6(VAR_5);

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6 < 0)
  FUNC_1(VAR_5->dev, "Failed creating debugfs entries: %i\n",
    VAR_6);

 return 0;
}
