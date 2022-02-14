
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxs_dma_engine {scalar_t__ base; } ;
struct TYPE_2__ {int chan_id; } ;
struct mxs_dma_chan {int ccw_phys; int flags; int reset; TYPE_1__ chan; struct mxs_dma_engine* mxs_dma; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ FUNC_0 (struct mxs_dma_engine*,int) ;
 scalar_t__ FUNC_1 (struct mxs_dma_engine*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mxs_dma_chan* FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct dma_chan *VAR_2)
{
 struct mxs_dma_chan *VAR_3 = FUNC_2(VAR_2);
 struct mxs_dma_engine *VAR_4 = VAR_3->mxs_dma;
 int VAR_5 = VAR_3->chan.chan_id;


 FUNC_3(VAR_3->ccw_phys,
  VAR_4->base + FUNC_0(VAR_4, VAR_5));


 if (VAR_3->flags & VAR_1 &&
   VAR_3->flags & VAR_0) {



  FUNC_3(2, VAR_4->base + FUNC_1(VAR_4, VAR_5));
 } else {
  FUNC_3(1, VAR_4->base + FUNC_1(VAR_4, VAR_5));
 }
 VAR_3->reset = 0;
}
