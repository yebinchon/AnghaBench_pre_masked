
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hw_hpd {int dummy; } ;
struct hw_gpio_pin {scalar_t__ mode; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct hw_hpd* FUNC_0 (struct hw_gpio_pin const*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct hw_gpio_pin const*,int *) ;
 int VAR_3 ;

__attribute__((used)) static enum gpio_result FUNC_3(
 const struct hw_gpio_pin *VAR_4,
 uint32_t *VAR_5)
{
 struct hw_hpd *VAR_6 = FUNC_0(VAR_4);
 uint32_t VAR_7 = 0;



 if (VAR_4->mode == VAR_1) {

  FUNC_1(VAR_3,
   VAR_0, &VAR_7);

  *VAR_5 = VAR_7;
  return VAR_2;
 }



 return FUNC_2(VAR_4, VAR_5);
}
