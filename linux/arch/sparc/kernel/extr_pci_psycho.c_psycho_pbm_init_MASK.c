
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct pci_pbm_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_pbm_info*,struct platform_device*,char*,int ) ;
 int FUNC_1 (struct pci_pbm_info*,int) ;
 int FUNC_2 (struct pci_pbm_info*,int *) ;

__attribute__((used)) static void FUNC_3(struct pci_pbm_info *VAR_1,
       struct platform_device *VAR_2, int VAR_3)
{
 FUNC_0(VAR_1, VAR_2, "PSYCHO", VAR_0);
 FUNC_1(VAR_1, VAR_3);
 FUNC_2(VAR_1, &VAR_2->dev);
}
