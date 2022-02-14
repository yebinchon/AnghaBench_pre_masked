
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_keys_button {unsigned int gpio; void* desc; scalar_t__ code; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void** VAR_4 ;
 struct gpio_keys_button* VAR_5 ;

__attribute__((used)) static void FUNC_0(unsigned VAR_6)
{
 int VAR_7;
 struct gpio_keys_button *VAR_8;

 VAR_8 = &VAR_5[0];
 VAR_8->desc = VAR_4[VAR_0];
 VAR_8->gpio = VAR_6 + VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_8 = &VAR_5[VAR_7 + 1];
  VAR_8->code = VAR_3 + VAR_7;
  VAR_8->desc = VAR_4[VAR_1 + VAR_7];
  VAR_8->gpio = VAR_6 + VAR_1 + VAR_7;
 }
}
