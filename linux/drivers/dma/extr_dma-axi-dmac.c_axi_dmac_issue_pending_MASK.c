
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct axi_dmac_chan {TYPE_1__ vchan; } ;
struct axi_dmac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct axi_dmac_chan*) ;
 int FUNC_1 (struct axi_dmac*,int ,int ) ;
 struct axi_dmac* FUNC_2 (struct axi_dmac_chan*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct axi_dmac_chan* FUNC_5 (struct dma_chan*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct dma_chan *VAR_2)
{
 struct axi_dmac_chan *VAR_3 = FUNC_5(VAR_2);
 struct axi_dmac *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5;

 FUNC_1(VAR_4, VAR_1, VAR_0);

 FUNC_3(&VAR_3->vchan.lock, VAR_5);
 if (FUNC_6(&VAR_3->vchan))
  FUNC_0(VAR_3);
 FUNC_4(&VAR_3->vchan.lock, VAR_5);
}
