
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct pci_conf {int pc_hdr; int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_8, struct pci_conf *VAR_9, uint8_t VAR_10)
{
 uint32_t VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_11 = FUNC_1(VAR_8, &VAR_9->pc_sel, VAR_10 + VAR_7, 4);
 FUNC_0("PCI-X ");
 if (VAR_11 & VAR_4)
  FUNC_0("64-bit ");
 if ((VAR_9->pc_hdr & VAR_0) == 1)
  FUNC_0("bridge ");
 if ((VAR_9->pc_hdr & VAR_0) != 1 || (VAR_11 & (VAR_1 |
     VAR_2 | VAR_3)) != 0)
  FUNC_0("supports");
 VAR_12 = 0;
 if (VAR_11 & VAR_1) {
  FUNC_0(" 133MHz");
  VAR_12 = 1;
 }
 if (VAR_11 & VAR_2) {
  FUNC_0("%s 266MHz", VAR_12 ? "," : "");
  VAR_12 = 1;
 }
 if (VAR_11 & VAR_3) {
  FUNC_0("%s 533MHz", VAR_12 ? "," : "");
  VAR_12 = 1;
 }
 if ((VAR_9->pc_hdr & VAR_0) == 1)
  return;
 VAR_14 = 0;
 switch (VAR_11 & VAR_5) {
 case 136:
  VAR_14 = 512;
  break;
 case 139:
  VAR_14 = 1024;
  break;
 case 138:
  VAR_14 = 2048;
  break;
 case 137:
  VAR_14 = 4096;
  break;
 }
 VAR_13 = 0;
 switch (VAR_11 & VAR_6) {
 case 135:
  VAR_13 = 1;
  break;
 case 132:
  VAR_13 = 2;
  break;
 case 131:
  VAR_13 = 3;
  break;
 case 129:
  VAR_13 = 4;
  break;
 case 128:
  VAR_13 = 8;
  break;
 case 134:
  VAR_13 = 12;
  break;
 case 133:
  VAR_13 = 16;
  break;
 case 130:
  VAR_13 = 32;
  break;
 }
 FUNC_0("%s %d burst read, %d split transaction%s", VAR_12 ? "," : "",
     VAR_14, VAR_13, VAR_13 == 1 ? "" : "s");
}
