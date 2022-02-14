
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {int clk_ahb; int clk_ipg; } ;
struct sdma_channel {scalar_t__ event_id1; scalar_t__ event_id0; struct sdma_engine* sdma; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (struct sdma_channel*,scalar_t__) ;
 int FUNC_4 (struct sdma_channel*,int ) ;
 struct sdma_channel* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_6(struct dma_chan *VAR_0)
{
 struct sdma_channel *VAR_1 = FUNC_5(VAR_0);
 struct sdma_engine *VAR_2 = VAR_1->sdma;

 FUNC_2(VAR_0);

 FUNC_1(VAR_0);

 if (VAR_1->event_id0)
  FUNC_3(VAR_1, VAR_1->event_id0);
 if (VAR_1->event_id1)
  FUNC_3(VAR_1, VAR_1->event_id1);

 VAR_1->event_id0 = 0;
 VAR_1->event_id1 = 0;

 FUNC_4(VAR_1, 0);

 FUNC_0(VAR_2->clk_ipg);
 FUNC_0(VAR_2->clk_ahb);
}
