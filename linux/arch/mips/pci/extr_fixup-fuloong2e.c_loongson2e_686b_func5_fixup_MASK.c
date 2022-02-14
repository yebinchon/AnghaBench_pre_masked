
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int,unsigned char*) ;
 int FUNC_1 (struct pci_dev*,int,unsigned int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 int FUNC_3 (struct pci_dev*,int,unsigned int) ;
 int FUNC_4 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_4)
{
 unsigned int VAR_5;
 unsigned char VAR_6;


 FUNC_2(VAR_4, VAR_0,
         VAR_1 | VAR_3 |
         VAR_2);
 FUNC_1(VAR_4, 0x4, &VAR_5);
 FUNC_3(VAR_4, 0x4, VAR_5 | 1);


 FUNC_2(VAR_4, 0x3c, 9);

 FUNC_0(VAR_4, 0x8, &VAR_6);


 FUNC_2(VAR_4, 0x41, 0xcc);


 FUNC_2(VAR_4, 0x42, 0x20);


 FUNC_4(VAR_4, 0x2c, 0x1005);
 FUNC_4(VAR_4, 0x2e, 0x4710);
 FUNC_1(VAR_4, 0x2c, &VAR_5);

 FUNC_2(VAR_4, 0x42, 0x0);
}
