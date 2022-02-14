
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysmmu_drvdata {int aclk; int pclk; int clk; int clk_master; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sysmmu_drvdata *VAR_0)
{
 FUNC_0(FUNC_1(VAR_0->clk_master));
 FUNC_0(FUNC_1(VAR_0->clk));
 FUNC_0(FUNC_1(VAR_0->pclk));
 FUNC_0(FUNC_1(VAR_0->aclk));
}
