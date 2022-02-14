
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_3, unsigned int VAR_4, int VAR_5,
       int VAR_6, u32 VAR_7)
{
 unsigned int VAR_8 = FUNC_1(VAR_4);
 u8 VAR_9 = FUNC_0(VAR_4);
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12 = 0;

 if (VAR_3)
  VAR_12 = VAR_3->number;

 VAR_10 = (((VAR_5 & 0xF00) >> 8) << 24) | (VAR_12 << 16) | (VAR_8 << 11) |
    (VAR_9 << 8) | (VAR_5 & 0xfc) | 0x80000000;
 FUNC_3(VAR_10, VAR_1);
 VAR_11 = FUNC_2(VAR_2);

 switch (VAR_6) {
 case 1:
  VAR_11 = (VAR_11 & ~(0xff << ((VAR_5 & 3) << 3))) |
   (VAR_7 << ((VAR_5 & 3) << 3));
  break;
 case 2:
  VAR_11 = (VAR_11 & ~(0xffff << ((VAR_5 & 3) << 3))) |
   (VAR_7 << ((VAR_5 & 3) << 3));
  break;
 case 4:
  VAR_11 = VAR_7;
  break;
 }

 FUNC_3(VAR_11, VAR_2);

 return VAR_0;
}
