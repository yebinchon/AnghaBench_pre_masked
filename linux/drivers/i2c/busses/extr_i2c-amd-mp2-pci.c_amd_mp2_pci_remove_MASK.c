
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct amd_mp2_dev {int dummy; } ;


 int FUNC_0 (struct amd_mp2_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct amd_mp2_dev* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct amd_mp2_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(&VAR_0->dev);
 FUNC_5(&VAR_0->dev);

 FUNC_3(VAR_0, 0);
 FUNC_1(VAR_0);

 FUNC_0(VAR_1);
}
