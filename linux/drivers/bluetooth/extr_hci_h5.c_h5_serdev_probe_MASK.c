
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {TYPE_1__* driver; } ;
struct serdev_device {struct device dev; } ;
struct h5_vnd {scalar_t__ acpi_gpio_map; } ;
struct TYPE_4__ {struct serdev_device* serdev; int flags; } ;
struct h5 {char* id; TYPE_2__ serdev_hu; void* device_wake_gpio; void* enable_gpio; struct h5_vnd const* vnd; TYPE_2__* hu; } ;
struct acpi_device_id {scalar_t__ id; scalar_t__ driver_data; } ;
struct TYPE_3__ {int acpi_match_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 struct acpi_device_id* FUNC_2 (int ,struct device*) ;
 int FUNC_3 (struct device*,scalar_t__) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 struct h5* FUNC_5 (struct device*,int,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct device*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (struct serdev_device*,struct h5*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct serdev_device *VAR_6)
{
 const struct acpi_device_id *VAR_7;
 struct device *VAR_8 = &VAR_6->dev;
 struct h5 *VAR_9;

 VAR_9 = FUNC_5(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_9(VAR_4, &VAR_9->serdev_hu.flags);

 VAR_9->hu = &VAR_9->serdev_hu;
 VAR_9->serdev_hu.serdev = VAR_6;
 FUNC_8(VAR_6, VAR_9);

 if (FUNC_6(VAR_8)) {
  VAR_7 = FUNC_2(VAR_8->driver->acpi_match_table, VAR_8);
  if (!VAR_7)
   return -VAR_0;

  VAR_9->vnd = (const struct h5_vnd *)VAR_7->driver_data;
  VAR_9->id = (char *)VAR_7->id;

  if (VAR_9->vnd->acpi_gpio_map)
   FUNC_3(VAR_8,
             VAR_9->vnd->acpi_gpio_map);
 }

 VAR_9->enable_gpio = FUNC_4(VAR_8, "enable", VAR_3);
 if (FUNC_0(VAR_9->enable_gpio))
  return FUNC_1(VAR_9->enable_gpio);

 VAR_9->device_wake_gpio = FUNC_4(VAR_8, "device-wake",
             VAR_3);
 if (FUNC_0(VAR_9->device_wake_gpio))
  return FUNC_1(VAR_9->device_wake_gpio);

 return FUNC_7(&VAR_9->serdev_hu, &VAR_5);
}
