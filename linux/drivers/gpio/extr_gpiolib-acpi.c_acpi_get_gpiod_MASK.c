
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct gpio_chip {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gpio_desc* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int *) ;
 int VAR_2 ;
 struct gpio_chip* FUNC_3 (int ,int ) ;
 struct gpio_desc* FUNC_4 (struct gpio_chip*,int) ;

__attribute__((used)) static struct gpio_desc *FUNC_5(char *VAR_3, int VAR_4)
{
 struct gpio_chip *VAR_5;
 acpi_handle VAR_6;
 acpi_status VAR_7;

 VAR_7 = FUNC_2(((void*)0), VAR_3, &VAR_6);
 if (FUNC_0(VAR_7))
  return FUNC_1(-VAR_0);

 VAR_5 = FUNC_3(VAR_6, VAR_2);
 if (!VAR_5)
  return FUNC_1(-VAR_1);

 return FUNC_4(VAR_5, VAR_4);
}
