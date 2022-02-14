
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct cci_drvdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cci_drvdata* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct pci_dev*,struct cci_drvdata*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_2)
{
 struct cci_drvdata *VAR_3;

 VAR_3 = FUNC_0(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_3);

 return 0;
}
