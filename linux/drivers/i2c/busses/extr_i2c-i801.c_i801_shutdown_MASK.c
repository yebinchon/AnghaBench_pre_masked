
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct i801_priv {int original_hstcfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct i801_priv*) ;
 struct i801_priv* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 struct i801_priv *VAR_2 = FUNC_1(VAR_1);


 FUNC_0(VAR_2);
 FUNC_2(VAR_1, VAR_0, VAR_2->original_hstcfg);
}
