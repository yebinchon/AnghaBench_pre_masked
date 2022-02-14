
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_device_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ of_compatible; } ;
struct acpi_device {TYPE_1__ data; } ;


 int FUNC_0 (struct acpi_device*) ;

__attribute__((used)) static int FUNC_1(struct acpi_device *VAR_0,
          const struct acpi_device_id *VAR_1)
{




 if (VAR_0->data.of_compatible)
  FUNC_0(VAR_0);

 return 1;
}
