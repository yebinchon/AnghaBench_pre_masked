
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sahara_dev {int clk_ahb; int clk_ipg; int kthread; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 struct sahara_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct sahara_dev*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct sahara_dev *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->kthread);

 FUNC_3(VAR_2);

 FUNC_0(VAR_2->clk_ipg);
 FUNC_0(VAR_2->clk_ahb);

 VAR_0 = ((void*)0);

 return 0;
}
