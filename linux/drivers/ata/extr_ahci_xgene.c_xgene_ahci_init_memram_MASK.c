
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_ahci_context {int dev; scalar_t__ csr_diag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct xgene_ahci_context *VAR_3)
{
 FUNC_0(VAR_3->dev, "Release memory from shutdown\n");
 FUNC_4(0x0, VAR_3->csr_diag + VAR_1);
 FUNC_3(VAR_3->csr_diag + VAR_1);
 FUNC_2(1);
 if (FUNC_3(VAR_3->csr_diag + VAR_0) != 0xFFFFFFFF) {
  FUNC_1(VAR_3->dev, "failed to release memory from shutdown\n");
  return -VAR_2;
 }
 return 0;
}
