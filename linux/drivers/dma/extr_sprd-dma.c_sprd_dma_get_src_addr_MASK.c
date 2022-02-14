
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_dma_chn {scalar_t__ chn_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_1(struct sprd_dma_chn *VAR_4)
{
 unsigned long VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_4->chn_base + VAR_0);
 VAR_6 = FUNC_0(VAR_4->chn_base + VAR_1) &
      VAR_2;

 return VAR_5 | (VAR_6 << VAR_3);
}
