
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device_id {void const* data; } ;
struct device {TYPE_1__* driver; } ;
struct acpi_device {int dummy; } ;
struct TYPE_2__ {int of_match_table; } ;


 struct acpi_device* FUNC_0 (struct device const*) ;
 int FUNC_1 (struct acpi_device*,int ,struct of_device_id const**) ;

__attribute__((used)) static const void *FUNC_2(const struct device *VAR_0)
{
 struct acpi_device *VAR_1 = FUNC_0(VAR_0);
 const struct of_device_id *VAR_2 = ((void*)0);

 if (!FUNC_1(VAR_1, VAR_0->driver->of_match_table, &VAR_2))
  return ((void*)0);

 return VAR_2->data;
}
