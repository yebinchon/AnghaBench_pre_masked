
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seqno_fence {TYPE_1__* ops; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {long (* wait ) (struct dma_fence*,int,long) ;} ;


 long FUNC_0 (struct dma_fence*,int,long) ;
 struct seqno_fence* FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static signed long FUNC_2(struct dma_fence *VAR_0, bool VAR_1,
         signed long VAR_2)
{
 struct seqno_fence *VAR_3 = FUNC_1(VAR_0);

 return VAR_3->ops->wait(VAR_0, VAR_1, VAR_2);
}
