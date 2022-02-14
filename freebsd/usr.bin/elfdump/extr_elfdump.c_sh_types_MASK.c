
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unknown_buf ;
typedef int uintmax_t ;
typedef int uint64_t ;
 int FUNC_0 (char*,int,char*,int ) ;

__attribute__((used)) static const char *
FUNC_1(uint64_t VAR_0, uint64_t VAR_1) {
 static char VAR_2[64];

 if (VAR_1 < 0x60000000) {
  switch (VAR_1) {
  case 140: return "SHT_NULL";
  case 138: return "SHT_PROGBITS";
  case 129: return "SHT_SYMTAB";
  case 134: return "SHT_STRTAB";
  case 136: return "SHT_RELA";
  case 147: return "SHT_HASH";
  case 152: return "SHT_DYNAMIC";
  case 141: return "SHT_NOTE";
  case 142: return "SHT_NOBITS";
  case 137: return "SHT_REL";
  case 135: return "SHT_SHLIB";
  case 151: return "SHT_DYNSYM";
  case 146: return "SHT_INIT_ARRAY";
  case 150: return "SHT_FINI_ARRAY";
  case 139: return "SHT_PREINIT_ARRAY";
  case 148: return "SHT_GROUP";
  case 128: return "SHT_SYMTAB_SHNDX";
  }
  FUNC_0(VAR_2, sizeof(VAR_2),
      "ERROR: SHT %ju NOT DEFINED", (uintmax_t)VAR_1);
  return (VAR_2);
 } else if (VAR_1 < 0x70000000) {

  switch (VAR_1) {
  case 0x6ffffff0: return "XXX:VERSYM";
  case 133: return "SHT_SUNW_dof";
  case 149: return "SHT_GNU_HASH";
  case 0x6ffffff7: return "SHT_GNU_LIBLIST";
  case 0x6ffffffc: return "XXX:VERDEF";
  case 132: return "SHT_SUNW(GNU)_verdef";
  case 131: return "SHT_SUNW(GNU)_verneed";
  case 130: return "SHT_SUNW(GNU)_versym";
  }
  FUNC_0(VAR_2, sizeof(VAR_2),
      "ERROR: OS-SPECIFIC SHT 0x%jx NOT DEFINED",
       (uintmax_t)VAR_1);
  return (VAR_2);
 } else if (VAR_1 < 0x80000000) {

  switch (VAR_0) {
  case 160:
   switch (VAR_1) {
   case 155: return "SHT_ARM_EXIDX";
   case 153:return "SHT_ARM_PREEMPTMAP";
   case 157:return "SHT_ARM_ATTRIBUTES";
   case 156:
       return "SHT_ARM_DEBUGOVERLAY";
   case 154:
       return "SHT_ARM_OVERLAYSECTION";
   }
   break;
  case 159:
   switch (VAR_1) {
   case 0x70000000: return "SHT_IA_64_EXT";
   case 0x70000001: return "SHT_IA_64_UNWIND";
   }
   break;
  case 158:
   switch (VAR_1) {
   case 143: return "SHT_MIPS_REGINFO";
   case 144: return "SHT_MIPS_OPTIONS";
   case 145: return "SHT_MIPS_ABIFLAGS";
   }
   break;
  }
  switch (VAR_1) {
  case 0x7ffffffd: return "XXX:AUXILIARY";
  case 0x7fffffff: return "XXX:FILTER";
  }
  FUNC_0(VAR_2, sizeof(VAR_2),
      "ERROR: PROCESSOR-SPECIFIC SHT 0x%jx NOT DEFINED",
       (uintmax_t)VAR_1);
  return (VAR_2);
 } else {

  FUNC_0(VAR_2, sizeof(VAR_2),
      "ERROR: SHT 0x%jx NOT DEFINED",
       (uintmax_t)VAR_1);
  return (VAR_2);
 }
}
