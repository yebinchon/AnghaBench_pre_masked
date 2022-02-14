
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rcu; } ;
struct lima_fence {TYPE_1__ base; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct lima_fence* FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static void FUNC_2(struct dma_fence *VAR_1)
{
 struct lima_fence *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->base.rcu, VAR_0);
}
