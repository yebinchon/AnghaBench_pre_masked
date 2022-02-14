
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(u32 VAR_2, u32 VAR_3,
      enum dma_slave_buswidth VAR_4)
{
 u32 VAR_5;

 if (VAR_4 != VAR_0) {
  if (VAR_2 != 0) {




   VAR_5 = ((VAR_1 / VAR_4) *
         (VAR_3 + 1) / 4) % VAR_2;

   if (VAR_5 == 0)
    return 1;
  } else {
   return 1;
  }
 }

 return 0;
}
