
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int flags; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 int FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*,int) ;
 int FUNC_2 (struct gpio_desc*,char*) ;
 int FUNC_3 (struct gpio_desc*,unsigned long) ;
 int FUNC_4 (struct gpio_desc*,char*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct gpio_desc *VAR_16, const char *VAR_17,
  unsigned long VAR_18, enum gpiod_flags VAR_19)
{
 int VAR_20;

 if (VAR_18 & VAR_10)
  FUNC_6(VAR_1, &VAR_16->flags);

 if (VAR_18 & VAR_11)
  FUNC_6(VAR_2, &VAR_16->flags);
 else if (VAR_19 & VAR_9) {






  FUNC_6(VAR_2, &VAR_16->flags);
  FUNC_4(VAR_16,
      "enforced open drain please flag it properly in DT/ACPI DSDT/board file\n");
 }

 if (VAR_18 & VAR_12)
  FUNC_6(VAR_3, &VAR_16->flags);

 if ((VAR_18 & VAR_14) && (VAR_18 & VAR_13)) {
  FUNC_2(VAR_16,
     "both pull-up and pull-down enabled, invalid configuration\n");
  return -VAR_0;
 }

 if (VAR_18 & VAR_14)
  FUNC_6(VAR_5, &VAR_16->flags);
 else if (VAR_18 & VAR_13)
  FUNC_6(VAR_4, &VAR_16->flags);

 VAR_20 = FUNC_3(VAR_16, (VAR_18 & VAR_15));
 if (VAR_20 < 0)
  return VAR_20;


 if (!(VAR_19 & VAR_7)) {
  FUNC_5("no flags found for %s\n", VAR_17);
  return 0;
 }


 if (VAR_19 & VAR_6)
  VAR_20 = FUNC_1(VAR_16,
    !!(VAR_19 & VAR_8));
 else
  VAR_20 = FUNC_0(VAR_16);

 return VAR_20;
}
