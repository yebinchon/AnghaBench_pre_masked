
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chan; } ;
struct virt_dma_desc {TYPE_1__ tx; } ;
struct pl08x_txd {int done; } ;
struct pl08x_dma_chan {int host; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,struct pl08x_txd*) ;
 int FUNC_2 (struct pl08x_dma_chan*) ;
 struct pl08x_dma_chan* FUNC_3 (int ) ;
 struct pl08x_txd* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct virt_dma_desc *VAR_0)
{
 struct pl08x_txd *VAR_1 = FUNC_4(&VAR_0->tx);
 struct pl08x_dma_chan *VAR_2 = FUNC_3(VAR_0->tx.chan);

 FUNC_0(&VAR_0->tx);
 if (!VAR_1->done)
  FUNC_2(VAR_2);

 FUNC_1(VAR_2->host, VAR_1);
}
