
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned int u32 ;
struct cpuinfo_x86 {int x86; int x86_model; int cpuid_level; int microcode; int x86_stepping; int x86_cache_alignment; int x86_phys_bits; int x86_power; int x86_coreid_bits; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (struct cpuinfo_x86*) ;
 int FUNC_1 (struct cpuinfo_x86*) ;
 int FUNC_2 (struct cpuinfo_x86*) ;
 int FUNC_3 (struct cpuinfo_x86*,int ) ;
 scalar_t__ FUNC_4 (struct cpuinfo_x86*,int ) ;
 int FUNC_5 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct cpuinfo_x86*) ;
 int FUNC_8 (struct cpuinfo_x86*) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (struct cpuinfo_x86*) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (struct cpuinfo_x86*,int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct cpuinfo_x86 *VAR_21)
{
 u64 VAR_22;


 if (VAR_21->x86 > 6 || (VAR_21->x86 == 6 && VAR_21->x86_model >= 0xd)) {
  if (FUNC_12(VAR_0,
      VAR_2) > 0) {
   VAR_21->cpuid_level = FUNC_6(0);
   FUNC_10(VAR_21);
  }
 }

 if ((VAR_21->x86 == 0xf && VAR_21->x86_model >= 0x03) ||
  (VAR_21->x86 == 0x6 && VAR_21->x86_model >= 0x0e))
  FUNC_16(VAR_21, VAR_3);

 if (VAR_21->x86 >= 6 && !FUNC_4(VAR_21, VAR_5))
  VAR_21->microcode = FUNC_11();


 if ((FUNC_4(VAR_21, VAR_16) ||
      FUNC_4(VAR_21, VAR_8) ||
      FUNC_4(VAR_21, VAR_7) || FUNC_4(VAR_21, VAR_6) ||
      FUNC_4(VAR_21, VAR_19)) && FUNC_0(VAR_21)) {
  FUNC_14("Intel Spectre v2 broken microcode detected; disabling Speculation Control\n");
  FUNC_17(VAR_7);
  FUNC_17(VAR_6);
  FUNC_17(VAR_19);
  FUNC_17(VAR_16);
  FUNC_17(VAR_9);
  FUNC_17(VAR_8);
  FUNC_17(VAR_18);
  FUNC_17(VAR_17);
 }
 if (VAR_21->x86 == 6 && VAR_21->x86_model == 0x1c && VAR_21->x86_stepping <= 2 &&
     VAR_21->microcode < 0x20e) {
  FUNC_14("Atom PSE erratum detected, BIOS microcode update recommended\n");
  FUNC_3(VAR_21, VAR_14);
 }





 if (VAR_21->x86 == 15 && VAR_21->x86_cache_alignment == 64)
  VAR_21->x86_cache_alignment = 128;



 if (VAR_21->x86 == 0xF && VAR_21->x86_model == 0x3
     && (VAR_21->x86_stepping == 0x3 || VAR_21->x86_stepping == 0x4))
  VAR_21->x86_phys_bits = 36;
 if (VAR_21->x86_power & (1 << 8)) {
  FUNC_16(VAR_21, VAR_3);
  FUNC_16(VAR_21, VAR_10);
 }


 if (VAR_21->x86 == 6) {
  switch (VAR_21->x86_model) {
  case 130:
  case 129:
  case 128:
  case 131:
   FUNC_16(VAR_21, VAR_11);
   break;
  default:
   break;
  }
 }
 if (VAR_21->x86 == 6 && VAR_21->x86_model < 15)
  FUNC_3(VAR_21, VAR_12);





 if (VAR_21->x86 > 6 || (VAR_21->x86 == 6 && VAR_21->x86_model >= 0xd)) {
  FUNC_15(VAR_0, VAR_22);
  if (!(VAR_22 & VAR_1)) {
   FUNC_13("Disabled fast string operations\n");
   FUNC_17(VAR_15);
   FUNC_17(VAR_4);
  }
 }
 if (VAR_21->x86 == 5 && VAR_21->x86_model == 9) {
  FUNC_13("Disabling PGE capability bit\n");
  FUNC_17(VAR_13);
 }

 if (VAR_21->cpuid_level >= 0x00000001) {
  u32 VAR_23, VAR_24, VAR_25, VAR_26;

  FUNC_5(0x00000001, &VAR_23, &VAR_24, &VAR_25, &VAR_26);





  if (VAR_26 & (1U << 28))
   VAR_21->x86_coreid_bits = FUNC_9((VAR_24 >> 16) & 0xff);
 }

 FUNC_2(VAR_21);
 FUNC_1(VAR_21);





 if (FUNC_7(VAR_21) < 0)
  FUNC_8(VAR_21);
}
