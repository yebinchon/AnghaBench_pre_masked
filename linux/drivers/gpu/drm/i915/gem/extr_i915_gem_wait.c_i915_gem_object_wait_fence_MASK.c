
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dma_fence*) ;
 long FUNC_2 (struct dma_fence*,unsigned int,long) ;
 long FUNC_3 (int ,unsigned int,long) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct dma_fence*) ;

__attribute__((used)) static long
FUNC_6(struct dma_fence *VAR_2,
      unsigned int VAR_3,
      long VAR_4)
{
 FUNC_0(VAR_1 != 0x1);

 if (FUNC_4(VAR_0, &VAR_2->flags))
  return VAR_4;

 if (FUNC_1(VAR_2))
  return FUNC_3(FUNC_5(VAR_2), VAR_3, VAR_4);

 return FUNC_2(VAR_2,
          VAR_3 & VAR_1,
          VAR_4);
}
