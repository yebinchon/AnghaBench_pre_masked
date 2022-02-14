
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct acpi_gpio_info {int polarity; int triggering; int flags; scalar_t__ gpioint; } ;
struct acpi_device {int dummy; } ;
typedef int label ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 unsigned int FUNC_2 (int ,int ) ;
 struct gpio_desc* FUNC_3 (struct acpi_device*,int *,int,struct acpi_gpio_info*) ;
 int FUNC_4 (struct gpio_desc*,char*,unsigned long,int ) ;
 int FUNC_5 (struct gpio_desc*) ;
 unsigned int FUNC_6 (int) ;
 int FUNC_7 (int,unsigned int) ;
 int FUNC_8 (char*,int,char*,int) ;

int FUNC_9(struct acpi_device *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 for (VAR_7 = 0, VAR_6 = 0; VAR_6 <= VAR_5; VAR_7++) {
  struct acpi_gpio_info VAR_10;
  struct gpio_desc *VAR_11;

  VAR_11 = FUNC_3(VAR_4, ((void*)0), VAR_7, &VAR_10);


  if (FUNC_0(VAR_11) && FUNC_1(VAR_11) != -VAR_1)
   return FUNC_1(VAR_11);

  if (VAR_10.gpioint && VAR_6++ == VAR_5) {
   unsigned long VAR_12 = VAR_2;
   char VAR_13[32];
   int VAR_14;

   if (FUNC_0(VAR_11))
    return FUNC_1(VAR_11);

   VAR_14 = FUNC_5(VAR_11);
   if (VAR_14 < 0)
    return VAR_14;

   FUNC_8(VAR_13, sizeof(VAR_13), "GpioInt() %d", VAR_5);
   VAR_9 = FUNC_4(VAR_11, VAR_13, VAR_12, VAR_10.flags);
   if (VAR_9 < 0)
    return VAR_9;

   VAR_8 = FUNC_2(VAR_10.triggering,
         VAR_10.polarity);


   if (VAR_8 != VAR_3 &&
       VAR_8 != FUNC_6(VAR_14))
    FUNC_7(VAR_14, VAR_8);

   return VAR_14;
  }

 }
 return -VAR_0;
}
