
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at_lli {int dscr; int ctrlb; int ctrla; int daddr; int saddr; } ;
struct at_dma_chan {int chan_common; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int *,int *,int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct at_dma_chan *VAR_0, struct at_lli *VAR_1)
{
 FUNC_1(FUNC_0(&VAR_0->chan_common),
   "desc: s%pad d%pad ctrl0x%x:0x%x l%pad\n",
   &VAR_1->saddr, &VAR_1->daddr,
   VAR_1->ctrla, VAR_1->ctrlb, &VAR_1->dscr);
}
