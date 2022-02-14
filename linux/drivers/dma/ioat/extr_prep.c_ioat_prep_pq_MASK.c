
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioatdma_chan {int state; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 struct dma_async_tx_descriptor* FUNC_1 (struct dma_chan*,int *,int *,int *,unsigned int,unsigned char const*,size_t,unsigned long) ;
 struct dma_async_tx_descriptor* FUNC_2 (struct dma_chan*,int *,int *,int *,unsigned int,unsigned char const*,size_t,unsigned long) ;
 int FUNC_3 (unsigned int,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 struct ioatdma_chan* FUNC_5 (struct dma_chan*) ;

struct dma_async_tx_descriptor *
FUNC_6(struct dma_chan *VAR_3, dma_addr_t *VAR_4, dma_addr_t *VAR_5,
       unsigned int VAR_6, const unsigned char *VAR_7, size_t VAR_8,
       unsigned long VAR_9)
{
 struct ioatdma_chan *VAR_10 = FUNC_5(VAR_3);

 if (FUNC_4(VAR_2, &VAR_10->state))
  return ((void*)0);


 if (VAR_9 & VAR_0)
  VAR_4[0] = VAR_4[1];
 if (VAR_9 & VAR_1)
  VAR_4[1] = VAR_4[0];




 if ((VAR_9 & VAR_0) && VAR_6 == 1) {
  dma_addr_t VAR_11[2];
  unsigned char VAR_12[2];

  FUNC_0(VAR_9 & VAR_1);
  VAR_11[0] = VAR_5[0];
  VAR_11[1] = VAR_5[0];
  VAR_12[0] = VAR_7[0];
  VAR_12[1] = 0;

  return FUNC_3(VAR_6, VAR_9) > 8 ?
   FUNC_1(VAR_3, ((void*)0), VAR_4, VAR_11,
            2, VAR_12, VAR_8,
            VAR_9) :
   FUNC_2(VAR_3, ((void*)0), VAR_4, VAR_11, 2,
          VAR_12, VAR_8, VAR_9);

 } else {
  return FUNC_3(VAR_6, VAR_9) > 8 ?
   FUNC_1(VAR_3, ((void*)0), VAR_4, VAR_5, VAR_6,
            VAR_7, VAR_8, VAR_9) :
   FUNC_2(VAR_3, ((void*)0), VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8, VAR_9);
 }
}
