
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv_cesa_ahash_dma_req {int * padding; int padding_dma; } ;
struct TYPE_4__ {TYPE_1__* dma; } ;
struct TYPE_3__ {int padding_pool; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct mv_cesa_ahash_dma_req *VAR_1)
{
 if (!VAR_1->padding)
  return;

 FUNC_0(VAR_0->dma->padding_pool, VAR_1->padding,
        VAR_1->padding_dma);
 VAR_1->padding = ((void*)0);
}
