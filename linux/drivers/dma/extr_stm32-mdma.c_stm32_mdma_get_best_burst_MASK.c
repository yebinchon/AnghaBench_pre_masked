
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_0, u32 VAR_1, u32 VAR_2,
         enum dma_slave_buswidth VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1((u32)1 << FUNC_0(VAR_1 | VAR_0),
    VAR_2 * VAR_3) / VAR_3;

 return (VAR_4 > 0) ? VAR_4 : 1;
}
