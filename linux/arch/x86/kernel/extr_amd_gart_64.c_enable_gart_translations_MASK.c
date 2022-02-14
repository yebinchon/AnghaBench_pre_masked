
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {struct pci_dev* misc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pci_dev*,int ) ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_2;

 if (!FUNC_2(VAR_0))
  return;

 for (VAR_2 = 0; VAR_2 < FUNC_3(); VAR_2++) {
  struct pci_dev *VAR_3 = FUNC_5(VAR_2)->misc;

  FUNC_4(VAR_3, FUNC_0(VAR_1));
 }


 FUNC_1();
}
