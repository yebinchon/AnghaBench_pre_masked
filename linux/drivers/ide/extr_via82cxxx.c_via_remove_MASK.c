
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via82cxxx_dev {int dummy; } ;
struct pci_dev {int dummy; } ;
struct ide_host {struct via82cxxx_dev* host_priv; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct via82cxxx_dev*) ;
 struct ide_host* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct ide_host *VAR_1 = FUNC_2(VAR_0);
 struct via82cxxx_dev *VAR_2 = VAR_1->host_priv;

 FUNC_0(VAR_0);
 FUNC_1(VAR_2);
}
