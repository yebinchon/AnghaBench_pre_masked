
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct emu {int size; int io; int gameport; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct emu*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct emu* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct emu *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->gameport);
 FUNC_4(VAR_1->io, VAR_1->size);
 FUNC_1(VAR_1);

 FUNC_2(VAR_0);
}
