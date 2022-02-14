
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct pci_conf {int pc_hdr; int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,struct pci_conf*,int) ;
 int FUNC_1 (int,struct pci_conf*,int) ;
 int FUNC_2 (int,struct pci_conf*,int) ;
 int FUNC_3 (int,struct pci_conf*,int) ;
 int FUNC_4 (int,struct pci_conf*,int) ;
 int FUNC_5 (int,struct pci_conf*,int) ;
 int FUNC_6 (int,struct pci_conf*,int) ;
 int FUNC_7 (int,struct pci_conf*,int) ;
 int FUNC_8 (int,struct pci_conf*,int) ;
 int FUNC_9 (int,struct pci_conf*,int) ;
 int FUNC_10 (int,struct pci_conf*,int) ;
 int FUNC_11 (int,struct pci_conf*,int) ;
 int FUNC_12 (int,struct pci_conf*,int) ;
 int FUNC_13 (int,struct pci_conf*,int) ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 (int,struct pci_conf*) ;
 int FUNC_16 (char*,...) ;
 void* FUNC_17 (int,int *,int,int) ;

void
FUNC_18(int VAR_7, struct pci_conf *VAR_8)
{
 int VAR_9;
 uint16_t VAR_10;
 uint8_t VAR_11, VAR_12;


 VAR_10 = FUNC_17(VAR_7, &VAR_8->pc_sel, VAR_6, 2);
 if (!(VAR_10 & VAR_3))
  return;

 switch (VAR_8->pc_hdr & VAR_2) {
 case 142:
 case 144:
  VAR_11 = VAR_4;
  break;
 case 143:
  VAR_11 = VAR_5;
  break;
 default:
  FUNC_14(1, "list_caps: bad header type");
 }


 VAR_9 = 0;
 VAR_11 = FUNC_17(VAR_7, &VAR_8->pc_sel, VAR_11, 1);
 while (VAR_11 != 0 && VAR_11 != 0xff) {
  VAR_12 = FUNC_17(VAR_7, &VAR_8->pc_sel, VAR_11 + VAR_0, 1);
  FUNC_16("    cap %02x[%02x] = ", VAR_12, VAR_11);
  switch (VAR_12) {
  case 132:
   FUNC_9(VAR_7, VAR_8, VAR_11);
   break;
  case 141:
   FUNC_0(VAR_7, VAR_8, VAR_11);
   break;
  case 128:
   FUNC_13(VAR_7, VAR_8, VAR_11);
   break;
  case 136:
   FUNC_5(VAR_7, VAR_8, VAR_11);
   break;
  case 133:
   FUNC_8(VAR_7, VAR_8, VAR_11);
   break;
  case 137:
   FUNC_4(VAR_7, VAR_8, VAR_11);
   break;
  case 129:
   FUNC_12(VAR_7, VAR_8, VAR_11);
   break;
  case 140:
   FUNC_1(VAR_7, VAR_8, VAR_11);
   break;
  case 130:
   FUNC_11(VAR_7, VAR_8, VAR_11);
   break;
  case 138:
   VAR_9 = 1;
   FUNC_3(VAR_7, VAR_8, VAR_11);
   break;
  case 135:
   FUNC_6(VAR_7, VAR_8, VAR_11);
   break;
  case 131:
   FUNC_10(VAR_7, VAR_8, VAR_11);
   break;
  case 134:
   FUNC_7(VAR_7, VAR_8, VAR_11);
   break;
  case 139:
   FUNC_2(VAR_7, VAR_8, VAR_11);
   break;
  default:
   FUNC_16("unknown");
   break;
  }
  FUNC_16("\n");
  VAR_11 = FUNC_17(VAR_7, &VAR_8->pc_sel, VAR_11 + VAR_1, 1);
 }

 if (VAR_9)
  FUNC_15(VAR_7, VAR_8);
}
