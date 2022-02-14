
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_devinst {int dummy; } ;


 int FUNC_0 (struct pci_devinst*,int,int) ;
 int FUNC_1 (struct pci_devinst*,int,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct pci_devinst*,int) ;
 int FUNC_3 (struct pci_devinst*,int ) ;

__attribute__((used)) static void
FUNC_4(struct pci_devinst *VAR_1, int VAR_2, uint32_t VAR_3, int VAR_4)
{
 int VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_3(VAR_1, VAR_0);
 VAR_5 = (VAR_2 & 0x3) * 8;
 VAR_8 = 0xFFFFF880 >> VAR_5;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_4);
 VAR_3 &= ~VAR_8;
 VAR_3 |= (VAR_7 & VAR_8);
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_2(VAR_1, VAR_6);
}
