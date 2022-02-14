
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int * ops; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const struct dma_fence *VAR_1)
{
 return VAR_1->ops == &VAR_0;
}
