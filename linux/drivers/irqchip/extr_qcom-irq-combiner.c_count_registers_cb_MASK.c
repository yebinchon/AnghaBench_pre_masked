
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_resource {scalar_t__ type; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static acpi_status FUNC_0(struct acpi_resource *VAR_2, void *VAR_3)
{
 int *VAR_4 = VAR_3;

 if (VAR_2->type == VAR_0)
  ++(*VAR_4);
 return VAR_1;
}
