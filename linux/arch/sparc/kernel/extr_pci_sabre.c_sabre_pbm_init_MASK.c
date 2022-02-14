
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct pci_pbm_info {scalar_t__ controller_regs; scalar_t__ pci_csr; scalar_t__ pci_afar; scalar_t__ pci_afsr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pci_pbm_info*,struct platform_device*,char*,int ) ;
 int FUNC_1 (struct pci_pbm_info*,int *) ;

__attribute__((used)) static void FUNC_2(struct pci_pbm_info *VAR_4,
      struct platform_device *VAR_5)
{
 FUNC_0(VAR_4, VAR_5, "SABRE", VAR_0);
 VAR_4->pci_afsr = VAR_4->controller_regs + VAR_3;
 VAR_4->pci_afar = VAR_4->controller_regs + VAR_2;
 VAR_4->pci_csr = VAR_4->controller_regs + VAR_1;
 FUNC_1(VAR_4, &VAR_5->dev);
}
