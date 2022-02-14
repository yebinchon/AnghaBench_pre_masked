
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioatdma_chan {int state; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum sum_check_flags { ____Placeholder_sum_check_flags } sum_check_flags ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 struct dma_async_tx_descriptor* FUNC_0 (struct dma_chan*,int*,int *,int *,unsigned int,unsigned char const*,size_t,unsigned long) ;
 struct dma_async_tx_descriptor* FUNC_1 (struct dma_chan*,int*,int *,int *,unsigned int,unsigned char const*,size_t,unsigned long) ;
 int FUNC_2 (unsigned int,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 struct ioatdma_chan* FUNC_4 (struct dma_chan*) ;

struct dma_async_tx_descriptor *
FUNC_5(struct dma_chan *VAR_3, dma_addr_t *VAR_4, dma_addr_t *VAR_5,
    unsigned int VAR_6, const unsigned char *VAR_7, size_t VAR_8,
    enum sum_check_flags *VAR_9, unsigned long VAR_10)
{
 struct ioatdma_chan *VAR_11 = FUNC_4(VAR_3);

 if (FUNC_3(VAR_2, &VAR_11->state))
  return ((void*)0);


 if (VAR_10 & VAR_0)
  VAR_4[0] = VAR_4[1];
 if (VAR_10 & VAR_1)
  VAR_4[1] = VAR_4[0];




 *VAR_9 = 0;

 return FUNC_2(VAR_6, VAR_10) > 8 ?
  FUNC_0(VAR_3, VAR_9, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
           VAR_10) :
  FUNC_1(VAR_3, VAR_9, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
         VAR_10);
}
