
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_service {int dummy; } ;
struct gpio_pin_info {int mask; int offset; } ;
struct gpio_generic_mux_config {int enable_output_from_mux; int mux_select; } ;
struct gpio {int dummy; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gpio*) ;
 int FUNC_1 (struct gpio**) ;
 struct gpio_pin_info FUNC_2 (struct gpio_service*,int ,int ) ;
 int FUNC_3 (struct gpio*,int ) ;
 struct gpio* FUNC_4 (struct gpio_service*,int,int) ;
 int FUNC_5 (struct gpio*,struct gpio_generic_mux_config*) ;
 int FUNC_6 (struct gpio_generic_mux_config*) ;
 struct gpio_generic_mux_config* FUNC_7 (int,int ) ;

bool FUNC_8(bool VAR_6,
  struct gpio_service *VAR_7)
{
 enum gpio_result VAR_8 = VAR_3;
 struct gpio_pin_info VAR_9;
 struct gpio *VAR_10;
 struct gpio_generic_mux_config *VAR_11 = FUNC_7(sizeof(struct gpio_generic_mux_config),
      VAR_0);

 if (!VAR_11)
  return 0;
 VAR_9 = FUNC_2(VAR_7, VAR_1, 0);

 if (VAR_9.mask == 0xFFFFFFFF || VAR_9.offset == 0xFFFFFFFF) {
  FUNC_6(VAR_11);
  return 0;
 } else {
  VAR_10 = FUNC_4(
   VAR_7,
   VAR_9.offset,
   VAR_9.mask);
 }

 if (!VAR_10) {
  FUNC_6(VAR_11);
  return 0;
 }

 VAR_8 = FUNC_3(VAR_10, VAR_2);

 VAR_11->enable_output_from_mux = VAR_6;
 VAR_11->mux_select = VAR_5;

 if (VAR_8 == VAR_4)
  VAR_8 = FUNC_5(VAR_10, VAR_11);

 if (VAR_8 == VAR_4) {
  FUNC_0(VAR_10);
  FUNC_1(&VAR_10);
  FUNC_6(VAR_11);
  return 1;
 } else {
  FUNC_0(VAR_10);
  FUNC_1(&VAR_10);
  FUNC_6(VAR_11);
  return 0;
 }
}
