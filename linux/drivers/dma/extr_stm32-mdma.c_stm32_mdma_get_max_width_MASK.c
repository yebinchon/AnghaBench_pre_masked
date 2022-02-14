
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum dma_slave_buswidth FUNC_0(dma_addr_t VAR_2,
       u32 VAR_3, u32 VAR_4)
{
 enum dma_slave_buswidth VAR_5 = VAR_1;

 for (VAR_5 = VAR_1;
      VAR_5 > VAR_0;
      VAR_5 >>= 1) {




  if ((((VAR_3 | VAR_2) & (VAR_5 - 1)) == 0) &&
      VAR_4 >= VAR_5)
   break;
 }

 return VAR_5;
}
