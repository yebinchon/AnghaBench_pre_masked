
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static enum dma_slave_buswidth FUNC_0(u32 VAR_4,
             u32 VAR_5)
{
 enum dma_slave_buswidth VAR_6;

 if (VAR_5 == VAR_3)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1;

 while ((VAR_4 < VAR_6 || VAR_4 % VAR_6) &&
        VAR_6 > VAR_0)
  VAR_6 = VAR_6 >> 1;

 return VAR_6;
}
