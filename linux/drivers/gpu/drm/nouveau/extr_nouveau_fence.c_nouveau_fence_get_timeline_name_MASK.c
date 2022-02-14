
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_fence_chan {char const* name; int dead; } ;
struct nouveau_fence {int dummy; } ;
struct dma_fence {int dummy; } ;


 struct nouveau_fence* FUNC_0 (struct dma_fence*) ;
 struct nouveau_fence_chan* FUNC_1 (struct nouveau_fence*) ;

__attribute__((used)) static const char *FUNC_2(struct dma_fence *VAR_0)
{
 struct nouveau_fence *VAR_1 = FUNC_0(VAR_0);
 struct nouveau_fence_chan *VAR_2 = FUNC_1(VAR_1);

 return !VAR_2->dead ? VAR_2->name : "dead channel";
}
