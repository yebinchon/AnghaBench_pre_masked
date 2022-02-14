
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pic32_rng {int clk; scalar_t__ base; int rng; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct pic32_rng* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct pic32_rng *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(&VAR_2->rng);
 FUNC_3(0, VAR_2->base + VAR_0);
 FUNC_0(VAR_2->clk);
 return 0;
}
