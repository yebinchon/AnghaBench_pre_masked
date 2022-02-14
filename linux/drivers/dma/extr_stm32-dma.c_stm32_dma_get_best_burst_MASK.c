
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_1, u32 VAR_2, u32 VAR_3,
        enum dma_slave_buswidth VAR_4)
{
 u32 VAR_5 = VAR_2;

 if (VAR_5 == 1 || !FUNC_1(VAR_1, VAR_3))
  return 0;

 while ((VAR_1 < VAR_5 * VAR_4 && VAR_5 > 1) ||
        !FUNC_0(VAR_5, VAR_3,
          VAR_4)) {
  if (VAR_5 > VAR_0)
   VAR_5 = VAR_5 >> 1;
  else
   VAR_5 = 0;
 }

 return VAR_5;
}
