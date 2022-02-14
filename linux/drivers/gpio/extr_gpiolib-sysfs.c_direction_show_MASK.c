
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiod_data {int mutex; struct gpio_desc* desc; } ;
struct gpio_desc {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct gpiod_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct gpiod_data *VAR_4 = FUNC_0(VAR_1);
 struct gpio_desc *VAR_5 = VAR_4->desc;
 ssize_t VAR_6;

 FUNC_2(&VAR_4->mutex);

 FUNC_1(VAR_5);
 VAR_6 = FUNC_4(VAR_3, "%s\n",
   FUNC_5(VAR_0, &VAR_5->flags)
    ? "out" : "in");

 FUNC_3(&VAR_4->mutex);

 return VAR_6;
}
