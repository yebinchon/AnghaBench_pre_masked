
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {struct pci_dev* misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (struct pci_dev*,int ,int *) ;
 int FUNC_4 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 u32 VAR_3;
 int VAR_4;

 if (!FUNC_0(VAR_1))
  return;

 for (VAR_4 = 0; VAR_4 < FUNC_1(); VAR_4++) {
  struct pci_dev *VAR_5 = FUNC_2(VAR_4)->misc;

  FUNC_3(VAR_5, VAR_0, &VAR_3);
  VAR_3 &= ~VAR_2;
  FUNC_4(VAR_5, VAR_0, VAR_3);
 }
}
