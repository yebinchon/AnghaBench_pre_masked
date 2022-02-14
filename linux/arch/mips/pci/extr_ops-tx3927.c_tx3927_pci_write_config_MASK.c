
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_bus {int dummy; } ;
struct TYPE_2__ {int icd; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct pci_bus*,unsigned int,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_2, unsigned int VAR_3,
 int VAR_4, int VAR_5, u32 VAR_6)
{
 if (FUNC_3(VAR_2, VAR_3, VAR_4))
  return VAR_0;

 switch (VAR_5) {
 case 1:
  *(volatile u8 *) ((unsigned long) & VAR_1->icd | (VAR_4 & 3)) = VAR_6;
  break;

 case 2:
  *(volatile u16 *) ((unsigned long) & VAR_1->icd | (VAR_4 & 2)) =
     FUNC_1(VAR_6);
  break;

 case 4:
  VAR_1->icd = FUNC_2(VAR_6);
 }

 return FUNC_0();
}
