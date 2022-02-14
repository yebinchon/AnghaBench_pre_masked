
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int win ;
struct resource {int dummy; } ;
struct resource_win {struct resource res; } ;
struct acpi_resource {int dummy; } ;


 scalar_t__ FUNC_0 (struct acpi_resource*,struct resource_win*) ;
 scalar_t__ FUNC_1 (struct acpi_resource*,struct resource_win*) ;
 scalar_t__ FUNC_2 (struct acpi_resource*,struct resource*) ;
 int FUNC_3 (struct resource_win*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct acpi_resource *VAR_0, void *VAR_1)
{
 struct resource_win VAR_2;
 struct resource *VAR_3 = &VAR_2.res;

 FUNC_3(&VAR_2, 0, sizeof(VAR_2));

 return !(FUNC_2(VAR_0, VAR_3)
        || FUNC_0(VAR_0, &VAR_2)
        || FUNC_1(VAR_0, &VAR_2));
}
