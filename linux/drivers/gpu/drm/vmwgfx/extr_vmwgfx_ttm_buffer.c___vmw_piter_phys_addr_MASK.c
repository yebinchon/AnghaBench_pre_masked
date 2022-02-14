
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_piter {size_t i; int * pages; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static dma_addr_t FUNC_1(struct vmw_piter *VAR_0)
{
 return FUNC_0(VAR_0->pages[VAR_0->i]);
}
