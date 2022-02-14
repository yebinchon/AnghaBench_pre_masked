
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {scalar_t__ handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct acpi_device *VAR_2)
{

 if (VAR_1)
  return -VAR_0;
 VAR_1 = VAR_2->handle;
 return 0;
}
