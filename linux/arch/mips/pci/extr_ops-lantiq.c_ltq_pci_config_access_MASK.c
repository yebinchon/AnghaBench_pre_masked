
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {unsigned int number; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(unsigned char VAR_6, struct pci_bus *VAR_7,
 unsigned int VAR_8, unsigned int VAR_9, u32 *VAR_10)
{
 unsigned long VAR_11;
 unsigned long VAR_12;
 u32 VAR_13;



 if ((VAR_7->number != 0) || ((VAR_8 & 0xf8) > 0x78)
  || ((VAR_8 & 0xf8) == 0) || ((VAR_8 & 0xf8) == 0x68))
  return 1;

 FUNC_2(&VAR_4, VAR_12);

 VAR_11 = (unsigned long) VAR_5;
 VAR_11 |= (VAR_7->number << VAR_0) | (VAR_8 <<
   VAR_1) | (VAR_9 & ~0x3);


 if (VAR_6 == VAR_3) {
  FUNC_1(FUNC_4(*VAR_10), ((u32 *)VAR_11));
 } else {
  *VAR_10 = FUNC_0(((u32 *)(VAR_11)));
  *VAR_10 = FUNC_4(*VAR_10);
 }
 FUNC_5();


 VAR_11 = (unsigned long) VAR_5;
 VAR_11 |= (0x0 << VAR_1) + 4;
 VAR_13 = FUNC_0(((u32 *)(VAR_11)));
 VAR_13 = FUNC_4(VAR_13);
 VAR_11 = (unsigned long) VAR_5;
 VAR_11 |= (0x68 << VAR_1) + 4;
 FUNC_1(VAR_13, ((u32 *)VAR_11));

 FUNC_3(&VAR_4, VAR_12);

 if (((*VAR_10) == 0xffffffff) && (VAR_6 == VAR_2))
  return 1;

 return 0;
}
