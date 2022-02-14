
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ power_resources; } ;
struct TYPE_4__ {int state; TYPE_1__ flags; } ;
struct acpi_device {TYPE_2__ power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*,int*) ;
 int FUNC_2 (struct acpi_device*,int) ;
 int FUNC_3 (struct acpi_device*,int) ;

int FUNC_4(struct acpi_device *VAR_2, int *VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (VAR_2->power.state == VAR_1) {
  VAR_5 = FUNC_0(VAR_2);
  if (!VAR_5 && VAR_3)
   *VAR_3 = VAR_2->power.state;

  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_4 == VAR_1) {
  VAR_4 = VAR_0;
  VAR_5 = FUNC_2(VAR_2, VAR_4);
  if (VAR_5)
   return VAR_5;
 } else {
  if (VAR_2->power.flags.power_resources) {




   VAR_5 = FUNC_3(VAR_2, VAR_4);
   if (VAR_5)
    return VAR_5;
  }
  VAR_2->power.state = VAR_4;
 }
 if (VAR_3)
  *VAR_3 = VAR_4;

 return 0;
}
