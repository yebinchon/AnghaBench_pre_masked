
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {int num_chans; int txdone_irq; int txdone_poll; int txpoll_period; int of_xlate; int * ops; TYPE_1__* chans; struct device* dev; } ;
struct hi6220_mbox {int chan_num; scalar_t__ irq; int tx_irq_mode; TYPE_3__ controller; void* ipc; TYPE_2__* mchan; int ** irq_map_chan; TYPE_1__* chan; void* base; struct device* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {int slot; struct hi6220_mbox* parent; } ;
struct TYPE_4__ {TYPE_2__* con_priv; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_4 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*) ;
 void* FUNC_7 (struct device*,struct resource*) ;
 void* FUNC_8 (struct device*,int,int,int ) ;
 struct hi6220_mbox* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,TYPE_3__*) ;
 int FUNC_11 (struct device*,int,int ,int ,int ,struct hi6220_mbox*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int) ;
 int FUNC_15 (struct platform_device*,struct hi6220_mbox*) ;
 int FUNC_16 (int,int ) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev.of_node;
 struct device *VAR_10 = &VAR_8->dev;
 struct hi6220_mbox *VAR_11;
 struct resource *VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_9(VAR_10, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->dev = VAR_10;
 VAR_11->chan_num = VAR_4;
 VAR_11->mchan = FUNC_8(VAR_10,
  VAR_11->chan_num, sizeof(*VAR_11->mchan), VAR_2);
 if (!VAR_11->mchan)
  return -VAR_1;

 VAR_11->chan = FUNC_8(VAR_10,
  VAR_11->chan_num, sizeof(*VAR_11->chan), VAR_2);
 if (!VAR_11->chan)
  return -VAR_1;

 VAR_11->irq = FUNC_13(VAR_8, 0);
 if (VAR_11->irq < 0)
  return VAR_11->irq;

 VAR_12 = FUNC_14(VAR_8, VAR_3, 0);
 VAR_11->ipc = FUNC_7(VAR_10, VAR_12);
 if (FUNC_2(VAR_11->ipc)) {
  FUNC_4(VAR_10, "ioremap ipc failed\n");
  return FUNC_3(VAR_11->ipc);
 }

 VAR_12 = FUNC_14(VAR_8, VAR_3, 1);
 VAR_11->base = FUNC_7(VAR_10, VAR_12);
 if (FUNC_2(VAR_11->base)) {
  FUNC_4(VAR_10, "ioremap buffer failed\n");
  return FUNC_3(VAR_11->base);
 }

 VAR_14 = FUNC_11(VAR_10, VAR_11->irq, VAR_5, 0,
   FUNC_6(VAR_10), VAR_11);
 if (VAR_14) {
  FUNC_4(VAR_10, "Failed to register a mailbox IRQ handler: %d\n",
   VAR_14);
  return -VAR_0;
 }

 VAR_11->controller.dev = VAR_10;
 VAR_11->controller.chans = &VAR_11->chan[0];
 VAR_11->controller.num_chans = VAR_11->chan_num;
 VAR_11->controller.ops = &VAR_6;
 VAR_11->controller.of_xlate = VAR_7;

 for (VAR_13 = 0; VAR_13 < VAR_11->chan_num; VAR_13++) {
  VAR_11->chan[VAR_13].con_priv = &VAR_11->mchan[VAR_13];
  VAR_11->irq_map_chan[VAR_13] = ((void*)0);

  VAR_11->mchan[VAR_13].parent = VAR_11;
  VAR_11->mchan[VAR_13].slot = VAR_13;
 }


 FUNC_16(0x0, FUNC_1(VAR_11->ipc));
 FUNC_16(~0x0, FUNC_0(VAR_11->ipc));


 if (FUNC_12(VAR_9, "hi6220,mbox-tx-noirq", ((void*)0)))
  VAR_11->tx_irq_mode = 0;
 else
  VAR_11->tx_irq_mode = 1;

 if (VAR_11->tx_irq_mode)
  VAR_11->controller.txdone_irq = 1;
 else {
  VAR_11->controller.txdone_poll = 1;
  VAR_11->controller.txpoll_period = 5;
 }

 VAR_14 = FUNC_10(VAR_10, &VAR_11->controller);
 if (VAR_14) {
  FUNC_4(VAR_10, "Failed to register mailbox %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_15(VAR_8, VAR_11);
 FUNC_5(VAR_10, "Mailbox enabled\n");
 return 0;
}
