
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct TYPE_3__ {int lock; } ;
struct axi_dmac_chan {TYPE_1__ vchan; int active_descs; int * next_desc; } ;
struct axi_dmac {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct axi_dmac*,int ,int ) ;
 struct axi_dmac* FUNC_2 (struct axi_dmac_chan*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct axi_dmac_chan* FUNC_6 (struct dma_chan*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_9(struct dma_chan *VAR_2)
{
 struct axi_dmac_chan *VAR_3 = FUNC_6(VAR_2);
 struct axi_dmac *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5;
 FUNC_0(VAR_1);

 FUNC_4(&VAR_3->vchan.lock, VAR_5);
 FUNC_1(VAR_4, VAR_0, 0);
 VAR_3->next_desc = ((void*)0);
 FUNC_8(&VAR_3->vchan, &VAR_1);
 FUNC_3(&VAR_3->active_descs, &VAR_1);
 FUNC_5(&VAR_3->vchan.lock, VAR_5);

 FUNC_7(&VAR_3->vchan, &VAR_1);

 return 0;
}
