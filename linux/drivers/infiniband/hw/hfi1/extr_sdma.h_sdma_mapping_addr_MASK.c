
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_desc {int* qw; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline dma_addr_t FUNC_0(struct sdma_desc *VAR_2)
{
 return (VAR_2->qw[0] & VAR_1)
  >> VAR_0;
}
