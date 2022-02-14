
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int bus; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 struct priv* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->bus);

 FUNC_1(VAR_0);
}
