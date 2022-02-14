
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv_cesa_ahash_dma_req {scalar_t__ padding; int padding_dma; } ;
typedef int gfp_t ;
struct TYPE_4__ {TYPE_1__* dma; } ;
struct TYPE_3__ {int padding_pool; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct mv_cesa_ahash_dma_req *VAR_2,
        gfp_t VAR_3)
{
 if (VAR_2->padding)
  return 0;

 VAR_2->padding = FUNC_0(VAR_1->dma->padding_pool, VAR_3,
          &VAR_2->padding_dma);
 if (!VAR_2->padding)
  return -VAR_0;

 return 0;
}
