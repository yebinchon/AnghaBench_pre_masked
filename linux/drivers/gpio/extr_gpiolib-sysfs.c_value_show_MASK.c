
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiod_data {int mutex; struct gpio_desc* desc; } ;
struct gpio_desc {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef char ssize_t ;


 struct gpiod_data* FUNC_0 (struct device*) ;
 char FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct gpiod_data *VAR_3 = FUNC_0(VAR_0);
 struct gpio_desc *VAR_4 = VAR_3->desc;
 ssize_t VAR_5;

 FUNC_2(&VAR_3->mutex);

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0)
  goto err;

 VAR_2[0] = '0' + VAR_5;
 VAR_2[1] = '\n';
 VAR_5 = 2;
err:
 FUNC_3(&VAR_3->mutex);

 return VAR_5;
}
