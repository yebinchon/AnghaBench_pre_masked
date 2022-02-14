
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cookie; } ;
struct pch_dma_desc {TYPE_1__ txd; int desc_node; } ;
struct TYPE_4__ {int prev; } ;
struct pch_dma_chan {int chan; TYPE_2__ active_list; int queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct pch_dma_chan*,struct pch_dma_desc*) ;
 int FUNC_6 (struct pch_dma_chan*,struct pch_dma_desc*) ;
 struct pch_dma_desc* FUNC_7 (struct pch_dma_chan*) ;

__attribute__((used)) static void FUNC_8(struct pch_dma_chan *VAR_0)
{
 struct pch_dma_desc *VAR_1;

 VAR_1 = FUNC_7(VAR_0);
 FUNC_2(&VAR_1->desc_node);

 FUNC_4(&VAR_0->queue, VAR_0->active_list.prev);

 if (!FUNC_3(&VAR_0->active_list))
  FUNC_6(VAR_0, FUNC_7(VAR_0));

 FUNC_1(FUNC_0(&VAR_0->chan), "Bad descriptor submitted\n");
 FUNC_1(FUNC_0(&VAR_0->chan), "descriptor cookie: %d\n",
   VAR_1->txd.cookie);

 FUNC_5(VAR_0, VAR_1);
}
