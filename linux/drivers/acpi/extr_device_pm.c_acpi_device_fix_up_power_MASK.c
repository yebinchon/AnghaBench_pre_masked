
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int explicit_get; int power_resources; } ;
struct TYPE_4__ {scalar_t__ state; TYPE_1__ flags; } ;
struct acpi_device {TYPE_2__ power; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct acpi_device*,scalar_t__) ;

int FUNC_1(struct acpi_device *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1->power.flags.power_resources
     && !VAR_1->power.flags.explicit_get
     && VAR_1->power.state == VAR_0)
  VAR_2 = FUNC_0(VAR_1, VAR_0);

 return VAR_2;
}
