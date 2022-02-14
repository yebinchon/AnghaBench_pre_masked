
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pch_dma {int dummy; } ;
struct dma_chan {int chan_id; int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct pch_dma*,int ) ;
 int FUNC_3 (struct pch_dma*,int ,int) ;
 struct pch_dma* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_1, int VAR_2)
{
 struct pch_dma *VAR_3 = FUNC_4(VAR_1->device);
 u32 VAR_4;
 int VAR_5;

 if (VAR_1->chan_id < 8)
  VAR_5 = VAR_1->chan_id;
 else
  VAR_5 = VAR_1->chan_id + 8;

 VAR_4 = FUNC_2(VAR_3, VAR_0);

 if (VAR_2)
  VAR_4 |= 0x1 << VAR_5;
 else
  VAR_4 &= ~(0x1 << VAR_5);

 FUNC_3(VAR_3, VAR_0, VAR_4);

 FUNC_1(FUNC_0(VAR_1), "pdc_enable_irq: chan %d -> %x\n",
  VAR_1->chan_id, VAR_4);
}
