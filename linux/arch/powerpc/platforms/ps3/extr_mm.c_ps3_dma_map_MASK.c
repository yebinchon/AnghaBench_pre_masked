
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ps3_dma_region {TYPE_1__* region_ops; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* map ) (struct ps3_dma_region*,unsigned long,unsigned long,int *,int ) ;} ;


 int FUNC_0 (struct ps3_dma_region*,unsigned long,unsigned long,int *,int ) ;

int FUNC_1(struct ps3_dma_region *VAR_0, unsigned long VAR_1,
 unsigned long VAR_2, dma_addr_t *VAR_3,
 u64 VAR_4)
{
 return VAR_0->region_ops->map(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
