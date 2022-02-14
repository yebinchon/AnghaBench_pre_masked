
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_resource {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct acpi_resource *VAR_1, void *VAR_2)
{
 bool *VAR_3 = VAR_2;

 if (VAR_1->type != VAR_0)
  return 1;

 *VAR_3 = 1;


 return -1;
}
