
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_dma_chn {int chn_base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct sprd_dma_chn *VAR_0, u32 VAR_1,
    u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_0->chn_base + VAR_1);
 u32 VAR_5;

 VAR_5 = (VAR_4 & ~VAR_2) | VAR_3;
 FUNC_1(VAR_5, VAR_0->chn_base + VAR_1);
}
