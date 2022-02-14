
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int VAR_21 ;

__attribute__((used)) static void
FUNC_5(const char* VAR_22)
{
 uint32_t VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 int VAR_26;
 int VAR_27;

 VAR_23 = FUNC_3(VAR_17);
 VAR_24 = (VAR_23 & VAR_2) >> VAR_18;
 FUNC_4("cpu%d %s:\n", FUNC_0(VAR_20), VAR_22);
 FUNC_4("     ID: 0x%08x   VER: 0x%08x LDR: 0x%08x DFR: 0x%08x",
     FUNC_3(VAR_6), VAR_23,
     FUNC_3(VAR_7), VAR_21 ? 0 : FUNC_3(VAR_4));
 if ((VAR_19 & VAR_3) != 0)
  FUNC_4(" x2APIC: %d", VAR_21);
 FUNC_4("\n  lint0: 0x%08x lint1: 0x%08x TPR: 0x%08x SVR: 0x%08x\n",
     FUNC_3(VAR_10), FUNC_3(VAR_11),
     FUNC_3(VAR_16), FUNC_3(VAR_15));
 FUNC_4("  timer: 0x%08x therm: 0x%08x err: 0x%08x",
     FUNC_3(VAR_14), FUNC_3(VAR_13),
     FUNC_3(VAR_9));
 if (VAR_24 >= VAR_1)
  FUNC_4(" pmc: 0x%08x", FUNC_3(VAR_12));
 FUNC_4("\n");
 if (VAR_24 >= VAR_0)
  FUNC_4("   cmci: 0x%08x\n", FUNC_3(VAR_8));
 VAR_25 = FUNC_2();
 if (VAR_25 != 0) {
  FUNC_4("   AMD ext features: 0x%08x\n", VAR_25);
  VAR_26 = FUNC_1();
  for (VAR_27 = 0; VAR_27 < VAR_26; VAR_27++)
   FUNC_4("   AMD elvt%d: 0x%08x\n", VAR_27,
       FUNC_3(VAR_5 + VAR_27));
 }
}
