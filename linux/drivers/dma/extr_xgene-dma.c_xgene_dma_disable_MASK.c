
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_dma {scalar_t__ csr_dma; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct xgene_dma *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1->csr_dma + VAR_0);
 FUNC_0(VAR_2);
 FUNC_2(VAR_2, VAR_1->csr_dma + VAR_0);
}
