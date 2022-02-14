
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etnaviv_fence {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {int rcu; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct etnaviv_fence*,int ) ;
 struct etnaviv_fence* FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static void FUNC_2(struct dma_fence *VAR_1)
{
 struct etnaviv_fence *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, VAR_0.rcu);
}
