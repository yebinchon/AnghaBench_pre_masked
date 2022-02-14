
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct it821x_dev {int dummy; } ;
struct ide_host {struct it821x_dev* host_priv; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct it821x_dev*) ;
 struct ide_host* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct ide_host *VAR_1 = FUNC_2(VAR_0);
 struct it821x_dev *VAR_2 = VAR_1->host_priv;

 FUNC_0(VAR_0);
 FUNC_1(VAR_2);
}
