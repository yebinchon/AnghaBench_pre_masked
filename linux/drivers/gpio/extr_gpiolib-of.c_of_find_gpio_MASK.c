
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device {int of_node; } ;
typedef int prop_name ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;


 unsigned int FUNC_0 (char**) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct gpio_desc*) ;
 char** VAR_13 ;
 struct gpio_desc* FUNC_3 (struct device*,char const*,int*) ;
 struct gpio_desc* FUNC_4 (struct device*,char const*,int*) ;
 struct gpio_desc* FUNC_5 (struct device*,char const*,unsigned int,unsigned long*) ;
 struct gpio_desc* FUNC_6 (struct device*,char const*,int*) ;
 struct gpio_desc* FUNC_7 (int ,char*,unsigned int,int*) ;
 int FUNC_8 (char*,int,char*,char const*,...) ;

struct gpio_desc *FUNC_9(struct device *VAR_14, const char *VAR_15,
          unsigned int VAR_16, unsigned long *VAR_17)
{
 char VAR_18[32];
 enum of_gpio_flags VAR_19;
 struct gpio_desc *VAR_20;
 unsigned int VAR_21;


 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_13); VAR_21++) {
  if (VAR_15)
   FUNC_8(VAR_18, sizeof(VAR_18), "%s-%s", VAR_15,
     VAR_13[VAR_21]);
  else
   FUNC_8(VAR_18, sizeof(VAR_18), "%s",
     VAR_13[VAR_21]);

  VAR_20 = FUNC_7(VAR_14->of_node, VAR_18, VAR_16,
      &VAR_19);

  if (!FUNC_1(VAR_20) || FUNC_2(VAR_20) != -VAR_0)
   break;
 }

 if (FUNC_1(VAR_20) && FUNC_2(VAR_20) == -VAR_0) {

  VAR_20 = FUNC_6(VAR_14, VAR_15, &VAR_19);
 }

 if (FUNC_1(VAR_20) && FUNC_2(VAR_20) == -VAR_0) {

  VAR_20 = FUNC_5(VAR_14, VAR_15, VAR_16, VAR_17);
  if (!FUNC_1(VAR_20))
   return VAR_20;
 }

 if (FUNC_1(VAR_20) && FUNC_2(VAR_20) == -VAR_0) {

  VAR_20 = FUNC_4(VAR_14, VAR_15, &VAR_19);
 }

 if (FUNC_1(VAR_20) && FUNC_2(VAR_20) == -VAR_0)
  VAR_20 = FUNC_3(VAR_14, VAR_15, &VAR_19);

 if (FUNC_1(VAR_20))
  return VAR_20;

 if (VAR_19 & VAR_7)
  *VAR_17 |= VAR_1;

 if (VAR_19 & VAR_11) {
  if (VAR_19 & VAR_8)
   *VAR_17 |= VAR_2;
  else
   *VAR_17 |= VAR_3;
 }

 if (VAR_19 & VAR_12)
  *VAR_17 |= VAR_6;

 if (VAR_19 & VAR_10)
  *VAR_17 |= VAR_5;
 if (VAR_19 & VAR_9)
  *VAR_17 |= VAR_4;

 return VAR_20;
}
