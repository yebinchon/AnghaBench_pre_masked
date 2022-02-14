
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buf {TYPE_1__* ops; } ;
struct TYPE_2__ {void* (* map ) (struct dma_buf*,unsigned long) ;} ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct dma_buf*,unsigned long) ;

void *FUNC_2(struct dma_buf *VAR_0, unsigned long VAR_1)
{
 FUNC_0(!VAR_0);

 if (!VAR_0->ops->map)
  return ((void*)0);
 return VAR_0->ops->map(VAR_0, VAR_1);
}
