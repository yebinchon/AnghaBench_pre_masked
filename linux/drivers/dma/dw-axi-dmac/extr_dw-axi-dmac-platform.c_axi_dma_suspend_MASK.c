
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axi_dma_chip {int cfgr_clk; int core_clk; } ;


 int FUNC_0 (struct axi_dma_chip*) ;
 int FUNC_1 (struct axi_dma_chip*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct axi_dma_chip *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);

 FUNC_2(VAR_0->core_clk);
 FUNC_2(VAR_0->cfgr_clk);

 return 0;
}
