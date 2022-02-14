
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct gpio_service {int** busyness; } ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;



__attribute__((used)) static bool FUNC_0(
 const struct gpio_service *VAR_0,
 enum gpio_id VAR_1,
 uint32_t VAR_2)
{
 return VAR_0->busyness[VAR_1][VAR_2];
}
