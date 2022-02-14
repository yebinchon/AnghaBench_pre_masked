
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiod_data {int mutex; struct gpio_desc* desc; } ;
struct gpio_desc {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct gpiod_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct gpio_desc*,long) ;
 scalar_t__ FUNC_2 (char const) ;
 size_t FUNC_3 (char const*,int ,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct gpiod_data *VAR_6 = FUNC_0(VAR_2);
 struct gpio_desc *VAR_7 = VAR_6->desc;
 ssize_t VAR_8 = 0;

 FUNC_4(&VAR_6->mutex);

 if (!FUNC_6(VAR_1, &VAR_7->flags)) {
  VAR_8 = -VAR_0;
 } else {
  long VAR_9;

  if (VAR_5 <= 2 && FUNC_2(VAR_4[0]) &&
      (VAR_5 == 1 || VAR_4[1] == '\n'))
   VAR_9 = VAR_4[0] - '0';
  else
   VAR_8 = FUNC_3(VAR_4, 0, &VAR_9);
  if (VAR_8 == 0) {
   FUNC_1(VAR_7, VAR_9);
   VAR_8 = VAR_5;
  }
 }

 FUNC_5(&VAR_6->mutex);

 return VAR_8;
}
