
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsldma_chan {TYPE_1__* regs; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int cdar; } ;


 int FUNC_0 (struct fsldma_chan*,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static dma_addr_t FUNC_1(struct fsldma_chan *VAR_1)
{
 return FUNC_0(VAR_1, &VAR_1->regs->cdar, 64) & ~VAR_0;
}
