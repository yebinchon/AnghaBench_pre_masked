
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_dma_chn {scalar_t__ chn_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sprd_dma_chn*) ;
 int FUNC_2 (struct sprd_dma_chn*,int) ;

__attribute__((used)) static void FUNC_3(struct sprd_dma_chn *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2->chn_base + VAR_0);

 if (!(VAR_3 & VAR_1))
  return;

 FUNC_2(VAR_2, 1);
 FUNC_1(VAR_2);
}
