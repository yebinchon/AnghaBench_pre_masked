
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct dfl_afu_dma_region {scalar_t__ iova; scalar_t__ length; } ;



__attribute__((used)) static bool FUNC_0(struct dfl_afu_dma_region *VAR_0,
      u64 VAR_1, u64 VAR_2)
{
 if (!VAR_2 && VAR_0->iova != VAR_1)
  return 0;

 return (VAR_0->iova <= VAR_1) &&
  (VAR_0->length + VAR_0->iova >= VAR_1 + VAR_2);
}
