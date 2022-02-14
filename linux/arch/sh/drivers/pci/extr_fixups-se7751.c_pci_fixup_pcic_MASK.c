
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_channel {TYPE_1__* resources; } ;
struct TYPE_2__ {int start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_2 (char*) ;

int FUNC_3(struct pci_channel *VAR_31)
{
 unsigned long VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
 unsigned short VAR_37;
 VAR_32 = (*(volatile unsigned long*)(VAR_2));
 VAR_37 = (*(volatile unsigned short*)(VAR_3));
 VAR_33 = (*(volatile unsigned long*)(VAR_28));
 VAR_34 = (*(volatile unsigned long*)(VAR_29));
 VAR_35 = (*(volatile unsigned long*)(VAR_30));
 VAR_36 = (*(volatile unsigned long*)(VAR_4));

 VAR_32 = VAR_32 | 0x00080000;
 (*(volatile unsigned long*)(VAR_2)) = VAR_32;

 VAR_32 = VAR_32 | 0x40080000;
 FUNC_1(VAR_6, VAR_32);
 FUNC_1(VAR_7, VAR_37);
 FUNC_1(VAR_24, VAR_33);
 FUNC_1(VAR_25, VAR_34);
 FUNC_1(VAR_26, VAR_35);
 VAR_36 = (VAR_36 & VAR_0) & VAR_1;
 FUNC_1(VAR_23, VAR_36);



 FUNC_1(VAR_15, 0x0000c3ff);
 FUNC_1(VAR_5, 0x0000380f);


 FUNC_1(VAR_8, 0xF39000C7);
 FUNC_1(VAR_10, 0x00000000);
 FUNC_1(VAR_11, 0xab000001);
 FUNC_1(VAR_12, 0x0c000000);
 FUNC_1(VAR_13, 0xd0000000);
 FUNC_1(VAR_9, 0x35051054);
 FUNC_1(VAR_20, 0x03f00000);
 FUNC_1(VAR_21, 0x00000000);
 FUNC_1(VAR_18, 0x0c000000);
 FUNC_1(VAR_19, 0x00000000);


 FUNC_1(VAR_14, 0xa5000001);
 FUNC_0(VAR_31->resources[1].start != VAR_27);

 FUNC_1(VAR_22, VAR_31->resources[1].start);


 FUNC_1(VAR_16, (VAR_31->resources[0].start & VAR_17));


 FUNC_2("SH7751 PCI: Finished initialization of the PCI controller\n");

 return 1;
}
