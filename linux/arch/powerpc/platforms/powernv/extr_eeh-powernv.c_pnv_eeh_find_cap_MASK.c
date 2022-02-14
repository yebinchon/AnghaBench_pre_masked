
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dn*,int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct pci_dn *VAR_5, int VAR_6)
{
 int VAR_7 = VAR_0;
 int VAR_8 = 48;
 u32 VAR_9, VAR_10;

 if (!VAR_5)
  return 0;


 FUNC_0(VAR_5, VAR_3, 2, &VAR_9);
 if (!(VAR_9 & VAR_4))
  return 0;

 while (VAR_8--) {
  FUNC_0(VAR_5, VAR_7, 1, &VAR_7);
  if (VAR_7 < 0x40)
   break;

  VAR_7 &= ~3;
  FUNC_0(VAR_5, VAR_7 + VAR_1, 1, &VAR_10);
  if (VAR_10 == 0xff)
   break;


  if (VAR_10 == VAR_6)
   return VAR_7;


  VAR_7 += VAR_2;
 }

 return 0;
}
