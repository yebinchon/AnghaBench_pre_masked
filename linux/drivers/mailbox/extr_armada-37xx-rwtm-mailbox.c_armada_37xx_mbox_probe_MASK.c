
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct mbox_chan {struct a37xx_mbox* con_priv; } ;
struct TYPE_2__ {int num_chans; int txdone_irq; int * ops; struct mbox_chan* chans; int * dev; } ;
struct a37xx_mbox {scalar_t__ irq; TYPE_1__ controller; int * dev; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct resource*) ;
 void* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct a37xx_mbox*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct a37xx_mbox *VAR_5;
 struct resource *VAR_6;
 struct mbox_chan *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;


 VAR_7 = FUNC_4(&VAR_4->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_7(VAR_4, VAR_2, 0);

 VAR_5->base = FUNC_3(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_5->base)) {
  FUNC_2(&VAR_4->dev, "ioremap failed\n");
  return FUNC_1(VAR_5->base);
 }

 VAR_5->irq = FUNC_6(VAR_4, 0);
 if (VAR_5->irq < 0) {
  FUNC_2(&VAR_4->dev, "Cannot get irq\n");
  return VAR_5->irq;
 }

 VAR_5->dev = &VAR_4->dev;


 VAR_7[0].con_priv = VAR_5;
 VAR_5->controller.dev = VAR_5->dev;
 VAR_5->controller.num_chans = 1;
 VAR_5->controller.chans = VAR_7;
 VAR_5->controller.ops = &VAR_3;
 VAR_5->controller.txdone_irq = 1;

 VAR_8 = FUNC_5(VAR_5->dev, &VAR_5->controller);
 if (VAR_8) {
  FUNC_2(&VAR_4->dev, "Could not register mailbox controller\n");
  return VAR_8;
 }

 FUNC_8(VAR_4, VAR_5);
 return VAR_8;
}
