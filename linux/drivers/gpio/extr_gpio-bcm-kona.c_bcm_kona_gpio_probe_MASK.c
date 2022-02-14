
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {int dummy; } ;
struct gpio_chip {int ngpio; int of_node; } ;
struct bcm_kona_gpio_bank {int id; scalar_t__ irq; struct bcm_kona_gpio* kona_gpio; } ;
struct bcm_kona_gpio {int num_bank; int irq_domain; int lock; struct bcm_kona_gpio_bank* banks; int reg_base; struct platform_device* pdev; struct gpio_chip gpio_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct bcm_kona_gpio*) ;
 int VAR_9 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct gpio_chip*,struct bcm_kona_gpio*) ;
 struct bcm_kona_gpio_bank* FUNC_5 (struct device*,int,int,int ) ;
 struct bcm_kona_gpio* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (int ,int,int *,struct bcm_kona_gpio*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,int ,struct bcm_kona_gpio_bank*) ;
 int FUNC_11 (int ) ;
 struct of_device_id* FUNC_12 (int ,struct device*) ;
 scalar_t__ FUNC_13 (struct platform_device*,int) ;
 int FUNC_14 (struct platform_device*,struct bcm_kona_gpio*) ;
 int FUNC_15 (int *) ;
 struct gpio_chip VAR_10 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 const struct of_device_id *VAR_13;
 struct bcm_kona_gpio_bank *VAR_14;
 struct bcm_kona_gpio *VAR_15;
 struct gpio_chip *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_13 = FUNC_12(VAR_8, VAR_12);
 if (!VAR_13) {
  FUNC_2(VAR_12, "Failed to find gpio controller\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_6(VAR_12, sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  return -VAR_2;

 VAR_15->gpio_chip = VAR_10;
 VAR_16 = &VAR_15->gpio_chip;
 VAR_15->num_bank = FUNC_11(VAR_12->of_node);
 if (VAR_15->num_bank == 0) {
  FUNC_2(VAR_12, "Couldn't determine # GPIO banks\n");
  return -VAR_1;
 }
 if (VAR_15->num_bank > VAR_5) {
  FUNC_2(VAR_12, "Too many GPIO banks configured (max=%d)\n",
   VAR_5);
  return -VAR_3;
 }
 VAR_15->banks = FUNC_5(VAR_12,
     VAR_15->num_bank,
     sizeof(*VAR_15->banks),
     VAR_4);
 if (!VAR_15->banks)
  return -VAR_2;

 VAR_15->pdev = VAR_11;
 FUNC_14(VAR_11, VAR_15);
 VAR_16->of_node = VAR_12->of_node;
 VAR_16->ngpio = VAR_15->num_bank * VAR_6;

 VAR_15->irq_domain = FUNC_8(VAR_12->of_node,
            VAR_16->ngpio,
            &VAR_9,
            VAR_15);
 if (!VAR_15->irq_domain) {
  FUNC_2(VAR_12, "Couldn't allocate IRQ domain\n");
  return -VAR_3;
 }

 VAR_15->reg_base = FUNC_7(VAR_11, 0);
 if (FUNC_0(VAR_15->reg_base)) {
  VAR_17 = -VAR_3;
  goto err_irq_domain;
 }

 for (VAR_18 = 0; VAR_18 < VAR_15->num_bank; VAR_18++) {
  VAR_14 = &VAR_15->banks[VAR_18];
  VAR_14->id = VAR_18;
  VAR_14->irq = FUNC_13(VAR_11, VAR_18);
  VAR_14->kona_gpio = VAR_15;
  if (VAR_14->irq < 0) {
   FUNC_2(VAR_12, "Couldn't get IRQ for bank %d", VAR_18);
   VAR_17 = -VAR_1;
   goto err_irq_domain;
  }
 }

 FUNC_3(&VAR_11->dev, "Setting up Kona GPIO\n");

 FUNC_1(VAR_15);

 VAR_17 = FUNC_4(VAR_12, VAR_16, VAR_15);
 if (VAR_17 < 0) {
  FUNC_2(VAR_12, "Couldn't add GPIO chip -- %d\n", VAR_17);
  goto err_irq_domain;
 }
 for (VAR_18 = 0; VAR_18 < VAR_15->num_bank; VAR_18++) {
  VAR_14 = &VAR_15->banks[VAR_18];
  FUNC_10(VAR_14->irq,
       VAR_7,
       VAR_14);
 }

 FUNC_15(&VAR_15->lock);

 return 0;

err_irq_domain:
 FUNC_9(VAR_15->irq_domain);

 return VAR_17;
}
