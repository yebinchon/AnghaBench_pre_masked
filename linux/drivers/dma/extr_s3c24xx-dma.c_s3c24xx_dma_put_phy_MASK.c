
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c24xx_dma_phy {int * serving; int clk; struct s3c24xx_dma_engine* host; } ;
struct s3c24xx_dma_engine {TYPE_1__* sdata; } ;
struct TYPE_2__ {scalar_t__ has_clocks; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct s3c24xx_dma_phy *VAR_0)
{
 struct s3c24xx_dma_engine *VAR_1 = VAR_0->host;

 if (VAR_1->sdata->has_clocks)
  FUNC_0(VAR_0->clk);

 VAR_0->serving = ((void*)0);
}
