
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gpio_service {int * busyness; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gpio_service*,int,int ) ;

enum gpio_result FUNC_2(
 struct gpio_service *VAR_2,
 enum gpio_id VAR_3,
 uint32_t VAR_4)
{
 if (!VAR_2->busyness[VAR_3]) {
  FUNC_0(0);
  return VAR_1;
 }

 FUNC_1(VAR_2, VAR_3, VAR_4);
 return VAR_0;
}
