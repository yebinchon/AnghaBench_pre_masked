
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiod_data {int mutex; struct gpio_desc* desc; } ;
struct gpio_desc {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct gpiod_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct gpiod_data *VAR_5 = FUNC_0(VAR_1);
 struct gpio_desc *VAR_6 = VAR_5->desc;
 ssize_t VAR_7;

 FUNC_3(&VAR_5->mutex);

 if (FUNC_5(VAR_3, "high"))
  VAR_7 = FUNC_2(VAR_6, 1);
 else if (FUNC_5(VAR_3, "out") || FUNC_5(VAR_3, "low"))
  VAR_7 = FUNC_2(VAR_6, 0);
 else if (FUNC_5(VAR_3, "in"))
  VAR_7 = FUNC_1(VAR_6);
 else
  VAR_7 = -VAR_0;

 FUNC_4(&VAR_5->mutex);

 return VAR_7 ? : VAR_4;
}
