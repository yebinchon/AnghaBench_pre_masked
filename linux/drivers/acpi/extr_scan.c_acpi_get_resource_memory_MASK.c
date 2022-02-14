
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct acpi_resource {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct acpi_resource*,struct resource*) ;

__attribute__((used)) static acpi_status FUNC_1(struct acpi_resource *VAR_2,
         void *VAR_3)
{
 struct resource *VAR_4 = VAR_3;

 if (FUNC_0(VAR_2, VAR_4))
  return VAR_0;

 return VAR_1;
}
