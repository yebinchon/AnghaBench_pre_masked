
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_dma {scalar_t__ csr_efuse; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct xgene_dma *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->csr_efuse + VAR_1);
 return !(VAR_3 & VAR_0);
}
