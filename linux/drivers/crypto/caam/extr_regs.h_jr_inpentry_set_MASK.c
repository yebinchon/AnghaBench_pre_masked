
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int dma_addr_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(void *VAR_1, int VAR_2, dma_addr_t VAR_3)
{
 if (VAR_0 == sizeof(u32)) {
  u32 *VAR_4 = VAR_1;

  VAR_4[VAR_2] = VAR_3;
 } else {
  dma_addr_t *VAR_5 = VAR_1;

  VAR_5[VAR_2] = VAR_3;
 }
}
