
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_piter {size_t i; int * addrs; } ;
typedef int dma_addr_t ;



__attribute__((used)) static dma_addr_t FUNC_0(struct vmw_piter *VAR_0)
{
 return VAR_0->addrs[VAR_0->i];
}
