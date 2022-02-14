
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct pci_conf {scalar_t__ pc_progif; int pc_device; int pc_vendor; int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
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
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int ,char*,int,int ,int ) ;
 int FUNC_6 (int,int *,int ,int) ;

__attribute__((used)) static void
FUNC_7(int VAR_18, struct pci_conf *VAR_19)
{
 uint64_t VAR_20, VAR_21;
 uint32_t VAR_22;
 uint16_t VAR_23;
 bool VAR_24;
 int VAR_25;







 VAR_22 = FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_9, 1);
 if (VAR_22 != 0 || FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_11, 1) != 0) {
  if ((VAR_22 & VAR_3) == VAR_2) {
   VAR_20 = FUNC_0(
       FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_8, 2),
       VAR_22);
   VAR_21 = FUNC_1(
       FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_10, 2),
       FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_11, 1));
   VAR_25 = 32;
  } else {
   VAR_20 = FUNC_0(0, VAR_22);
   VAR_21 = FUNC_1(0,
       FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_11, 1));
   VAR_25 = 16;
  }
  FUNC_5(VAR_9, "I/O Port", VAR_25, VAR_20, VAR_21);
 }

 VAR_20 = FUNC_2(0,
     FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_12, 2));
 VAR_21 = FUNC_3(0,
     FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_13, 2));
 FUNC_5(VAR_12, "Memory", 32, VAR_20, VAR_21);

 VAR_22 = FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_15, 2);
 if (VAR_22 != 0 || FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_17, 2) != 0) {
  if ((VAR_22 & VAR_5) == VAR_4) {
   VAR_20 = FUNC_2(
       FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_14, 4),
       VAR_22);
   VAR_21 = FUNC_3(
       FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_16, 4),
       FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_17, 2));
   VAR_25 = 64;
  } else {
   VAR_20 = FUNC_2(0, VAR_22);
   VAR_21 = FUNC_3(0,
       FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_17, 2));
   VAR_25 = 32;
  }
  FUNC_5(VAR_15, "Prefetchable Memory", VAR_25, VAR_20,
      VAR_21);
 }





 VAR_24 = VAR_19->pc_progif == VAR_6;
 switch (VAR_19->pc_device << 16 | VAR_19->pc_vendor) {
 case 0xa002177d:
 case 0x124b8086:
 case 0x060513d7:
  VAR_24 = 1;
 }
 if (VAR_19->pc_vendor == 0x8086 && (VAR_19->pc_device & 0xff00) == 0x2400)
  VAR_24 = 1;

 VAR_23 = FUNC_6(VAR_18, &VAR_19->pc_sel, VAR_7, 2);
 FUNC_4(VAR_23 & VAR_0,
     VAR_23 & VAR_1, VAR_24);
}
