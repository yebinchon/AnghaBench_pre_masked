
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t dma_addr_t ;



__attribute__((used)) static inline unsigned int FUNC_0(dma_addr_t VAR_0, dma_addr_t VAR_1,
      size_t VAR_2)
{
 unsigned int VAR_3;

 if (!((VAR_0 | VAR_1 | VAR_2) & 3))
  VAR_3 = 2;
 else if (!((VAR_0 | VAR_1 | VAR_2) & 1))
  VAR_3 = 1;
 else
  VAR_3 = 0;

 return VAR_3;
}
