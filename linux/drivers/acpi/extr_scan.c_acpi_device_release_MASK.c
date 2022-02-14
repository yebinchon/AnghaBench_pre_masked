
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct acpi_device {int pnp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 struct acpi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct acpi_device *VAR_1 = FUNC_4(VAR_0);

 FUNC_2(VAR_1);
 FUNC_0(&VAR_1->pnp);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
}
