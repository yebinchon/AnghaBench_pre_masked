
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mtk_cryp {int dev; int clk_cryp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mtk_cryp*) ;
 int FUNC_2 (struct mtk_cryp*) ;
 int FUNC_3 (struct mtk_cryp*) ;
 struct mtk_cryp* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct mtk_cryp *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);

 FUNC_0(VAR_1->clk_cryp);

 FUNC_7(VAR_1->dev);
 FUNC_6(VAR_1->dev);
 FUNC_5(VAR_0, ((void*)0));

 return 0;
}
