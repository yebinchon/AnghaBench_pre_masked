
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_fence*,int *,int *,int ,int ) ;
 struct dma_fence* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct dma_fence *FUNC_2(void)
{
 struct dma_fence *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (VAR_3)
  FUNC_0(VAR_3, &VAR_2, &VAR_1, 0, 0);

 return VAR_3;
}
