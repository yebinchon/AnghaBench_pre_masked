
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsldma_chan {TYPE_1__* regs; } ;
struct TYPE_2__ {int bcr; } ;


 int FUNC_0 (struct fsldma_chan*,int *,int) ;

__attribute__((used)) static u32 FUNC_1(struct fsldma_chan *VAR_0)
{
 return FUNC_0(VAR_0, &VAR_0->regs->bcr, 32);
}
