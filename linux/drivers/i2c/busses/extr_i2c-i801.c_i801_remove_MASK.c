
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct i801_priv {int tco_pdev; int original_hstcfg; int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct i801_priv*) ;
 int FUNC_2 (struct i801_priv*) ;
 int FUNC_3 (struct i801_priv*) ;
 struct i801_priv* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_1)
{
 struct i801_priv *VAR_2 = FUNC_4(VAR_1);

 FUNC_7(&VAR_1->dev);
 FUNC_8(&VAR_1->dev);

 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
 FUNC_0(&VAR_2->adapter);
 FUNC_1(VAR_2);
 FUNC_5(VAR_1, VAR_0, VAR_2->original_hstcfg);

 FUNC_6(VAR_2->tco_pdev);





}
