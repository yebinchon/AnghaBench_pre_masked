
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_chan {int desc_arr_phys; } ;
struct dma_async_tx_descriptor {int chan; } ;
typedef int dma_cookie_t ;


 int FUNC_0 (struct mmp_tdma_chan*,int ) ;
 struct mmp_tdma_chan* FUNC_1 (int ) ;

__attribute__((used)) static dma_cookie_t FUNC_2(struct dma_async_tx_descriptor *VAR_0)
{
 struct mmp_tdma_chan *VAR_1 = FUNC_1(VAR_0->chan);

 FUNC_0(VAR_1, VAR_1->desc_arr_phys);

 return 0;
}
