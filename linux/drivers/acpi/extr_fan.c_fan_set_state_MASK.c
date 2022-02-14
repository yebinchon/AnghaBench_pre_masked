
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acpi_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct acpi_device *VAR_3, unsigned long VAR_4)
{
 if (VAR_4 != 0 && VAR_4 != 1)
  return -VAR_2;

 return FUNC_0(VAR_3,
         VAR_4 ? VAR_0 : VAR_1);
}
