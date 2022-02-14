
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_dma_dev {int ashb_clk; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sprd_dma_dev *VAR_0)
{
 FUNC_1(VAR_0->clk);




 if (!FUNC_0(VAR_0->ashb_clk))
  FUNC_1(VAR_0->ashb_clk);
}
