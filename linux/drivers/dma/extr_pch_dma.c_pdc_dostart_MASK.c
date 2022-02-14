
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int phys; } ;
struct TYPE_5__ {int next; int size; int mem_addr; int dev_addr; } ;
struct pch_dma_desc {TYPE_2__ txd; TYPE_1__ regs; int tx_list; } ;
struct TYPE_7__ {int chan_id; } ;
struct pch_dma_chan {TYPE_3__ chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct pch_dma_chan*,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct pch_dma_chan*) ;
 int FUNC_6 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_7(struct pch_dma_chan *VAR_6, struct pch_dma_desc* VAR_7)
{
 if (!FUNC_5(VAR_6)) {
  FUNC_3(FUNC_0(&VAR_6->chan),
   "BUG: Attempt to start non-idle channel\n");
  return;
 }

 FUNC_2(FUNC_0(&VAR_6->chan), "chan %d -> dev_addr: %x\n",
  VAR_6->chan.chan_id, VAR_7->regs.dev_addr);
 FUNC_2(FUNC_0(&VAR_6->chan), "chan %d -> mem_addr: %x\n",
  VAR_6->chan.chan_id, VAR_7->regs.mem_addr);
 FUNC_2(FUNC_0(&VAR_6->chan), "chan %d -> size: %x\n",
  VAR_6->chan.chan_id, VAR_7->regs.size);
 FUNC_2(FUNC_0(&VAR_6->chan), "chan %d -> next: %x\n",
  VAR_6->chan.chan_id, VAR_7->regs.next);

 if (FUNC_4(&VAR_7->tx_list)) {
  FUNC_1(VAR_6, VAR_0, VAR_7->regs.dev_addr);
  FUNC_1(VAR_6, VAR_3, VAR_7->regs.mem_addr);
  FUNC_1(VAR_6, VAR_5, VAR_7->regs.size);
  FUNC_1(VAR_6, VAR_4, VAR_7->regs.next);
  FUNC_6(&VAR_6->chan, VAR_1);
 } else {
  FUNC_1(VAR_6, VAR_4, VAR_7->txd.phys);
  FUNC_6(&VAR_6->chan, VAR_2);
 }
}
