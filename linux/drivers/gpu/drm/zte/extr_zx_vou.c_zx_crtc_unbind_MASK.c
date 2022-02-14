
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vou_hw {int ppu_clk; int axi_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct zx_vou_hw* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, struct device *VAR_1,
      void *VAR_2)
{
 struct zx_vou_hw *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->axi_clk);
 FUNC_0(VAR_3->ppu_clk);
}
