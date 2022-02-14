
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2_gpio_data {int write_enable; void* gpio_clk; void* gpio_data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1,
     struct ps2_gpio_data *VAR_2)
{
 VAR_2->gpio_data = FUNC_4(VAR_1, "data", VAR_0);
 if (FUNC_0(VAR_2->gpio_data)) {
  FUNC_2(VAR_1, "failed to request data gpio: %ld",
   FUNC_1(VAR_2->gpio_data));
  return FUNC_1(VAR_2->gpio_data);
 }

 VAR_2->gpio_clk = FUNC_4(VAR_1, "clk", VAR_0);
 if (FUNC_0(VAR_2->gpio_clk)) {
  FUNC_2(VAR_1, "failed to request clock gpio: %ld",
   FUNC_1(VAR_2->gpio_clk));
  return FUNC_1(VAR_2->gpio_clk);
 }

 VAR_2->write_enable = FUNC_3(VAR_1,
    "write-enable");

 return 0;
}
