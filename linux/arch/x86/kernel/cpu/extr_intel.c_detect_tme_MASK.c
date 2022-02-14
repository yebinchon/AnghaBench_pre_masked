
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct cpuinfo_x86 {int x86_phys_bits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct cpuinfo_x86 *VAR_7)
{
 u64 VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0, VAR_12 = 0;
 static u64 VAR_13 = 0;

 FUNC_10(VAR_3, VAR_8);

 if (VAR_6 != VAR_2) {
  if (VAR_8 != VAR_13) {

   FUNC_6("x86/tme: configuration is inconsistent between CPUs\n");
   FUNC_6("x86/tme: MKTME is not usable\n");
   VAR_6 = VAR_0;


  }
 } else {
  VAR_13 = VAR_8;
 }

 if (!FUNC_3(VAR_8) || !FUNC_1(VAR_8)) {
  FUNC_8("x86/tme: not enabled by BIOS\n");
  VAR_6 = VAR_0;
  return;
 }

 if (VAR_6 != VAR_2)
  goto detect_keyid_bits;

 FUNC_7("x86/tme: enabled by BIOS\n");

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9 != VAR_5)
  FUNC_9("x86/tme: Unknown policy is active: %#llx\n", VAR_9);

 VAR_10 = FUNC_0(VAR_8);
 if (!(VAR_10 & VAR_4)) {
  FUNC_5("x86/mktme: No known encryption algorithm is supported: %#llx\n",
    VAR_10);
  VAR_6 = VAR_0;
 }
detect_keyid_bits:
 VAR_11 = FUNC_2(VAR_8);
 VAR_12 = (1UL << VAR_11) - 1;
 if (VAR_12) {
  FUNC_8("x86/mktme: enabled by BIOS\n");
  FUNC_8("x86/mktme: %d KeyIDs available\n", VAR_12);
 } else {
  FUNC_8("x86/mktme: disabled by BIOS\n");
 }

 if (VAR_6 == VAR_2) {

  VAR_6 = VAR_1;
 }





 VAR_7->x86_phys_bits -= VAR_11;
}
