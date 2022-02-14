
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv10_fence_chan {int base; int sema; } ;
struct nouveau_channel {struct nv10_fence_chan* fence; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct nouveau_channel *VAR_0)
{
 struct nv10_fence_chan *VAR_1 = VAR_0->fence;
 FUNC_0(&VAR_1->base);
 FUNC_2(&VAR_1->sema);
 VAR_0->fence = ((void*)0);
 FUNC_1(&VAR_1->base);
}
