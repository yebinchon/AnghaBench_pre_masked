
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
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct pci_channel*,int,int ) ;

int FUNC_2(struct pci_channel *VAR_10)
{
 unsigned long VAR_11, VAR_12;

 VAR_11 = FUNC_0(VAR_6);
 VAR_11 |= 0x40080000;
 FUNC_1(VAR_10, VAR_11, VAR_2);

 VAR_12 = FUNC_0(VAR_7);
 VAR_12 = (VAR_12 & VAR_0) & VAR_1;
 FUNC_1(VAR_10, VAR_12, VAR_5);

 FUNC_1(VAR_10, 0x0c000000, VAR_8);
 FUNC_1(VAR_10, 0xd0000000, VAR_9);
 FUNC_1(VAR_10, 0x0c000000, VAR_3);
 FUNC_1(VAR_10, 0x00000000, VAR_4);

 return 0;
}
