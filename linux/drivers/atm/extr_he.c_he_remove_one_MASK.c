
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct he_dev {int dummy; } ;
struct atm_dev {int dummy; } ;


 struct he_dev* FUNC_0 (struct atm_dev*) ;
 int FUNC_1 (struct atm_dev*) ;
 int FUNC_2 (struct he_dev*) ;
 int FUNC_3 (struct he_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct atm_dev* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct atm_dev *VAR_1;
 struct he_dev *VAR_2;

 VAR_1 = FUNC_5(VAR_0);
 VAR_2 = FUNC_0(VAR_1);



 FUNC_2(VAR_2);
 FUNC_1(VAR_1);
 FUNC_3(VAR_2);

 FUNC_4(VAR_0);
}
