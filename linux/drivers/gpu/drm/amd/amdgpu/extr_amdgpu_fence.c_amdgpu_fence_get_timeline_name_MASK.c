
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct amdgpu_fence {TYPE_1__* ring; } ;
struct TYPE_2__ {scalar_t__ name; } ;


 struct amdgpu_fence* FUNC_0 (struct dma_fence*) ;

__attribute__((used)) static const char *FUNC_1(struct dma_fence *VAR_0)
{
 struct amdgpu_fence *VAR_1 = FUNC_0(VAR_0);
 return (const char *)VAR_1->ring->name;
}
