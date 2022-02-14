
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_supported; } ;
struct ddc {TYPE_1__ hw_info; } ;
typedef enum gpio_ddc_line { ____Placeholder_gpio_ddc_line } gpio_ddc_line ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ddc*) ;

__attribute__((used)) static bool FUNC_2(
 struct ddc *VAR_2,
 enum gpio_ddc_line *VAR_3)
{
 enum gpio_ddc_line VAR_4;

 *VAR_3 = VAR_1;

 if (!VAR_2) {
  FUNC_0();
  return 0;
 }

 if (!VAR_2->hw_info.hw_supported)
  return 0;

 VAR_4 = FUNC_1(VAR_2);

 if (VAR_4 >= VAR_0)
  return 0;

 *VAR_3 = VAR_4;

 return 1;
}
