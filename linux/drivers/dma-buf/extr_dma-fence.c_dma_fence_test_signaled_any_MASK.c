
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dma_fence {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static bool
FUNC_1(struct dma_fence **VAR_1, uint32_t VAR_2,
       uint32_t *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  struct dma_fence *VAR_5 = VAR_1[VAR_4];
  if (FUNC_0(VAR_0, &VAR_5->flags)) {
   if (VAR_3)
    *VAR_3 = VAR_4;
   return 1;
  }
 }
 return 0;
}
