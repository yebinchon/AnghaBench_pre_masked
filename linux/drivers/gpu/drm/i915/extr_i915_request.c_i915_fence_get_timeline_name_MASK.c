
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_fence {int flags; } ;
struct TYPE_4__ {TYPE_1__* gem_context; } ;
struct TYPE_3__ {scalar_t__ name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 TYPE_2__* FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static const char *FUNC_2(struct dma_fence *VAR_1)
{
 if (FUNC_0(VAR_0, &VAR_1->flags))
  return "signaled";

 return FUNC_1(VAR_1)->gem_context->name ?: "[i915]";
}
