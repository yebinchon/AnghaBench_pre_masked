
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_timeline {int value; } ;
struct dma_fence {int ops; int seqno; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct sync_timeline* FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static bool FUNC_2(struct dma_fence *VAR_0)
{
 struct sync_timeline *VAR_1 = FUNC_1(VAR_0);

 return !FUNC_0(VAR_0->seqno, VAR_1->value, VAR_0->ops);
}
