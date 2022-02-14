
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int * name; } ;
struct resource_win {struct resource res; } ;
struct acpi_resource {int dummy; } ;


 scalar_t__ FUNC_0 (struct acpi_resource*,struct resource_win*) ;
 scalar_t__ FUNC_1 (struct acpi_resource*,struct resource*) ;

__attribute__((used)) static int FUNC_2(struct acpi_resource *VAR_0, void *VAR_1)
{
 struct resource *VAR_2 = VAR_1;
 struct resource_win VAR_3;
 struct resource *VAR_4 = &(VAR_3.res);

 if (FUNC_1(VAR_0, VAR_4) ||
     FUNC_0(VAR_0, &VAR_3)) {
  *VAR_2 = *VAR_4;
  VAR_2->name = ((void*)0);
 }

 return 1;
}
