
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* label; int base; void* ngpio; int to_irq; int set; int get; int direction_output; int direction_input; struct device* parent; int owner; } ;
struct ts5500_priv {char const* hwirq; TYPE_2__ gpio_chip; int lock; void* pinout; } ;
struct resource {char const* start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
typedef enum ts5500_blocks { ____Placeholder_ts5500_blocks } ts5500_blocks ;
struct TYPE_3__ {int driver_data; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_2 (struct device*,char*,...) ;
 char* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,TYPE_2__*,struct ts5500_priv*) ;
 struct ts5500_priv* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int,int,char const*) ;
 int VAR_6 ;
 TYPE_1__* FUNC_7 (struct platform_device*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct ts5500_priv*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ,int) ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_14 (struct ts5500_priv*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_15)
{
 enum ts5500_blocks VAR_16 = FUNC_7(VAR_15)->driver_data;
 struct device *VAR_17 = &VAR_15->dev;
 const char *VAR_18 = FUNC_3(VAR_17);
 struct ts5500_priv *VAR_19;
 struct resource *VAR_20;
 unsigned long VAR_21;
 int VAR_22;

 VAR_20 = FUNC_8(VAR_15, VAR_4, 0);
 if (!VAR_20) {
  FUNC_2(VAR_17, "missing IRQ resource\n");
  return -VAR_1;
 }

 VAR_19 = FUNC_5(VAR_17, sizeof(struct ts5500_priv), VAR_3);
 if (!VAR_19)
  return -VAR_2;

 FUNC_9(VAR_15, VAR_19);
 VAR_19->hwirq = VAR_20->start;
 FUNC_10(&VAR_19->lock);

 VAR_19->gpio_chip.owner = VAR_5;
 VAR_19->gpio_chip.label = VAR_18;
 VAR_19->gpio_chip.parent = VAR_17;
 VAR_19->gpio_chip.direction_input = VAR_10;
 VAR_19->gpio_chip.direction_output = VAR_11;
 VAR_19->gpio_chip.get = VAR_9;
 VAR_19->gpio_chip.set = VAR_12;
 VAR_19->gpio_chip.to_irq = VAR_13;
 VAR_19->gpio_chip.base = -1;

 switch (VAR_16) {
 case 131:
  VAR_19->pinout = VAR_7;
  VAR_19->gpio_chip.ngpio = FUNC_0(VAR_7);

  if (!FUNC_6(VAR_17, 0x7a, 3, VAR_18)) {
   FUNC_2(VAR_17, "failed to request %s ports\n", VAR_18);
   return -VAR_0;
  }
  break;
 case 130:
  VAR_19->pinout = VAR_8;
  VAR_19->gpio_chip.ngpio = FUNC_0(VAR_8);

  if (!FUNC_6(VAR_17, 0x7e, 2, VAR_18)) {
   FUNC_2(VAR_17, "failed to request %s ports\n", VAR_18);
   return -VAR_0;
  }

  if (VAR_6)
   break;

  if (!FUNC_6(VAR_17, 0x7d, 1, VAR_18)) {
   FUNC_2(VAR_17, "failed to request %s 7D\n", VAR_18);
   return -VAR_0;
  }

  VAR_6 = 1;
  break;
 case 129:
 case 128:
  VAR_19->pinout = VAR_14;
  VAR_19->gpio_chip.ngpio = FUNC_0(VAR_14);

  if (!FUNC_6(VAR_17, 0x72, 2, VAR_18)) {
   FUNC_2(VAR_17, "failed to request %s ports\n", VAR_18);
   return -VAR_0;
  }

  if (!VAR_6) {
   if (!FUNC_6(VAR_17, 0x7d, 1, VAR_18)) {
    FUNC_2(VAR_17, "failed to request %s 7D\n", VAR_18);
    return -VAR_0;
   }

   VAR_6 = 1;
  }


  FUNC_11(&VAR_19->lock, VAR_21);
  FUNC_13(FUNC_1(4), 0x7d);
  FUNC_12(&VAR_19->lock, VAR_21);
  break;
 }

 VAR_22 = FUNC_4(VAR_17, &VAR_19->gpio_chip, VAR_19);
 if (VAR_22) {
  FUNC_2(VAR_17, "failed to register the gpio chip\n");
  return VAR_22;
 }

 VAR_22 = FUNC_14(VAR_19);
 if (VAR_22) {
  FUNC_2(VAR_17, "invalid interrupt %d\n", VAR_19->hwirq);
  return VAR_22;
 }

 return 0;
}
