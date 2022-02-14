
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_2 ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void** const) ;

__attribute__((used)) static inline void FUNC_4(u32 * const VAR_3, dma_addr_t VAR_4)
{
 if (VAR_2 == sizeof(dma_addr_t)) {
  dma_addr_t *VAR_5 = (dma_addr_t *)FUNC_3(VAR_3);

  *VAR_5 = FUNC_2(VAR_4);
 } else {
  u32 *VAR_6 = (u32 *)FUNC_3(VAR_3);

  *VAR_6 = FUNC_2(VAR_4);
 }

 (*VAR_3) = FUNC_1(FUNC_0(*VAR_3) +
    VAR_1 / VAR_0);
}
