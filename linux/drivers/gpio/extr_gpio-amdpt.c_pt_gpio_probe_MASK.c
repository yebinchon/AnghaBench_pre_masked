
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; int ngpio; int free; int request; int owner; } ;
struct pt_gpio_chip {scalar_t__ reg_base; TYPE_1__ gc; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_handle ;


 int FUNC_0 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ,struct acpi_device**) ;
 int FUNC_4 (TYPE_1__*,struct device*,int,scalar_t__,scalar_t__,int *,scalar_t__,int *,int ) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*) ;
 struct pt_gpio_chip* FUNC_7 (struct device*,int,int ) ;
 scalar_t__ FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (TYPE_1__*,struct pt_gpio_chip*) ;
 int FUNC_10 (struct platform_device*,struct pt_gpio_chip*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct acpi_device *VAR_15;
 acpi_handle VAR_16 = FUNC_0(VAR_14);
 struct pt_gpio_chip *VAR_17;
 int VAR_18 = 0;

 if (FUNC_3(VAR_16, &VAR_15)) {
  FUNC_6(VAR_14, "PT GPIO device node not found\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_7(VAR_14, sizeof(struct pt_gpio_chip), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 VAR_17->reg_base = FUNC_8(VAR_13, 0);
 if (FUNC_1(VAR_17->reg_base)) {
  FUNC_6(VAR_14, "Failed to map MMIO resource for PT GPIO.\n");
  return FUNC_2(VAR_17->reg_base);
 }

 VAR_18 = FUNC_4(&VAR_17->gc, VAR_14, 4,
    VAR_17->reg_base + VAR_6,
    VAR_17->reg_base + VAR_7, ((void*)0),
    VAR_17->reg_base + VAR_5, ((void*)0),
    VAR_0);
 if (VAR_18) {
  FUNC_6(VAR_14, "bgpio_init failed\n");
  return VAR_18;
 }

 VAR_17->gc.owner = VAR_10;
 VAR_17->gc.request = VAR_12;
 VAR_17->gc.free = VAR_11;
 VAR_17->gc.ngpio = VAR_9;



 VAR_18 = FUNC_9(&VAR_17->gc, VAR_17);
 if (VAR_18) {
  FUNC_6(VAR_14, "Failed to register GPIO lib\n");
  return VAR_18;
 }

 FUNC_10(VAR_13, VAR_17);


 FUNC_11(0, VAR_17->reg_base + VAR_8);
 FUNC_11(0, VAR_17->reg_base + VAR_4);

 FUNC_5(VAR_14, "PT GPIO driver loaded\n");
 return VAR_18;
}
