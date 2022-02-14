
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
struct acpi_gpio_info {scalar_t__ gpioint; } ;
struct acpi_device {int dummy; } ;
typedef int propname ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 struct acpi_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gpio_desc* FUNC_2 (struct gpio_desc*) ;
 struct gpio_desc* FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct gpio_desc*) ;
 int FUNC_5 (struct gpio_desc*) ;
 int FUNC_6 (struct acpi_device*,char const*) ;
 struct gpio_desc* FUNC_7 (struct acpi_device*,char*,unsigned int,struct acpi_gpio_info*) ;
 int FUNC_8 (int*,struct acpi_gpio_info*) ;
 int FUNC_9 (unsigned long*,struct acpi_gpio_info*) ;
 int FUNC_10 (struct device*,char*) ;
 char** VAR_4 ;
 int FUNC_11 (char*,int,char*,char const*,...) ;

struct gpio_desc *FUNC_12(struct device *VAR_5,
     const char *VAR_6,
     unsigned int VAR_7,
     enum gpiod_flags *VAR_8,
     unsigned long *VAR_9)
{
 struct acpi_device *VAR_10 = FUNC_0(VAR_5);
 struct acpi_gpio_info VAR_11;
 struct gpio_desc *VAR_12;
 char VAR_13[32];
 int VAR_14;


 for (VAR_14 = 0; VAR_14 < FUNC_1(VAR_4); VAR_14++) {
  if (VAR_6) {
   FUNC_11(VAR_13, sizeof(VAR_13), "%s-%s",
     VAR_6, VAR_4[VAR_14]);
  } else {
   FUNC_11(VAR_13, sizeof(VAR_13), "%s",
     VAR_4[VAR_14]);
  }

  VAR_12 = FUNC_7(VAR_10, VAR_13, VAR_7, &VAR_11);
  if (!FUNC_4(VAR_12))
   break;
  if (FUNC_5(VAR_12) == -VAR_1)
   return FUNC_2(VAR_12);
 }


 if (FUNC_4(VAR_12)) {
  if (!FUNC_6(VAR_10, VAR_6))
   return FUNC_3(-VAR_0);

  VAR_12 = FUNC_7(VAR_10, ((void*)0), VAR_7, &VAR_11);
  if (FUNC_4(VAR_12))
   return VAR_12;
 }

 if (VAR_11.gpioint &&
     (*VAR_8 == VAR_3 || *VAR_8 == VAR_2)) {
  FUNC_10(VAR_5, "refusing GpioInt() entry when doing GPIOD_OUT_* lookup\n");
  return FUNC_3(-VAR_0);
 }

 FUNC_8(VAR_8, &VAR_11);
 FUNC_9(VAR_9, &VAR_11);
 return VAR_12;
}
