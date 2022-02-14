
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int ejectable; } ;
struct acpi_device {int handle; int dev; TYPE_3__ flags; int driver; TYPE_2__* handler; } ;
typedef size_t ssize_t ;
typedef scalar_t__ acpi_status ;
typedef int acpi_object_type ;
struct TYPE_4__ {int enabled; } ;
struct TYPE_5__ {TYPE_1__ hotplug; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct acpi_device*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct acpi_device* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_7, struct device_attribute *VAR_8,
  const char *VAR_9, size_t VAR_10)
{
 struct acpi_device *VAR_11 = FUNC_7(VAR_7);
 acpi_object_type VAR_12;
 acpi_status VAR_13;

 if (!VAR_10 || VAR_9[0] != '1')
  return -VAR_4;

 if ((!VAR_11->handler || !VAR_11->handler->hotplug.enabled)
     && !VAR_11->driver)
  return -VAR_5;

 VAR_13 = FUNC_3(VAR_11->handle, &VAR_12);
 if (FUNC_0(VAR_13) || !VAR_11->flags.ejectable)
  return -VAR_5;

 FUNC_5(&VAR_11->dev);
 VAR_13 = FUNC_4(VAR_11, VAR_0);
 if (FUNC_1(VAR_13))
  return VAR_10;

 FUNC_6(&VAR_11->dev);
 FUNC_2(VAR_11->handle, VAR_0,
     VAR_1, ((void*)0));
 return VAR_13 == VAR_2 ? -VAR_6 : -VAR_3;
}
