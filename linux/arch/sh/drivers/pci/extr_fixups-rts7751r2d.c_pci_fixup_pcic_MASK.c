
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_channel {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct pci_channel*,int,int ) ;

int FUNC_2(struct pci_channel *VAR_14)
{
 unsigned long VAR_15, VAR_16;

 VAR_15 = FUNC_0(VAR_8);
 VAR_15 |= 0x40080000;
 FUNC_1(VAR_14, VAR_15, VAR_3);


 FUNC_1(VAR_14, 0x0000c3ff, VAR_4);
 FUNC_1(VAR_14, 0x0000380f, VAR_2);

 FUNC_1(VAR_14, 0xfb900047, VAR_10);
 FUNC_1(VAR_14, 0xab000001, VAR_11);

 VAR_16 = FUNC_0(VAR_9);
 VAR_16 = (VAR_16 & VAR_0) & VAR_1;
 FUNC_1(VAR_14, VAR_16, VAR_7);

 FUNC_1(VAR_14, 0x0c000000, VAR_12);
 FUNC_1(VAR_14, 0xd0000000, VAR_13);
 FUNC_1(VAR_14, 0x0c000000, VAR_5);
 FUNC_1(VAR_14, 0x00000000, VAR_6);

 return 0;
}
