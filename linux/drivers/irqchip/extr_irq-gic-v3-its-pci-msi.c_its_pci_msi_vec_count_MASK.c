
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_0, void *VAR_1)
{
 int VAR_2, VAR_3, *VAR_4 = VAR_1;

 VAR_2 = FUNC_0(FUNC_1(VAR_0), 0);
 VAR_3 = FUNC_0(FUNC_2(VAR_0), 0);
 *VAR_4 += FUNC_0(VAR_2, VAR_3);

 return 0;
}
