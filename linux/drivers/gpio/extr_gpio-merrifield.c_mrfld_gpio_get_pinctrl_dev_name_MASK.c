
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrfld_gpio {int dev; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 struct acpi_device* FUNC_0 (char*,int *,int) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 char* FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static const char *FUNC_4(struct mrfld_gpio *VAR_1)
{
 struct acpi_device *VAR_2;
 const char *VAR_3;

 VAR_2 = FUNC_0("INTC1002", ((void*)0), -1);
 if (VAR_2) {
  VAR_3 = FUNC_3(VAR_1->dev, FUNC_1(VAR_2), VAR_0);
  FUNC_2(VAR_2);
 } else {
  VAR_3 = "pinctrl-merrifield";
 }

 return VAR_3;
}
