
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfl_afu_dma_region {int length; int * pages; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct dfl_afu_dma_region *VAR_1)
{
 int VAR_2 = VAR_1->length >> VAR_0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2 - 1; VAR_3++)
  if (FUNC_0(VAR_1->pages[VAR_3]) + 1 !=
    FUNC_0(VAR_1->pages[VAR_3 + 1]))
   return 0;

 return 1;
}
