
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;
struct mock_fence {struct dma_fence base; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_fence*,int *,int *,int ,int ) ;
 struct mock_fence* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct dma_fence *FUNC_3(void)
{
 struct mock_fence *VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(&VAR_3->lock);
 FUNC_0(&VAR_3->base, &VAR_1, &VAR_3->lock, 0, 0);

 return &VAR_3->base;
}
