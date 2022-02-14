
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_ahci_context {scalar_t__ csr_mux; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct xgene_ahci_context *VAR_2)
{
 u32 VAR_3;


 if (!VAR_2->csr_mux)
  return 0;

 VAR_3 = FUNC_0(VAR_2->csr_mux + VAR_1);
 VAR_3 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_2->csr_mux + VAR_1);
 VAR_3 = FUNC_0(VAR_2->csr_mux + VAR_1);
 return VAR_3 & VAR_0 ? -1 : 0;
}
