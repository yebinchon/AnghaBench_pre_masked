
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axi_dma_chip {int core_clk; int cfgr_clk; } ;


 int FUNC_0 (struct axi_dma_chip*) ;
 int FUNC_1 (struct axi_dma_chip*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct axi_dma_chip *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0->cfgr_clk);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0->core_clk);
 if (VAR_1 < 0)
  return VAR_1;

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);

 return 0;
}
