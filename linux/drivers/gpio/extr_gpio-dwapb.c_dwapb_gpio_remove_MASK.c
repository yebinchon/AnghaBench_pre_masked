
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dwapb_gpio {int clk; int rst; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dwapb_gpio*) ;
 int FUNC_2 (struct dwapb_gpio*) ;
 struct dwapb_gpio* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct dwapb_gpio *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_4(VAR_1->rst);
 FUNC_0(VAR_1->clk);

 return 0;
}
