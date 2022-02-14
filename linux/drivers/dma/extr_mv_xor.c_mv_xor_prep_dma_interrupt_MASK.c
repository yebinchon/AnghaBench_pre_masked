
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_xor_chan {int dummy_dst_addr; int dummy_src_addr; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef int dma_addr_t ;


 size_t VAR_0 ;
 struct dma_async_tx_descriptor* FUNC_0 (struct dma_chan*,int ,int *,int,size_t,unsigned long) ;
 struct mv_xor_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_2(struct dma_chan *VAR_1, unsigned long VAR_2)
{
 struct mv_xor_chan *VAR_3 = FUNC_1(VAR_1);
 dma_addr_t VAR_4, VAR_5;
 size_t VAR_6;

 VAR_4 = VAR_3->dummy_src_addr;
 VAR_5 = VAR_3->dummy_dst_addr;
 VAR_6 = VAR_0;





 return FUNC_0(VAR_1, VAR_5, &VAR_4, 1, VAR_6, VAR_2);
}
