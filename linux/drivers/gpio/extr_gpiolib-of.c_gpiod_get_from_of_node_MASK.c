
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device_node {int dummy; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 struct gpio_desc* FUNC_0 (int) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct gpio_desc*,char const*,unsigned long,int) ;
 int FUNC_3 (struct gpio_desc*) ;
 int FUNC_4 (struct gpio_desc*,char const*) ;
 struct gpio_desc* FUNC_5 (struct device_node*,char const*,int,int*) ;

struct gpio_desc *FUNC_6(struct device_node *VAR_11,
      const char *VAR_12, int VAR_13,
      enum gpiod_flags VAR_14,
      const char *VAR_15)
{
 unsigned long VAR_16 = VAR_3;
 struct gpio_desc *VAR_17;
 enum of_gpio_flags VAR_18;
 bool VAR_19 = 0;
 bool VAR_20 = 0;
 bool VAR_21 = 0;
 bool VAR_22 = 0;
 int VAR_23;

 VAR_17 = FUNC_5(VAR_11, VAR_12,
     VAR_13, &VAR_18);

 if (!VAR_17 || FUNC_1(VAR_17)) {
  return VAR_17;
 }

 VAR_19 = VAR_18 & VAR_7;
 VAR_20 = VAR_18 & VAR_9;
 VAR_21 = VAR_18 & VAR_8;
 VAR_22 = VAR_18 & VAR_10;

 VAR_23 = FUNC_4(VAR_17, VAR_15);
 if (VAR_23 == -VAR_0 && (VAR_14 & VAR_1))
  return VAR_17;
 if (VAR_23)
  return FUNC_0(VAR_23);

 if (VAR_19)
  VAR_16 |= VAR_2;

 if (VAR_20) {
  if (VAR_21)
   VAR_16 |= VAR_4;
  else
   VAR_16 |= VAR_5;
 }

 if (VAR_22)
  VAR_16 |= VAR_6;

 VAR_23 = FUNC_2(VAR_17, VAR_12, VAR_16, VAR_14);
 if (VAR_23 < 0) {
  FUNC_3(VAR_17);
  return FUNC_0(VAR_23);
 }

 return VAR_17;
}
