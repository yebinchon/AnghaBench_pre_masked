
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum sum_check_flags { ____Placeholder_sum_check_flags } sum_check_flags ;
typedef scalar_t__ dma_addr_t ;


 unsigned long VAR_0 ;
 struct dma_async_tx_descriptor* FUNC_0 (struct dma_chan*,scalar_t__*,scalar_t__*,unsigned int,int ,size_t,int*,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_1(
  struct dma_chan *VAR_1, dma_addr_t *VAR_2, unsigned int VAR_3,
  size_t VAR_4, enum sum_check_flags *VAR_5, unsigned long VAR_6)
{
 struct dma_async_tx_descriptor *VAR_7;
 dma_addr_t VAR_8[2];


 VAR_8[0] = VAR_2[0];
 VAR_8[1] = 0;
 VAR_6 |= VAR_0;

 VAR_7 = FUNC_0(VAR_1, VAR_8, &VAR_2[1],
      VAR_3 - 1, 0, VAR_4,
      VAR_5, VAR_6);
 return VAR_7;
}
