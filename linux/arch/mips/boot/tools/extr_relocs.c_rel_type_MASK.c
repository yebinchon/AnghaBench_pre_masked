
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const* const*) ;
 char const* const FUNC_1 (int ) ;
__attribute__((used)) static const char *FUNC_2(unsigned VAR_0)
{
 static const char * const VAR_1[] = {

  [132] = "R_MIPS_NONE",
  [145] = "R_MIPS_16",
  [143] = "R_MIPS_32",
  [128] = "R_MIPS_REL32",
  [144] = "R_MIPS_26",
  [137] = "R_MIPS_HI16",
  [133] = "R_MIPS_LO16",
  [139] = "R_MIPS_GPREL16",
  [134] = "R_MIPS_LITERAL",
  [140] = "R_MIPS_GOT16",
  [131] = "R_MIPS_PC16",
  [141] = "R_MIPS_CALL16",
  [138] = "R_MIPS_GPREL32",
  [142] = "R_MIPS_64",
  [136] = "R_MIPS_HIGHER",
  [135] = "R_MIPS_HIGHEST",
  [130] = "R_MIPS_PC21_S2",
  [129] = "R_MIPS_PC26_S2",

 };
 const char *VAR_2 = "unknown type rel type name";

 if (VAR_0 < FUNC_0(VAR_1) && VAR_1[VAR_0])
  VAR_2 = VAR_1[VAR_0];
 return VAR_2;
}
