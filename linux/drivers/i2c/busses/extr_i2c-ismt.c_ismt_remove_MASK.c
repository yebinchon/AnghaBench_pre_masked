
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ismt_priv {int adapter; } ;


 int FUNC_0 (int *) ;
 struct ismt_priv* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 struct ismt_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->adapter);
}
