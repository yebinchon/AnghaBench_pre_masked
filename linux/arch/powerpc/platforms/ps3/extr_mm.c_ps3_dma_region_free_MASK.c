
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3_dma_region {TYPE_1__* region_ops; } ;
struct TYPE_2__ {int (* free ) (struct ps3_dma_region*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ps3_dma_region*) ;

int FUNC_2(struct ps3_dma_region *VAR_0)
{
 FUNC_0(!VAR_0);
 FUNC_0(!VAR_0->region_ops);
 FUNC_0(!VAR_0->region_ops->free);
 return VAR_0->region_ops->free(VAR_0);
}
