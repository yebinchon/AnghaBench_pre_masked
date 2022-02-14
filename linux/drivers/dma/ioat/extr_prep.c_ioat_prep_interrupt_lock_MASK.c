
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ioatdma_chan {int head; int state; } ;
struct dma_async_tx_descriptor {unsigned long flags; } ;
struct ioat_ring_ent {int len; struct dma_async_tx_descriptor txd; struct ioat_dma_descriptor* hw; } ;
struct TYPE_2__ {int null; int int_en; int fence; int compl_write; } ;
struct ioat_dma_descriptor {scalar_t__ dst_addr; scalar_t__ src_addr; int size; TYPE_1__ ctl_f; scalar_t__ ctl; } ;
struct dma_chan {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ioatdma_chan*,struct ioat_ring_ent*) ;
 scalar_t__ FUNC_1 (struct ioatdma_chan*,int) ;
 struct ioat_ring_ent* FUNC_2 (struct ioatdma_chan*,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 struct ioatdma_chan* FUNC_4 (struct dma_chan*) ;

struct dma_async_tx_descriptor *
FUNC_5(struct dma_chan *VAR_3, unsigned long VAR_4)
{
 struct ioatdma_chan *VAR_5 = FUNC_4(VAR_3);
 struct ioat_ring_ent *VAR_6;
 struct ioat_dma_descriptor *VAR_7;

 if (FUNC_3(VAR_1, &VAR_5->state))
  return ((void*)0);

 if (FUNC_1(VAR_5, 1) == 0)
  VAR_6 = FUNC_2(VAR_5, VAR_5->head);
 else
  return ((void*)0);

 VAR_7 = VAR_6->hw;
 VAR_7->ctl = 0;
 VAR_7->ctl_f.null = 1;
 VAR_7->ctl_f.int_en = 1;
 VAR_7->ctl_f.fence = !!(VAR_4 & VAR_0);
 VAR_7->ctl_f.compl_write = 1;
 VAR_7->size = VAR_2;
 VAR_7->src_addr = 0;
 VAR_7->dst_addr = 0;

 VAR_6->txd.flags = VAR_4;
 VAR_6->len = 1;

 FUNC_0(VAR_5, VAR_6);


 return &VAR_6->txd;
}
