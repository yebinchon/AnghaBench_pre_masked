
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct lpc_ich_info {int gpio_version; int use_gpio; } ;
struct TYPE_14__ {scalar_t__ ngpio; scalar_t__ base; } ;
struct TYPE_13__ {TYPE_3__ chip; struct resource* pm_base; TYPE_1__* desc; int use_gpio; struct resource* gpio_base; int lock; struct device* dev; } ;
struct TYPE_12__ {int uses_gpe0; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 struct lpc_ich_info* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_6 (struct device*,struct resource*,int ,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_2__ VAR_11 ;
 TYPE_1__ VAR_12 ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct resource*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct lpc_ich_info *VAR_15 = FUNC_1(VAR_14);
 struct resource *VAR_16, *VAR_17;
 int VAR_18;

 if (!VAR_15)
  return -VAR_0;

 switch (VAR_15->gpio_version) {
 case 134:
  VAR_11.desc = &VAR_5;
  break;
 case 131:
  VAR_11.desc = &VAR_12;
  break;
 case 130:
  VAR_11.desc = &VAR_8;
  break;
 case 129:
  VAR_11.desc = &VAR_9;
  break;
 case 128:
  VAR_11.desc = &VAR_10;
  break;
 case 132:
  VAR_11.desc = &VAR_7;
  break;
 case 133:
  VAR_11.desc = &VAR_6;
  break;
 case 135:
  VAR_11.desc = &VAR_4;
  break;
 default:
  return -VAR_0;
 }

 VAR_11.dev = VAR_14;
 FUNC_10(&VAR_11.lock);

 VAR_16 = FUNC_8(VAR_13, VAR_3, VAR_2);
 VAR_18 = FUNC_6(VAR_14, VAR_16, VAR_13->name,
     VAR_15->use_gpio);
 if (VAR_18)
  return VAR_18;

 VAR_11.gpio_base = VAR_16;
 VAR_11.use_gpio = VAR_15->use_gpio;






 if (!VAR_11.desc->uses_gpe0)
  goto init;

 VAR_17 = FUNC_8(VAR_13, VAR_3, VAR_1);
 if (!VAR_17) {
  FUNC_3(VAR_14, "ACPI BAR is unavailable, GPI 0 - 15 unavailable\n");
  goto init;
 }

 if (!FUNC_4(VAR_14, VAR_17->start, FUNC_9(VAR_17),
     VAR_13->name)) {
  FUNC_3(VAR_14, "ACPI BAR is busy, GPI 0 - 15 unavailable\n");
  goto init;
 }

 VAR_11.pm_base = VAR_17;

init:
 FUNC_7(&VAR_11.chip);
 VAR_18 = FUNC_5(&VAR_11.chip, ((void*)0));
 if (VAR_18) {
  FUNC_0(VAR_14, "Failed to register GPIOs\n");
  return VAR_18;
 }

 FUNC_2(VAR_14, "GPIO from %d to %d\n", VAR_11.chip.base,
   VAR_11.chip.base + VAR_11.chip.ngpio - 1);

 return 0;
}
