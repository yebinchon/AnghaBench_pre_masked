
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pasemi_smbus {int size; int base; int adapter; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pasemi_smbus*) ;
 struct pasemi_smbus* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct pasemi_smbus *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->adapter);
 FUNC_3(VAR_1->base, VAR_1->size);
 FUNC_1(VAR_1);
}
