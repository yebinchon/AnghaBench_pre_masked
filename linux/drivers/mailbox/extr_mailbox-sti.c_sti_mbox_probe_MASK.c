
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct sti_mbox_pdata {int dummy; } ;
struct sti_mbox_device {int name; TYPE_1__* dev; int lock; struct mbox_controller* mbox; int base; } ;
struct resource {int dummy; } ;
struct TYPE_9__ {struct sti_mbox_pdata* platform_data; struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct mbox_controller {int txdone_irq; int txdone_poll; int txpoll_period; int num_chans; struct mbox_chan* chans; int of_xlate; TYPE_1__* dev; int * ops; } ;
struct mbox_chan {int dummy; } ;
struct device_node {int full_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,struct resource*) ;
 struct mbox_chan* FUNC_5 (TYPE_1__*,int ,int,int ) ;
 void* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,struct mbox_controller*) ;
 int FUNC_8 (TYPE_1__*,int,int ,int ,int ,int ,struct sti_mbox_device*) ;
 struct of_device_id* FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (struct device_node*,char*,int *) ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct sti_mbox_device*) ;
 int FUNC_14 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_12)
{
 const struct of_device_id *VAR_13;
 struct mbox_controller *VAR_14;
 struct sti_mbox_device *VAR_15;
 struct device_node *VAR_16 = VAR_12->dev.of_node;
 struct mbox_chan *VAR_17;
 struct resource *VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_13 = FUNC_9(VAR_7, &VAR_12->dev);
 if (!VAR_13) {
  FUNC_2(&VAR_12->dev, "No configuration found\n");
  return -VAR_1;
 }
 VAR_12->dev.platform_data = (struct sti_mbox_pdata *) VAR_13->data;

 VAR_15 = FUNC_6(&VAR_12->dev, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_2;

 FUNC_13(VAR_12, VAR_15);

 VAR_18 = FUNC_12(VAR_12, VAR_4, 0);
 VAR_15->base = FUNC_4(&VAR_12->dev, VAR_18);
 if (FUNC_0(VAR_15->base))
  return FUNC_1(VAR_15->base);

 VAR_20 = FUNC_10(VAR_16, "mbox-name", &VAR_15->name);
 if (VAR_20)
  VAR_15->name = VAR_16->full_name;

 VAR_14 = FUNC_6(&VAR_12->dev, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_2;

 VAR_17 = FUNC_5(&VAR_12->dev,
        VAR_6, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 VAR_15->dev = &VAR_12->dev;
 VAR_15->mbox = VAR_14;

 FUNC_14(&VAR_15->lock);


 VAR_14->txdone_irq = 0;
 VAR_14->txdone_poll = 1;
 VAR_14->txpoll_period = 100;
 VAR_14->ops = &VAR_9;
 VAR_14->dev = VAR_15->dev;
 VAR_14->of_xlate = VAR_11;
 VAR_14->chans = VAR_17;
 VAR_14->num_chans = VAR_6;

 VAR_20 = FUNC_7(&VAR_12->dev, VAR_14);
 if (VAR_20)
  return VAR_20;


 VAR_19 = FUNC_11(VAR_12, 0);
 if (VAR_19 < 0) {
  FUNC_3(&VAR_12->dev,
    "%s: Registered Tx only Mailbox\n", VAR_15->name);
  return 0;
 }

 VAR_20 = FUNC_8(&VAR_12->dev, VAR_19,
     VAR_8,
     VAR_10,
     VAR_5, VAR_15->name, VAR_15);
 if (VAR_20) {
  FUNC_2(&VAR_12->dev, "Can't claim IRQ %d\n", VAR_19);
  return -VAR_0;
 }

 FUNC_3(&VAR_12->dev, "%s: Registered Tx/Rx Mailbox\n", VAR_15->name);

 return 0;
}
