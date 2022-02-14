
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gpio_fan_data {int speed_index; int num_speed; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct gpio_fan_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct gpio_fan_data *VAR_3 = FUNC_0(VAR_0);
 u8 VAR_4 = VAR_3->speed_index * 255 / (VAR_3->num_speed - 1);

 return FUNC_1(VAR_2, "%d\n", VAR_4);
}
