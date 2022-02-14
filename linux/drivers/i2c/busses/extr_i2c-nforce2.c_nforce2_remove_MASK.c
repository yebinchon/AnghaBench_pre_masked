
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct nforce2_smbus {int size; scalar_t__ base; int adapter; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nforce2_smbus*) ;
 int FUNC_2 (int *) ;
 struct nforce2_smbus* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct nforce2_smbus *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(((void*)0));
 if (VAR_1[0].base) {
  FUNC_0(&VAR_1[0].adapter);
  FUNC_4(VAR_1[0].base, VAR_1[0].size);
 }
 if (VAR_1[1].base) {
  FUNC_0(&VAR_1[1].adapter);
  FUNC_4(VAR_1[1].base, VAR_1[1].size);
 }
 FUNC_1(VAR_1);
}
