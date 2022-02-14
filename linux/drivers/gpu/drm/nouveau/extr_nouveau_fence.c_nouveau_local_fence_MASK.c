
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_fence {int dummy; } ;
struct TYPE_2__ {scalar_t__ context_base; scalar_t__ nr; } ;
struct nouveau_drm {TYPE_1__ chan; } ;
struct dma_fence {scalar_t__ context; int * ops; } ;


 struct nouveau_fence* FUNC_0 (struct dma_fence*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct nouveau_fence *
FUNC_1(struct dma_fence *VAR_2, struct nouveau_drm *VAR_3)
{
 if (VAR_2->ops != &VAR_0 &&
     VAR_2->ops != &VAR_1)
  return ((void*)0);

 if (VAR_2->context < VAR_3->chan.context_base ||
     VAR_2->context >= VAR_3->chan.context_base + VAR_3->chan.nr)
  return ((void*)0);

 return FUNC_0(VAR_2);
}
