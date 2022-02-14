
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_keys_button {unsigned int gpio; int desc; scalar_t__ code; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 struct gpio_keys_button* VAR_4 ;

__attribute__((used)) static void FUNC_0(unsigned VAR_5)
{
 int VAR_6;
 struct gpio_keys_button *VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7 = &VAR_4[VAR_6];
  VAR_7->code = VAR_2 - VAR_6;
  VAR_7->desc = VAR_3[VAR_0 + VAR_6];
  VAR_7->gpio = VAR_5 + VAR_0 + VAR_6;
 }
}
