
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ configurable_cap; } ;
struct acpi_power_meter_resource {TYPE_2__ caps; TYPE_1__* acpi_dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct acpi_power_meter_resource*) ;
 int FUNC_3 (struct acpi_power_meter_resource*,int ) ;
 int FUNC_4 (struct acpi_power_meter_resource*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(struct acpi_power_meter_resource *VAR_9)
{
 int VAR_10 = 0;

 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9->caps.flags & VAR_1) {
  VAR_10 = FUNC_3(VAR_9, VAR_3);
  if (VAR_10)
   goto error;
 }

 if (VAR_9->caps.flags & VAR_0) {
  if (!FUNC_0()) {
   FUNC_1(&VAR_9->acpi_dev->dev,
     "Ignoring unsafe software power cap!\n");
   goto skip_unsafe_cap;
  }

  if (VAR_9->caps.configurable_cap)
   VAR_10 = FUNC_3(VAR_9, VAR_7);
  else
   VAR_10 = FUNC_3(VAR_9, VAR_6);

  if (VAR_10)
   goto error;

  VAR_10 = FUNC_3(VAR_9, VAR_5);
  if (VAR_10)
   goto error;
 }

skip_unsafe_cap:
 if (VAR_9->caps.flags & VAR_2) {
  VAR_10 = FUNC_3(VAR_9, VAR_8);
  if (VAR_10)
   goto error;
 }

 VAR_10 = FUNC_3(VAR_9, VAR_4);
 if (VAR_10)
  goto error;

 return VAR_10;
error:
 FUNC_4(VAR_9);
 return VAR_10;
}
