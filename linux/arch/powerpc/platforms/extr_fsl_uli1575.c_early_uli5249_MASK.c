
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pci_dev*,int,unsigned char*) ;
 int FUNC_2 (struct pci_dev*,int,unsigned char) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_5)
{
 unsigned char VAR_6;

 if (!FUNC_0())
  return;

 FUNC_3(VAR_5, VAR_1, VAR_2 |
   VAR_4 | VAR_3);


 FUNC_1(VAR_5, 0x7c, &VAR_6);
 FUNC_2(VAR_5, 0x7c, 0x80);


 FUNC_2(VAR_5, VAR_0, 0x01);
 VAR_5->class |= 0x1;


 FUNC_2(VAR_5, 0x7c, VAR_6);
}
