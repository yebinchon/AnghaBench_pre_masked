
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_fan_speed {unsigned long rpm; } ;
struct gpio_fan_data {int num_speed; struct gpio_fan_speed* speed; } ;



__attribute__((used)) static int FUNC_0(struct gpio_fan_data *VAR_0, unsigned long VAR_1)
{
 struct gpio_fan_speed *VAR_2 = VAR_0->speed;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_speed; VAR_3++)
  if (VAR_2[VAR_3].rpm >= VAR_1)
   return VAR_3;

 return VAR_0->num_speed - 1;
}
