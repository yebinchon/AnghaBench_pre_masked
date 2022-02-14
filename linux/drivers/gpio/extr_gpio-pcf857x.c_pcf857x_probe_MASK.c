
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct pcf857x_platform_data {unsigned int n_latch; int gpio_base; int (* setup ) (struct i2c_client*,int,int,int ) ;int context; } ;
struct TYPE_15__ {int base; int can_sleep; int ngpio; int label; int direction_output; int direction_input; int set; int get; int owner; TYPE_5__* parent; } ;
struct TYPE_16__ {char* name; int irq_bus_sync_unlock; int irq_bus_lock; int irq_set_wake; void* irq_unmask; void* irq_mask; void* irq_ack; int irq_disable; int irq_enable; } ;
struct pcf857x {int (* read ) (struct i2c_client*) ;unsigned int out; unsigned int status; TYPE_1__ chip; TYPE_2__ irqchip; struct i2c_client* client; int write; int lock; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_17__ {struct device_node* of_node; } ;
struct i2c_client {int name; TYPE_5__ dev; int irq; int adapter; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_11 ;
 int FUNC_1 (TYPE_5__*,char*,...) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 struct pcf857x_platform_data* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,char*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,char*,int) ;
 int FUNC_7 (TYPE_5__*,TYPE_1__*,struct pcf857x*) ;
 struct pcf857x* FUNC_8 (TYPE_5__*,int,int ) ;
 int FUNC_9 (TYPE_5__*,int ,int *,int ,int,int ,struct pcf857x*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*,int ,int ,int ) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*,int ) ;
 int VAR_12 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct i2c_client*) ;
 int FUNC_14 (struct i2c_client*) ;
 int FUNC_15 (struct i2c_client*,struct pcf857x*) ;
 int FUNC_16 (struct i2c_client*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_17 (int *) ;
 void* VAR_15 ;
 int FUNC_18 (struct device_node*,char*,unsigned int*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_19 (struct i2c_client*,int,int,int ) ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_26,
    const struct i2c_device_id *VAR_27)
{
 struct pcf857x_platform_data *VAR_28 = FUNC_3(&VAR_26->dev);
 struct device_node *VAR_29 = VAR_26->dev.of_node;
 struct pcf857x *VAR_30;
 unsigned int VAR_31 = 0;
 int VAR_32;

 if (FUNC_0(VAR_0) && VAR_29)
  FUNC_18(VAR_29, "lines-initial-states", &VAR_31);
 else if (VAR_28)
  VAR_31 = VAR_28->n_latch;
 else
  FUNC_1(&VAR_26->dev, "no platform data\n");


 VAR_30 = FUNC_8(&VAR_26->dev, sizeof(*VAR_30), VAR_4);
 if (!VAR_30)
  return -VAR_3;

 FUNC_17(&VAR_30->lock);

 VAR_30->chip.base = VAR_28 ? VAR_28->gpio_base : -1;
 VAR_30->chip.can_sleep = 1;
 VAR_30->chip.parent = &VAR_26->dev;
 VAR_30->chip.owner = VAR_11;
 VAR_30->chip.get = VAR_16;
 VAR_30->chip.set = VAR_25;
 VAR_30->chip.direction_input = VAR_17;
 VAR_30->chip.direction_output = VAR_24;
 VAR_30->chip.ngpio = VAR_27->driver_data;
 if (VAR_30->chip.ngpio == 8) {
  VAR_30->write = VAR_14;
  VAR_30->read = FUNC_14;

  if (!FUNC_12(VAR_26->adapter,
    VAR_6))
   VAR_32 = -VAR_2;


  else
   VAR_32 = FUNC_16(VAR_26);







 } else if (VAR_30->chip.ngpio == 16) {
  VAR_30->write = VAR_13;
  VAR_30->read = FUNC_13;

  if (!FUNC_12(VAR_26->adapter, VAR_5))
   VAR_32 = -VAR_2;


  else
   VAR_32 = FUNC_13(VAR_26);

 } else {
  FUNC_1(&VAR_26->dev, "unsupported number of gpios\n");
  VAR_32 = -VAR_1;
 }

 if (VAR_32 < 0)
  goto fail;

 VAR_30->chip.label = VAR_26->name;

 VAR_30->client = VAR_26;
 FUNC_15(VAR_26, VAR_30);
 VAR_30->out = ~VAR_31;
 VAR_30->status = VAR_30->out;

 VAR_32 = FUNC_7(&VAR_26->dev, &VAR_30->chip, VAR_30);
 if (VAR_32 < 0)
  goto fail;


 if (VAR_26->irq) {
  VAR_30->irqchip.name = "pcf857x",
  VAR_30->irqchip.irq_enable = VAR_22,
  VAR_30->irqchip.irq_disable = VAR_21,
  VAR_30->irqchip.irq_ack = VAR_15,
  VAR_30->irqchip.irq_mask = VAR_15,
  VAR_30->irqchip.irq_unmask = VAR_15,
  VAR_30->irqchip.irq_set_wake = VAR_23,
  VAR_30->irqchip.irq_bus_lock = VAR_19,
  VAR_30->irqchip.irq_bus_sync_unlock = VAR_20,
  VAR_32 = FUNC_10(&VAR_30->chip,
           &VAR_30->irqchip,
           0, VAR_12,
           VAR_10);
  if (VAR_32) {
   FUNC_2(&VAR_26->dev, "cannot add irqchip\n");
   goto fail;
  }

  VAR_32 = FUNC_9(&VAR_26->dev, VAR_26->irq,
     ((void*)0), VAR_18, VAR_7 |
     VAR_9 | VAR_8,
     FUNC_5(&VAR_26->dev), VAR_30);
  if (VAR_32)
   goto fail;

  FUNC_11(&VAR_30->chip, &VAR_30->irqchip,
         VAR_26->irq);
 }




 if (VAR_28 && VAR_28->setup) {
  VAR_32 = VAR_28->setup(VAR_26,
    VAR_30->chip.base, VAR_30->chip.ngpio,
    VAR_28->context);
  if (VAR_32 < 0)
   FUNC_6(&VAR_26->dev, "setup --> %d\n", VAR_32);
 }

 FUNC_4(&VAR_26->dev, "probed\n");

 return 0;

fail:
 FUNC_1(&VAR_26->dev, "probe error %d for '%s'\n", VAR_32,
  VAR_26->name);

 return VAR_32;
}
