
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_resv_list {unsigned int shared_count; int * shared; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dma_resv_list*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct dma_resv_list *VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->shared_count; ++VAR_2)
  FUNC_0(FUNC_2(VAR_1->shared[VAR_2], 1));

 FUNC_1(VAR_1, VAR_0);
}
