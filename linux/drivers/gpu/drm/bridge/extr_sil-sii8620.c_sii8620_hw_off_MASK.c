
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii8620 {int supplies; int gpio_reset; int clk_xtal; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sii8620 *VAR_0)
{
 FUNC_1(VAR_0->clk_xtal);
 FUNC_2(VAR_0->gpio_reset, 1);
 return FUNC_3(FUNC_0(VAR_0->supplies), VAR_0->supplies);
}
