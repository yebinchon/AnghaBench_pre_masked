
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_file {int file; int fence; } ;
struct dma_fence {int dummy; } ;


 struct dma_fence* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sync_file* FUNC_2 (int) ;

struct dma_fence *FUNC_3(int VAR_0)
{
 struct sync_file *VAR_1;
 struct dma_fence *VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_1->fence);
 FUNC_1(VAR_1->file);

 return VAR_2;
}
