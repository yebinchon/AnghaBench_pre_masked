
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvm_dev {int dma_pool; TYPE_1__* ops; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {void* (* dev_dma_alloc ) (struct nvm_dev*,int ,int ,int *) ;} ;


 void* FUNC_0 (struct nvm_dev*,int ,int ,int *) ;

void *FUNC_1(struct nvm_dev *VAR_0, gfp_t VAR_1,
       dma_addr_t *VAR_2)
{
 return VAR_0->ops->dev_dma_alloc(VAR_0, VAR_0->dma_pool, VAR_1,
        VAR_2);
}
