
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t dma_addr_t ;
typedef int __le64 ;


 size_t VAR_0 ;
 int FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static void FUNC_2(__le64 *VAR_1, size_t *VAR_2,
         dma_addr_t *VAR_3)
{
 size_t VAR_4 = (*VAR_2 < VAR_0) ?
   *VAR_2 : VAR_0;

 *VAR_1 |= FUNC_0(*VAR_3);
 *VAR_1 |= FUNC_0(FUNC_1(VAR_4));
 *VAR_2 -= VAR_4;
 *VAR_3 += VAR_4;
}
