
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lima_fence {TYPE_2__* pipe; } ;
struct dma_fence {int dummy; } ;
struct TYPE_3__ {char const* name; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 struct lima_fence* FUNC_0 (struct dma_fence*) ;

__attribute__((used)) static const char *FUNC_1(struct dma_fence *VAR_0)
{
 struct lima_fence *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->pipe->base.name;
}
