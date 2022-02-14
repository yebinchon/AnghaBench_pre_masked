
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ power_resources; } ;
struct TYPE_5__ {int state; TYPE_1__ flags; } ;
struct TYPE_6__ {int initialized; } ;
struct acpi_device {TYPE_2__ power; TYPE_3__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acpi_device*,int) ;
 int FUNC_1 (struct acpi_device*,int*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*,int) ;

int FUNC_4(struct acpi_device *VAR_5)
{
 int VAR_6;
 int VAR_7;

 if (!VAR_5)
  return -VAR_3;

 VAR_5->power.state = VAR_2;
 if (!FUNC_2(VAR_5)) {
  VAR_5->flags.initialized = 0;
  return -VAR_4;
 }

 VAR_7 = FUNC_1(VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6 < VAR_1 && VAR_5->power.flags.power_resources) {

  VAR_7 = FUNC_3(VAR_5, VAR_6);
  if (VAR_7)
   return VAR_7;

  if (VAR_6 == VAR_0) {
   VAR_7 = FUNC_0(VAR_5, VAR_6);
   if (VAR_7)
    return VAR_7;
  }
 } else if (VAR_6 == VAR_2) {






  VAR_6 = VAR_0;
 }
 VAR_5->power.state = VAR_6;
 return 0;
}
