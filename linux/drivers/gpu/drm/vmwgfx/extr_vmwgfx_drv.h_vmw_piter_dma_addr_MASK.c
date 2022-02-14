
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_piter {int (* dma_address ) (struct vmw_piter*) ;} ;
typedef int dma_addr_t ;


 int FUNC_0 (struct vmw_piter*) ;

__attribute__((used)) static inline dma_addr_t FUNC_1(struct vmw_piter *VAR_0)
{
 return VAR_0->dma_address(VAR_0);
}
