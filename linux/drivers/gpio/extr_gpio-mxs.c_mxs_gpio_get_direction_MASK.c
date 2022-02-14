
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxs_gpio_port {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ FUNC_0 (struct mxs_gpio_port*) ;
 struct mxs_gpio_port* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct mxs_gpio_port *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3 = 1 << VAR_1;
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_2->base + FUNC_0(VAR_2));
 return !(VAR_4 & VAR_3);
}
