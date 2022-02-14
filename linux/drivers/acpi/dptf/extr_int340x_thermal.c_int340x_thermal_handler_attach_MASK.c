
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device_id {scalar_t__ driver_data; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_device*,int *) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_3,
     const struct acpi_device_id *VAR_4)
{
 if (FUNC_0(VAR_0))
  FUNC_1(VAR_3, ((void*)0));

 else if (FUNC_0(VAR_1) &&
   VAR_4->driver_data == VAR_2)
  FUNC_1(VAR_3, ((void*)0));
 return 1;
}
