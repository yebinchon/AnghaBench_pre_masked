
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_dma_chn {int dev_id; } ;
struct dma_chan {int dummy; } ;


 struct sprd_dma_chn* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static bool FUNC_1(struct dma_chan *VAR_0, void *VAR_1)
{
 struct sprd_dma_chn *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = *(u32 *)VAR_1;

 VAR_2->dev_id = VAR_3;
 return 1;
}
