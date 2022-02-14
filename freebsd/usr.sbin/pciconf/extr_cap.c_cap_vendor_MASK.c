
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct pci_conf {int pc_vendor; int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int *,int,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_2, struct pci_conf *VAR_3, uint8_t VAR_4)
{
 uint8_t VAR_5;

 VAR_5 = FUNC_1(VAR_2, &VAR_3->pc_sel, VAR_4 + VAR_1, 1);
 FUNC_0("vendor (length %d)", VAR_5);
 if (VAR_3->pc_vendor == 0x8086) {

  uint8_t VAR_6;

  VAR_6 = FUNC_1(VAR_2, &VAR_3->pc_sel, VAR_4 + VAR_0,
      1);
  FUNC_0(" Intel cap %d version %d", VAR_6 >> 4, VAR_6 & 0xf);
  if (VAR_6 >> 4 == 1 && VAR_5 == 12) {

   uint32_t VAR_7;
   int VAR_8;

   VAR_8 = 0;
   VAR_7 = FUNC_1(VAR_2, &VAR_3->pc_sel, VAR_4 +
       VAR_0 + 5, 4);
   FUNC_0("\n\t\t features:");
   if (VAR_7 & (1 << 0)) {
    FUNC_0(" AMT");
    VAR_8 = 1;
   }
   VAR_7 = FUNC_1(VAR_2, &VAR_3->pc_sel, VAR_4 +
       VAR_0 + 1, 4);
   if (VAR_7 & (1 << 21)) {
    FUNC_0("%s Quick Resume", VAR_8 ? "," : "");
    VAR_8 = 1;
   }
   if (VAR_7 & (1 << 18)) {
    FUNC_0("%s SATA RAID-5", VAR_8 ? "," : "");
    VAR_8 = 1;
   }
   if (VAR_7 & (1 << 9)) {
    FUNC_0("%s Mobile", VAR_8 ? "," : "");
    VAR_8 = 1;
   }
   if (VAR_7 & (1 << 7)) {
    FUNC_0("%s 6 PCI-e x1 slots", VAR_8 ? "," : "");
    VAR_8 = 1;
   } else {
    FUNC_0("%s 4 PCI-e x1 slots", VAR_8 ? "," : "");
    VAR_8 = 1;
   }
   if (VAR_7 & (1 << 5)) {
    FUNC_0("%s SATA RAID-0/1/10", VAR_8 ? "," : "");
    VAR_8 = 1;
   }
   if (VAR_7 & (1 << 3))
    FUNC_0(", SATA AHCI");
  }
 }
}
