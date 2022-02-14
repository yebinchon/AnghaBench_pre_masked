
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvm_dev {int dma_pool; TYPE_1__* ops; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* dev_dma_free ) (int ,void*,int ) ;} ;


 int FUNC_0 (int ,void*,int ) ;

void FUNC_1(struct nvm_dev *VAR_0, void *VAR_1, dma_addr_t VAR_2)
{
 VAR_0->ops->dev_dma_free(VAR_0->dma_pool, VAR_1, VAR_2);
}
