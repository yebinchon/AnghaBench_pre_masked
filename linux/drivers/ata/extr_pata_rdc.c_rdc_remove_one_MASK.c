
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdc_host_priv {int saved_iocfg; } ;
struct pci_dev {int dummy; } ;
struct ata_host {struct rdc_host_priv* private_data; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct ata_host* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct ata_host *VAR_1 = FUNC_1(VAR_0);
 struct rdc_host_priv *VAR_2 = VAR_1->private_data;

 FUNC_2(VAR_0, 0x54, VAR_2->saved_iocfg);

 FUNC_0(VAR_0);
}
