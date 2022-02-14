
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct pci_devinst {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_devinst*,int,int,int,int) ;
 int FUNC_2 (struct pci_devinst*,int,int,int,int) ;
 int FUNC_3 (struct pci_devinst*,int) ;
 int FUNC_4 (struct pci_devinst*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_5(struct pci_devinst *VAR_1, int VAR_2, int VAR_3, uint32_t VAR_4)
{
 int VAR_5;
 uint8_t VAR_6, VAR_7;


 if ((VAR_2 & (VAR_3 - 1)) != 0)
  return;


 VAR_6 = VAR_0;
 while (1) {
  VAR_7 = FUNC_3(VAR_1, VAR_6 + 1);
  if (VAR_7 == 0)
   break;
  if (VAR_2 >= VAR_6 && VAR_2 < VAR_7)
   break;

  VAR_6 = VAR_7;
 }
 FUNC_0(VAR_2 >= VAR_6);







 if (VAR_2 == VAR_6 || VAR_2 == VAR_6 + 1) {
  if (VAR_2 == VAR_6 && VAR_3 == 4) {
   VAR_3 = 2;
   VAR_2 += 2;
   VAR_4 >>= 16;
  } else
   return;
 }

 VAR_5 = FUNC_3(VAR_1, VAR_6);
 switch (VAR_5) {
 case 129:
  FUNC_1(VAR_1, VAR_6, VAR_2, VAR_3, VAR_4);
  break;
 case 128:
  FUNC_2(VAR_1, VAR_6, VAR_2, VAR_3, VAR_4);
  break;
 case 130:
  FUNC_4(VAR_1, VAR_6, VAR_2, VAR_3, VAR_4);
  break;
 default:
  break;
 }
}
