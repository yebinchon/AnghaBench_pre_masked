
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_dma_chn {scalar_t__ chn_base; } ;
typedef enum sprd_dma_req_mode { ____Placeholder_sprd_dma_req_mode } sprd_dma_req_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static enum sprd_dma_req_mode FUNC_1(struct sprd_dma_chn *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3->chn_base + VAR_0);

 return (VAR_4 >> VAR_2) & VAR_1;
}
