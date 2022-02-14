
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxs_dma_engine {scalar_t__ base; } ;
struct TYPE_2__ {int chan_id; } ;
struct mxs_dma_chan {int status; TYPE_1__ chan; struct mxs_dma_engine* mxs_dma; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct mxs_dma_engine*) ;
 scalar_t__ FUNC_1 (struct mxs_dma_engine*) ;
 struct mxs_dma_chan* FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct dma_chan *VAR_4)
{
 struct mxs_dma_chan *VAR_5 = FUNC_2(VAR_4);
 struct mxs_dma_engine *VAR_6 = VAR_5->mxs_dma;
 int VAR_7 = VAR_5->chan.chan_id;


 if (FUNC_1(VAR_6) && FUNC_0(VAR_6))
  FUNC_3(1 << VAR_7,
   VAR_6->base + VAR_2 + VAR_3);
 else
  FUNC_3(1 << VAR_7,
   VAR_6->base + VAR_1 + VAR_3);

 VAR_5->status = VAR_0;
 return 0;
}
