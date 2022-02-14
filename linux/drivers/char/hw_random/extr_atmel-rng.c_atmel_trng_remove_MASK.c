
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct atmel_trng {int clk; } ;


 int FUNC_0 (struct atmel_trng*) ;
 int FUNC_1 (int ) ;
 struct atmel_trng* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct atmel_trng *VAR_1 = FUNC_2(VAR_0);


 FUNC_0(VAR_1);
 FUNC_1(VAR_1->clk);

 return 0;
}
