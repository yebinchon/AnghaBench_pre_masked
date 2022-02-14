
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ads7846 {int (* get_pendown_state ) () ;int gpio_pendown; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct ads7846 *VAR_0)
{
 if (VAR_0->get_pendown_state)
  return VAR_0->get_pendown_state();

 return !FUNC_0(VAR_0->gpio_pendown);
}
