
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct omap_gpio_platform_data {int dbck_flag; int loses_context; int get_context_loss_count; TYPE_2__* regs; int non_wakeup_gpios; scalar_t__ is_mpuio; int bank_width; int bank_stride; } ;
struct of_device_id {struct omap_gpio_platform_data* data; } ;
struct irq_chip {struct device* parent_device; int flags; int name; int irq_bus_sync_unlock; int irq_bus_lock; int irq_set_wake; int irq_set_type; int irq_unmask; int irq_mask; int irq_ack; int irq_shutdown; int irq_startup; } ;
struct TYPE_8__ {int notifier_call; } ;
struct TYPE_5__ {int of_node; int owner; struct device* parent; } ;
struct gpio_bank {int irq; int dbck_flag; int loses_context; TYPE_4__ nb; int dbck; scalar_t__ is_mpuio; int base; int wa_lock; int lock; int set_dataout; TYPE_2__* regs; int get_context_loss_count; TYPE_1__ chip; int non_wakeup_gpios; int width; int stride; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {int irq_ack; } ;
struct TYPE_6__ {scalar_t__ clr_dataout; scalar_t__ set_dataout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct device*,char*,...) ;
 struct omap_gpio_platform_data* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*,char*) ;
 void* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct platform_device*,int ) ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct of_device_id* FUNC_11 (int ,struct device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct device_node*) ;
 int FUNC_14 (struct device_node*,char*) ;
 int FUNC_15 (struct gpio_bank*,struct irq_chip*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_16 (struct gpio_bank*) ;
 int FUNC_17 (struct gpio_bank*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_18 (struct gpio_bank*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_19 (struct platform_device*,int ) ;
 int FUNC_20 (struct platform_device*,struct gpio_bank*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_20)
{
 struct device *VAR_21 = &VAR_20->dev;
 struct device_node *VAR_22 = VAR_21->of_node;
 const struct of_device_id *VAR_23;
 const struct omap_gpio_platform_data *VAR_24;
 struct gpio_bank *VAR_25;
 struct irq_chip *VAR_26;
 int VAR_27;

 VAR_23 = FUNC_11(FUNC_12(VAR_15), VAR_21);

 VAR_24 = VAR_23 ? VAR_23->data : FUNC_6(VAR_21);
 if (!VAR_24)
  return -VAR_0;

 VAR_25 = FUNC_9(VAR_21, sizeof(*VAR_25), VAR_4);
 if (!VAR_25)
  return -VAR_1;

 VAR_26 = FUNC_9(VAR_21, sizeof(*VAR_26), VAR_4);
 if (!VAR_26)
  return -VAR_1;

 VAR_26->irq_startup = VAR_12,
 VAR_26->irq_shutdown = VAR_11,
 VAR_26->irq_ack = VAR_7.irq_ack,
 VAR_26->irq_mask = VAR_14,
 VAR_26->irq_unmask = VAR_16,
 VAR_26->irq_set_type = VAR_13,
 VAR_26->irq_set_wake = VAR_17,
 VAR_26->irq_bus_lock = VAR_10,
 VAR_26->irq_bus_sync_unlock = VAR_8,
 VAR_26->name = FUNC_7(&VAR_20->dev);
 VAR_26->flags = VAR_5;
 VAR_26->parent_device = VAR_21;

 VAR_25->irq = FUNC_19(VAR_20, 0);
 if (VAR_25->irq <= 0) {
  if (!VAR_25->irq)
   VAR_25->irq = -VAR_2;
  if (VAR_25->irq != -VAR_3)
   FUNC_5(VAR_21,
    "can't get irq resource ret=%d\n", VAR_25->irq);
  return VAR_25->irq;
 }

 VAR_25->chip.parent = VAR_21;
 VAR_25->chip.owner = VAR_6;
 VAR_25->dbck_flag = VAR_24->dbck_flag;
 VAR_25->stride = VAR_24->bank_stride;
 VAR_25->width = VAR_24->bank_width;
 VAR_25->is_mpuio = VAR_24->is_mpuio;
 VAR_25->non_wakeup_gpios = VAR_24->non_wakeup_gpios;
 VAR_25->regs = VAR_24->regs;




 if (VAR_22) {
  if (!FUNC_14(VAR_22, "ti,gpio-always-on"))
   VAR_25->loses_context = 1;
 } else {
  VAR_25->loses_context = VAR_24->loses_context;

  if (VAR_25->loses_context)
   VAR_25->get_context_loss_count =
    VAR_24->get_context_loss_count;
 }

 if (VAR_25->regs->set_dataout && VAR_25->regs->clr_dataout)
  VAR_25->set_dataout = VAR_19;
 else
  VAR_25->set_dataout = VAR_18;

 FUNC_26(&VAR_25->lock);
 FUNC_26(&VAR_25->wa_lock);


 VAR_25->base = FUNC_10(VAR_20, 0);
 if (FUNC_0(VAR_25->base)) {
  return FUNC_1(VAR_25->base);
 }

 if (VAR_25->dbck_flag) {
  VAR_25->dbck = FUNC_8(VAR_21, "dbclk");
  if (FUNC_0(VAR_25->dbck)) {
   FUNC_5(VAR_21,
    "Could not get gpio dbck. Disable debounce\n");
   VAR_25->dbck_flag = 0;
  } else {
   FUNC_2(VAR_25->dbck);
  }
 }

 FUNC_20(VAR_20, VAR_25);

 FUNC_22(VAR_21);
 FUNC_23(VAR_21);

 if (VAR_25->is_mpuio)
  FUNC_18(VAR_25);

 FUNC_16(VAR_25);

 VAR_27 = FUNC_15(VAR_25, VAR_26);
 if (VAR_27) {
  FUNC_25(VAR_21);
  FUNC_21(VAR_21);
  if (VAR_25->dbck_flag)
   FUNC_3(VAR_25->dbck);
  return VAR_27;
 }

 FUNC_17(VAR_25);

 VAR_25->nb.notifier_call = VAR_9;
 FUNC_4(&VAR_25->nb);

 FUNC_24(VAR_21);

 return 0;
}
