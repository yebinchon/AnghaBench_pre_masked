
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef size_t dma_addr_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;

uint64_t FUNC_0(const dma_addr_t *VAR_2, uint64_t VAR_3)
{
 uint64_t VAR_4;


 VAR_4 = VAR_2[VAR_3 >> VAR_1];


 VAR_4 |= VAR_3 & (~VAR_0);

 VAR_4 &= 0xFFFFFFFFFFFFF000ULL;

 return VAR_4;
}
