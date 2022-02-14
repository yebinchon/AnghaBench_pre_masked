
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pci_dev*,int,unsigned char*) ;
 int FUNC_2 (struct pci_dev*,int ,unsigned int*) ;
 int FUNC_3 (struct pci_dev*,int,unsigned char) ;
 int FUNC_4 (struct pci_dev*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_2)
{
 unsigned char VAR_3;
 unsigned int VAR_4;

 if (!FUNC_0())
  return;


 FUNC_1(VAR_2, 0x83, &VAR_3);
 FUNC_3(VAR_2, 0x83, VAR_3|0x80);

 FUNC_2(VAR_2, VAR_0, &VAR_4);
 VAR_4 = (VAR_4 & 0xff) | (VAR_1 << 8);
 FUNC_4(VAR_2, VAR_0, VAR_4);


 FUNC_3(VAR_2, 0x83, VAR_3);


 FUNC_1(VAR_2, 0x84, &VAR_3);
 FUNC_3(VAR_2, 0x84, VAR_3 & ~0x01);
}
