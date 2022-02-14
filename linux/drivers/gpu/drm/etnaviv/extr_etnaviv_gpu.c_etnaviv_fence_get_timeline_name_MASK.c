
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etnaviv_fence {TYPE_1__* gpu; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 char const* FUNC_0 (int ) ;
 struct etnaviv_fence* FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static const char *FUNC_2(struct dma_fence *VAR_0)
{
 struct etnaviv_fence *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->gpu->dev);
}
