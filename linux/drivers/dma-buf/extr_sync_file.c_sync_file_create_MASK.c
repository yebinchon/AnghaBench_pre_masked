
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_file {int fence; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence*) ;
 struct sync_file* FUNC_1 () ;

struct sync_file *FUNC_2(struct dma_fence *VAR_0)
{
 struct sync_file *VAR_1;

 VAR_1 = FUNC_1();
 if (!VAR_1)
  return ((void*)0);

 VAR_1->fence = FUNC_0(VAR_0);

 return VAR_1;
}
