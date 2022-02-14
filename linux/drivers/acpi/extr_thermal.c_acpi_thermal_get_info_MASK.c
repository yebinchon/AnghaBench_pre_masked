
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cooling_mode; } ;
struct acpi_thermal {scalar_t__ polling_frequency; TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_thermal*) ;
 int FUNC_1 (struct acpi_thermal*) ;
 int FUNC_2 (struct acpi_thermal*) ;
 int FUNC_3 (struct acpi_thermal*) ;
 int FUNC_4 (struct acpi_thermal*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct acpi_thermal *VAR_3)
{
 int VAR_4 = 0;


 if (!VAR_3)
  return -VAR_1;

 FUNC_0(VAR_3);


 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_4(VAR_3, VAR_0);
 if (!VAR_4)
  VAR_3->flags.cooling_mode = 1;


 if (VAR_2)
  VAR_3->polling_frequency = VAR_2;
 else
  FUNC_1(VAR_3);

 return 0;
}
