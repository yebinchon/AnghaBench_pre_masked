
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long value; } ;
union acpi_object {TYPE_2__ integer; int member_0; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {unsigned long max_cap; unsigned long min_cap; } ;
struct acpi_power_meter_resource {unsigned long cap; int lock; TYPE_3__* acpi_dev; TYPE_1__ caps; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct acpi_device {struct acpi_power_meter_resource* driver_data; } ;
typedef int ssize_t ;
typedef int acpi_status ;
struct TYPE_6__ {int handle; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_2 (unsigned long,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,struct acpi_object_list*,unsigned long long*) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct acpi_device* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct acpi_device *VAR_7 = FUNC_7(VAR_3);
 struct acpi_power_meter_resource *VAR_8 = VAR_7->driver_data;
 union acpi_object VAR_9 = { VAR_0 };
 struct acpi_object_list VAR_10 = { 1, &VAR_9 };
 int VAR_11;
 unsigned long VAR_12;
 unsigned long long VAR_13;
 acpi_status VAR_14;

 VAR_11 = FUNC_4(VAR_5, 10, &VAR_12);
 if (VAR_11)
  return VAR_11;

 VAR_12 = FUNC_2(VAR_12, 1000);
 if (VAR_12 > VAR_8->caps.max_cap || VAR_12 < VAR_8->caps.min_cap)
  return -VAR_2;
 VAR_9 = VAR_12;

 FUNC_5(&VAR_8->lock);
 VAR_14 = FUNC_3(VAR_8->acpi_dev->handle, "_SHL",
           &VAR_10, &VAR_13);
 if (!FUNC_1(VAR_14))
  VAR_8->cap = VAR_12;
 FUNC_6(&VAR_8->lock);

 if (FUNC_1(VAR_14)) {
  FUNC_0((VAR_1, VAR_14, "Evaluating _SHL"));
  return -VAR_2;
 }


 if (VAR_13)
  return -VAR_2;

 return VAR_6;
}
