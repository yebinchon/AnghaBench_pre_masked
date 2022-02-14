
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int txdone_poll; int txpoll_period; int num_chans; void* chans; struct device* dev; int * of_xlate; int * ops; } ;
struct bcm2835_mbox {TYPE_1__ controller; int regs; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,struct resource*) ;
 void* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,TYPE_1__*) ;
 int FUNC_8 (struct device*,int ,int ,int ,int ,struct bcm2835_mbox*) ;
 int FUNC_9 (int ,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct bcm2835_mbox*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 int VAR_9 = 0;
 struct resource *VAR_10;
 struct bcm2835_mbox *VAR_11;

 VAR_11 = FUNC_6(VAR_8, sizeof(*VAR_11), VAR_2);
 if (VAR_11 == ((void*)0))
  return -VAR_1;
 FUNC_12(&VAR_11->lock);

 VAR_9 = FUNC_8(VAR_8, FUNC_9(VAR_8->of_node, 0),
          VAR_6, 0, FUNC_4(VAR_8), VAR_11);
 if (VAR_9) {
  FUNC_2(VAR_8, "Failed to register a mailbox IRQ handler: %d\n",
   VAR_9);
  return -VAR_0;
 }

 VAR_10 = FUNC_10(VAR_7, VAR_3, 0);
 VAR_11->regs = FUNC_5(&VAR_7->dev, VAR_10);
 if (FUNC_0(VAR_11->regs)) {
  VAR_9 = FUNC_1(VAR_11->regs);
  FUNC_2(&VAR_7->dev, "Failed to remap mailbox regs: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_11->controller.txdone_poll = 1;
 VAR_11->controller.txpoll_period = 5;
 VAR_11->controller.ops = &VAR_4;
 VAR_11->controller.of_xlate = &VAR_5;
 VAR_11->controller.dev = VAR_8;
 VAR_11->controller.num_chans = 1;
 VAR_11->controller.chans = FUNC_6(VAR_8,
  sizeof(*VAR_11->controller.chans), VAR_2);
 if (!VAR_11->controller.chans)
  return -VAR_1;

 VAR_9 = FUNC_7(VAR_8, &VAR_11->controller);
 if (VAR_9)
  return VAR_9;

 FUNC_11(VAR_7, VAR_11);
 FUNC_3(VAR_8, "mailbox enabled\n");

 return VAR_9;
}
