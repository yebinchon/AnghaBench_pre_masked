
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_rsb {int clk; int rstc; int dev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 struct sunxi_rsb* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct sunxi_rsb *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->dev, ((void*)0), VAR_0);
 FUNC_3(VAR_2->rstc);
 FUNC_0(VAR_2->clk);

 return 0;
}
