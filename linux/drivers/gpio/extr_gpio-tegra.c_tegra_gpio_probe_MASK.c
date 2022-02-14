
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {char* name; int irq_set_wake; int irq_shutdown; int irq_set_type; int irq_unmask; int irq_mask; int irq_ack; } ;
struct TYPE_12__ {char* label; int ngpio; int set_config; int of_node; TYPE_2__* parent; scalar_t__ base; int to_irq; int get_direction; int set; int direction_output; int get; int direction_input; int free; int request; } ;
struct tegra_gpio_info {int bank_count; struct tegra_gpio_bank* bank_info; TYPE_3__ ic; int irq_domain; TYPE_7__ gc; int regs; TYPE_1__* soc; TYPE_2__* dev; } ;
struct tegra_gpio_bank {unsigned int bank; int irq; int * dbc_lock; int * lvl_lock; struct tegra_gpio_info* tgi; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_9__ {scalar_t__ debounce_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (struct tegra_gpio_info*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,TYPE_7__*,struct tegra_gpio_info*) ;
 struct tegra_gpio_bank* FUNC_6 (TYPE_2__*,int,int,int ) ;
 struct tegra_gpio_info* FUNC_7 (TYPE_2__*,int,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int VAR_3 ;
 int FUNC_9 (int ,unsigned int) ;
 int FUNC_10 (int ,int,int *,int *) ;
 int FUNC_11 (int ) ;
 int VAR_4 ;
 int FUNC_12 (int,int ,struct tegra_gpio_bank*) ;
 int FUNC_13 (int,TYPE_3__*,int ) ;
 int FUNC_14 (int,struct tegra_gpio_bank*) ;
 TYPE_1__* FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (struct platform_device*,unsigned int) ;
 int FUNC_17 (struct platform_device*) ;
 int FUNC_18 (struct platform_device*,struct tegra_gpio_info*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (unsigned int,unsigned int,int ) ;
 int FUNC_21 (struct tegra_gpio_info*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_22 (struct tegra_gpio_info*,int,int ) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_21)
{
 struct tegra_gpio_info *VAR_22;
 struct tegra_gpio_bank *VAR_23;
 unsigned int VAR_24, VAR_25, VAR_26;
 int VAR_27;

 VAR_22 = FUNC_7(&VAR_21->dev, sizeof(*VAR_22), VAR_2);
 if (!VAR_22)
  return -VAR_0;

 VAR_22->soc = FUNC_15(&VAR_21->dev);
 VAR_22->dev = &VAR_21->dev;

 VAR_27 = FUNC_17(VAR_21);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_22->bank_count = VAR_27;

 if (!VAR_22->bank_count) {
  FUNC_4(&VAR_21->dev, "Missing IRQ resource\n");
  return -VAR_0;
 }

 VAR_22->gc.label = "tegra-gpio";
 VAR_22->gc.request = VAR_17;
 VAR_22->gc.free = VAR_7;
 VAR_22->gc.direction_input = VAR_5;
 VAR_22->gc.get = VAR_8;
 VAR_22->gc.direction_output = VAR_6;
 VAR_22->gc.set = VAR_18;
 VAR_22->gc.get_direction = VAR_9;
 VAR_22->gc.to_irq = VAR_20;
 VAR_22->gc.base = 0;
 VAR_22->gc.ngpio = VAR_22->bank_count * 32;
 VAR_22->gc.parent = &VAR_21->dev;
 VAR_22->gc.of_node = VAR_21->dev.of_node;

 VAR_22->ic.name = "GPIO";
 VAR_22->ic.irq_ack = VAR_10;
 VAR_22->ic.irq_mask = VAR_12;
 VAR_22->ic.irq_unmask = VAR_16;
 VAR_22->ic.irq_set_type = VAR_13;
 VAR_22->ic.irq_shutdown = VAR_15;




 FUNC_18(VAR_21, VAR_22);

 if (VAR_22->soc->debounce_supported)
  VAR_22->gc.set_config = VAR_19;

 VAR_22->bank_info = FUNC_6(&VAR_21->dev, VAR_22->bank_count,
          sizeof(*VAR_22->bank_info), VAR_2);
 if (!VAR_22->bank_info)
  return -VAR_1;

 VAR_22->irq_domain = FUNC_10(VAR_21->dev.of_node,
      VAR_22->gc.ngpio,
      &VAR_4, ((void*)0));
 if (!VAR_22->irq_domain)
  return -VAR_0;

 for (VAR_25 = 0; VAR_25 < VAR_22->bank_count; VAR_25++) {
  VAR_27 = FUNC_16(VAR_21, VAR_25);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_23 = &VAR_22->bank_info[VAR_25];
  VAR_23->bank = VAR_25;
  VAR_23->irq = VAR_27;
  VAR_23->tgi = VAR_22;
 }

 VAR_22->regs = FUNC_8(VAR_21, 0);
 if (FUNC_2(VAR_22->regs))
  return FUNC_3(VAR_22->regs);

 for (VAR_25 = 0; VAR_25 < VAR_22->bank_count; VAR_25++) {
  for (VAR_26 = 0; VAR_26 < 4; VAR_26++) {
   int VAR_28 = FUNC_20(VAR_25, VAR_26, 0);

   FUNC_22(VAR_22, 0x00, FUNC_1(VAR_22, VAR_28));
  }
 }

 VAR_27 = FUNC_5(&VAR_21->dev, &VAR_22->gc, VAR_22);
 if (VAR_27 < 0) {
  FUNC_11(VAR_22->irq_domain);
  return VAR_27;
 }

 for (VAR_24 = 0; VAR_24 < VAR_22->gc.ngpio; VAR_24++) {
  int VAR_29 = FUNC_9(VAR_22->irq_domain, VAR_24);


  VAR_23 = &VAR_22->bank_info[FUNC_0(VAR_24)];

  FUNC_14(VAR_29, VAR_23);
  FUNC_13(VAR_29, &VAR_22->ic, VAR_3);
 }

 for (VAR_25 = 0; VAR_25 < VAR_22->bank_count; VAR_25++) {
  VAR_23 = &VAR_22->bank_info[VAR_25];

  FUNC_12(VAR_23->irq,
       VAR_11, VAR_23);

  for (VAR_26 = 0; VAR_26 < 4; VAR_26++) {
   FUNC_19(&VAR_23->lvl_lock[VAR_26]);
   FUNC_19(&VAR_23->dbc_lock[VAR_26]);
  }
 }

 FUNC_21(VAR_22);

 return 0;
}
