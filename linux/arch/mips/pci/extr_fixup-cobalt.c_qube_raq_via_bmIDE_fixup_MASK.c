
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int,unsigned char*) ;
 int FUNC_1 (struct pci_dev*,int ,unsigned short*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 int FUNC_3 (struct pci_dev*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_5)
{
 unsigned short VAR_6;
 unsigned char VAR_7;


 FUNC_1(VAR_5, VAR_1, &VAR_6);
 VAR_6 |= (VAR_2 | VAR_3);
 FUNC_3(VAR_5, VAR_1, VAR_6);


 FUNC_2(VAR_5, 0x40, 0xb);


 FUNC_0(VAR_5, VAR_4, &VAR_7);
 if (VAR_7 < 64)
  FUNC_2(VAR_5, VAR_4, 64);
 FUNC_2(VAR_5, VAR_0, 8);
}
