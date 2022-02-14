
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_nfit_desc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_nfit_desc*) ;
 scalar_t__ FUNC_1 (struct acpi_nfit_desc*) ;
 scalar_t__ FUNC_2 (struct acpi_nfit_desc*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct acpi_nfit_desc *VAR_2)
{
 int VAR_3;

 if (FUNC_1(VAR_2))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 < 0 && VAR_3 != -VAR_1)
  return VAR_3;

 if (FUNC_2(VAR_2))
  FUNC_3(VAR_2->dev, "Failed to process ARS records\n");

 return VAR_3;
}
