
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ functional; scalar_t__ present; } ;
struct acpi_device {TYPE_1__ status; } ;



bool FUNC_0(const struct acpi_device *VAR_0)
{
 return VAR_0->status.present || VAR_0->status.functional;
}
