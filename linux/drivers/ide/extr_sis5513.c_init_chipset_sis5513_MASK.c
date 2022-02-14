
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 int FUNC_3 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_2)
{




 u8 VAR_3;
 u16 VAR_4;

 switch (VAR_1) {
 case 132:

  FUNC_1(VAR_2, 0x50, &VAR_4);
  if (VAR_4 & 0x08)
   FUNC_3(VAR_2, 0x50, VAR_4&0xfff7);
  FUNC_1(VAR_2, 0x52, &VAR_4);
  if (VAR_4 & 0x08)
   FUNC_3(VAR_2, 0x52, VAR_4&0xfff7);
  break;
 case 131:
 case 134:

  FUNC_2(VAR_2, VAR_0, 0x80);

  FUNC_0(VAR_2, 0x49, &VAR_3);
  if (!(VAR_3 & 0x01))
   FUNC_2(VAR_2, 0x49, VAR_3|0x01);
  break;
 case 133:
 case 128:

  FUNC_2(VAR_2, VAR_0, 0x10);


  FUNC_0(VAR_2, 0x52, &VAR_3);
  if (!(VAR_3 & 0x04))
   FUNC_2(VAR_2, 0x52, VAR_3|0x04);
  break;
 case 129:

  FUNC_0(VAR_2, 0x09, &VAR_3);
  if ((VAR_3 & 0x0f) != 0x00)
   FUNC_2(VAR_2, 0x09, VAR_3&0xf0);

 case 130:


  FUNC_0(VAR_2, 0x52, &VAR_3);
  if (!(VAR_3 & 0x08))
   FUNC_2(VAR_2, 0x52, VAR_3|0x08);
  break;
 }

 return 0;
}
