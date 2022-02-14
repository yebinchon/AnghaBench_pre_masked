
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seqno_fence {int base; TYPE_1__* ops; int sync_buf; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {int (* release ) (struct dma_fence*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dma_fence*) ;
 struct seqno_fence* FUNC_3 (struct dma_fence*) ;

__attribute__((used)) static void FUNC_4(struct dma_fence *VAR_0)
{
 struct seqno_fence *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->sync_buf);
 if (VAR_1->ops->release)
  VAR_1->ops->release(VAR_0);
 else
  FUNC_1(&VAR_1->base);
}
