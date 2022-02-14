
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*,int,unsigned char*) ;
 int FUNC_2 (struct pci_dev*,int,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_3)
{
 unsigned char VAR_4;

 if (!FUNC_0(VAR_2))
  return;

 FUNC_1(VAR_3, 0x83, &VAR_4);
 VAR_4 |= 0x80;
 FUNC_2(VAR_3, 0x83, VAR_4);

 FUNC_2(VAR_3, VAR_1, 0x01);
 FUNC_2(VAR_3, VAR_0, 0x06);

 FUNC_1(VAR_3, 0x83, &VAR_4);
 VAR_4 &= 0x7f;
 FUNC_2(VAR_3, 0x83, VAR_4);
}
