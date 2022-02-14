
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {scalar_t__ regs; } ;
struct sdma_channel {int channel; int status; struct sdma_engine* sdma; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sdma_channel* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_2)
{
 struct sdma_channel *VAR_3 = FUNC_1(VAR_2);
 struct sdma_engine *VAR_4 = VAR_3->sdma;
 int VAR_5 = VAR_3->channel;

 FUNC_2(FUNC_0(VAR_5), VAR_4->regs + VAR_1);
 VAR_3->status = VAR_0;

 return 0;
}
