
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct acpi_resource {int dummy; } ;


 scalar_t__ FUNC_0 (struct acpi_resource*,int ,struct resource*) ;
 int FUNC_1 (struct resource*,int) ;

__attribute__((used)) static int FUNC_2(struct acpi_resource *VAR_0, void *VAR_1)
{
 int *VAR_2 = VAR_1;
 struct resource VAR_3;

 if (*VAR_2 <= 0 && FUNC_0(VAR_0, 0, &VAR_3))
  *VAR_2 = FUNC_1(&VAR_3, 1);

 return 1;
}
