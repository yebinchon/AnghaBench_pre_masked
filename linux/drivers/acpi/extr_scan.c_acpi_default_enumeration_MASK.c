
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enumeration_by_parent; } ;
struct acpi_device {TYPE_1__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_device*,int *) ;
 int FUNC_1 (struct acpi_device*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,struct acpi_device*) ;

__attribute__((used)) static void FUNC_3(struct acpi_device *VAR_2)
{




 if (!VAR_2->flags.enumeration_by_parent) {
  FUNC_0(VAR_2, ((void*)0));
  FUNC_1(VAR_2);
 } else {
  FUNC_2(&VAR_1,
          VAR_0, VAR_2);
 }
}
