
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio {int en; int id; int service; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;


 int FUNC_0 (int ,int ,int ) ;

enum gpio_result FUNC_1(
 struct gpio *VAR_0)
{
 return FUNC_0(VAR_0->service, VAR_0->id, VAR_0->en);
}
