
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seqno_fence {TYPE_1__* ops; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {int (* enable_signaling ) (struct dma_fence*) ;} ;


 int FUNC_0 (struct dma_fence*) ;
 struct seqno_fence* FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static bool FUNC_2(struct dma_fence *VAR_0)
{
 struct seqno_fence *VAR_1 = FUNC_1(VAR_0);

 return VAR_1->ops->enable_signaling(VAR_0);
}
