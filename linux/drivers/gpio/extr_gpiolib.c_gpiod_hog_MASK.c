
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int flags; } ;
struct gpio_chip {int label; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct gpio_desc*) ;
 struct gpio_desc* FUNC_4 (struct gpio_chip*,int,char const*,unsigned long,int) ;
 struct gpio_chip* FUNC_5 (struct gpio_desc*) ;
 int FUNC_6 (char*,char const*,int ,int,int) ;
 int FUNC_7 (char*,int ,char const*,char*,char*) ;
 int FUNC_8 (int ,int *) ;

int FUNC_9(struct gpio_desc *VAR_3, const char *VAR_4,
       unsigned long VAR_5, enum gpiod_flags VAR_6)
{
 struct gpio_chip *VAR_7;
 struct gpio_desc *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = FUNC_5(VAR_3);
 VAR_9 = FUNC_3(VAR_3);

 VAR_8 = FUNC_4(VAR_7, VAR_9, VAR_4,
            VAR_5, VAR_6);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  FUNC_6("requesting hog GPIO %s (chip %s, offset %d) failed, %d\n",
         VAR_4, VAR_7->label, VAR_9, VAR_10);
  return VAR_10;
 }


 FUNC_8(VAR_0, &VAR_3->flags);

 FUNC_7("GPIO line %d (%s) hogged as %s%s\n",
  FUNC_2(VAR_3), VAR_4,
  (VAR_6&VAR_1) ? "output" : "input",
  (VAR_6&VAR_1) ?
    (VAR_6&VAR_2) ? "/high" : "/low":"");

 return 0;
}
