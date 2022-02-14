
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int device; } ;
struct dw_dma_chan {TYPE_1__ chan; } ;
struct dw_dma {int (* block2bytes ) (struct dw_dma_chan*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dw_dma_chan*,int ) ;
 int FUNC_1 (struct dw_dma_chan*,int,int) ;
 struct dw_dma* FUNC_2 (int ) ;

__attribute__((used)) static inline u32 FUNC_3(struct dw_dma_chan *VAR_2)
{
 struct dw_dma *VAR_3 = FUNC_2(VAR_2->chan.device);
 u32 VAR_4 = FUNC_0(VAR_2, VAR_0);
 u32 VAR_5 = FUNC_0(VAR_2, VAR_1);

 return VAR_3->block2bytes(VAR_2, VAR_4, VAR_5 >> 4 & 7);
}
