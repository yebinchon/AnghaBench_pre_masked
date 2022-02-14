
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii8620 {int gpio_reset; int clk_xtal; int supplies; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct sii8620 *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_4(FUNC_0(VAR_0->supplies), VAR_0->supplies);
 if (VAR_1)
  return VAR_1;

 FUNC_5(10000, 20000);
 VAR_1 = FUNC_1(VAR_0->clk_xtal);
 if (VAR_1)
  return VAR_1;

 FUNC_3(100);
 FUNC_2(VAR_0->gpio_reset, 0);
 FUNC_3(100);

 return 0;
}
