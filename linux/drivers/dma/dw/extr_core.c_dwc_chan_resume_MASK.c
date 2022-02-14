
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct dw_dma_chan {int flags; TYPE_1__ chan; } ;
struct dw_dma {int (* resume_chan ) (struct dw_dma_chan*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dw_dma_chan*,int) ;
 struct dw_dma* FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct dw_dma_chan *VAR_1, bool VAR_2)
{
 struct dw_dma *VAR_3 = FUNC_2(VAR_1->chan.device);

 VAR_3->resume_chan(VAR_1, VAR_2);

 FUNC_0(VAR_0, &VAR_1->flags);
}
