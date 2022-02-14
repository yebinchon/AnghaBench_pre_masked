
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_ahci_context {int dev; scalar_t__ csr_core; scalar_t__ csr_axi; } ;
struct ahci_host_priv {scalar_t__ mmio; struct xgene_ahci_context* plat_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct xgene_ahci_context*) ;
 int FUNC_4 (struct xgene_ahci_context*,int) ;

__attribute__((used)) static int FUNC_5(struct ahci_host_priv *VAR_11)
{
 struct xgene_ahci_context *VAR_12 = VAR_11->plat_data;
 int VAR_13;
 int VAR_14;
 u32 VAR_15;


 VAR_14 = FUNC_3(VAR_12);
 if (VAR_14)
  return VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
  FUNC_4(VAR_12, VAR_13);


 FUNC_2(0xffffffff, VAR_11->mmio + VAR_2);
 FUNC_1(VAR_11->mmio + VAR_2);
 FUNC_2(0, VAR_12->csr_core + VAR_3);
 VAR_15 = FUNC_1(VAR_12->csr_core + VAR_3);
 FUNC_0(VAR_12->dev, "top level interrupt mask 0x%X value 0x%08X\n",
  VAR_3, VAR_15);

 FUNC_2(0x0, VAR_12->csr_core + VAR_1);
 FUNC_1(VAR_12->csr_core + VAR_1);
 FUNC_2(0x0, VAR_12->csr_axi + VAR_4);
 FUNC_1(VAR_12->csr_axi + VAR_4);


 FUNC_2(0xffffffff, VAR_12->csr_core + VAR_9);
 FUNC_2(0xffffffff, VAR_12->csr_core + VAR_10);
 FUNC_2(0xffffffff, VAR_12->csr_core + VAR_7);
 FUNC_2(0xffffffff, VAR_12->csr_core + VAR_8);


 VAR_15 = FUNC_1(VAR_12->csr_core + VAR_0);
 VAR_15 &= ~0x00000002;
 VAR_15 &= ~0x00000001;
 FUNC_2(VAR_15, VAR_12->csr_core + VAR_0);

 VAR_15 = FUNC_1(VAR_12->csr_core + VAR_5);
 VAR_15 |= (1 << 3);
 VAR_15 |= (1 << 9);
 FUNC_2(VAR_15, VAR_12->csr_core + VAR_5);
 VAR_15 = FUNC_1(VAR_12->csr_core + VAR_5);
 FUNC_0(VAR_12->dev, "coherency 0x%X value 0x%08X\n",
  VAR_5, VAR_15);

 return VAR_14;
}
