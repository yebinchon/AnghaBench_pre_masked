
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct dma_chan* FUNC_0 (int ) ;
 struct dma_chan* FUNC_1 (int const*,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct dma_chan *FUNC_5(const dma_cap_mask_t *VAR_4)
{
 struct dma_chan *VAR_5;

 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(VAR_4, ((void*)0), ((void*)0), ((void*)0));
 if (!VAR_5) {
  FUNC_3(&VAR_3);
  if (FUNC_2(&VAR_2))
   VAR_5 = FUNC_0(-VAR_1);
  else
   VAR_5 = FUNC_0(-VAR_0);
  FUNC_4(&VAR_3);
 }

 return VAR_5;
}
