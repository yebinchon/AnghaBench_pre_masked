
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioatdma_chan {int state; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dma_async_tx_descriptor* FUNC_0 (struct dma_chan*,int *,int *,int *,unsigned int,unsigned char*,size_t,unsigned long) ;
 struct dma_async_tx_descriptor* FUNC_1 (struct dma_chan*,int *,int *,int *,unsigned int,unsigned char*,size_t,unsigned long) ;
 int FUNC_2 (unsigned char*,int ,unsigned int) ;
 int FUNC_3 (unsigned int,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 struct ioatdma_chan* FUNC_5 (struct dma_chan*) ;

struct dma_async_tx_descriptor *
FUNC_6(struct dma_chan *VAR_3, dma_addr_t VAR_4, dma_addr_t *VAR_5,
   unsigned int VAR_6, size_t VAR_7, unsigned long VAR_8)
{
 unsigned char VAR_9[VAR_2];
 dma_addr_t VAR_10[2];
 struct ioatdma_chan *VAR_11 = FUNC_5(VAR_3);

 if (FUNC_4(VAR_1, &VAR_11->state))
  return ((void*)0);

 if (VAR_6 > VAR_2)
  return ((void*)0);

 FUNC_2(VAR_9, 0, VAR_6);
 VAR_10[0] = VAR_4;
 VAR_8 |= VAR_0;
 VAR_10[1] = VAR_4;

 return FUNC_3(VAR_6, VAR_8) > 8 ?
  FUNC_0(VAR_3, ((void*)0), VAR_10, VAR_5, VAR_6, VAR_9, VAR_7,
           VAR_8) :
  FUNC_1(VAR_3, ((void*)0), VAR_10, VAR_5, VAR_6, VAR_9, VAR_7,
         VAR_8);
}
