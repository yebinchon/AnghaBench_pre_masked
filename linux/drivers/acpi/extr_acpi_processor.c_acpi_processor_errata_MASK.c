
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3 = 0;
 struct pci_dev *VAR_4 = ((void*)0);




 VAR_4 = FUNC_2(VAR_2,
        VAR_1, VAR_0,
        VAR_0, ((void*)0));
 if (VAR_4) {
  VAR_3 = FUNC_0(VAR_4);
  FUNC_1(VAR_4);
 }

 return VAR_3;
}
