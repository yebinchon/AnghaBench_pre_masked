
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cca_seen; } ;
struct acpi_device {TYPE_1__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

bool FUNC_1(struct acpi_device *VAR_1)
{
 if (!VAR_1)
  return 0;

 if (VAR_1->flags.cca_seen)
  return 1;






 if (!FUNC_0(VAR_0))
  return 1;

 return 0;
}
