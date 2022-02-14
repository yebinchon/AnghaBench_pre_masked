
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct eeh_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pci_dev* FUNC_0 (struct eeh_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct eeh_dev *VAR_3,
         void *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_0(VAR_3);
 struct pci_dev *VAR_6 = VAR_4;





 if (!VAR_5 || VAR_5 == VAR_6)
  return;


 FUNC_2(VAR_5, VAR_2);


 FUNC_1(VAR_5);





 FUNC_3(VAR_5, VAR_0, VAR_1);
}
