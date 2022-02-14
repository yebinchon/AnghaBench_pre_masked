
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gpio_desc* FUNC_0 (int) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,int) ;
 struct gpio_desc* FUNC_5 (struct device*,char const*,int) ;
 struct gpio_desc* FUNC_6 (struct device*,int *,unsigned int,int) ;

__attribute__((used)) static struct gpio_desc *FUNC_7(struct device *VAR_3,
        const char *VAR_4,
        unsigned int VAR_5,
        enum gpiod_flags VAR_6)
{
 struct gpio_desc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_6);
 if (!FUNC_1(VAR_7)) {
  FUNC_3(VAR_3, "got GPIO from name %s\n", VAR_4);
  return VAR_7;
 }

 VAR_7 = FUNC_6(VAR_3, ((void*)0), VAR_5, VAR_6);
 if (!FUNC_1(VAR_7)) {
  FUNC_3(VAR_3, "got GPIO from index %u\n", VAR_5);
  return VAR_7;
 }

 VAR_8 = FUNC_2(VAR_7);


 if (VAR_8 == -VAR_0)
  VAR_7 = FUNC_0(-VAR_2);


 if (VAR_8 == -VAR_1)
  VAR_7 = FUNC_0(-VAR_2);

 if (VAR_8 != -VAR_2)
  FUNC_4(VAR_3, "error trying to get descriptor: %d\n", VAR_8);

 return VAR_7;
}
