
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct module {int name; } ;
typedef int Elf_Addr ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(struct module *VAR_1, u32 *VAR_2,
      u32 VAR_3, Elf_Addr VAR_4, bool VAR_5)
{
 if (VAR_4 % 4) {
  FUNC_0("module %s: dangerous R_MIPS_26 relocation\n",
         VAR_1->name);
  return -VAR_0;
 }

 if ((VAR_4 & 0xf0000000) != (((unsigned long)VAR_2 + 4) & 0xf0000000)) {
  FUNC_0("module %s: relocation overflow\n",
         VAR_1->name);
  return -VAR_0;
 }

 *VAR_2 = (*VAR_2 & ~0x03ffffff) |
      ((VAR_3 + (VAR_4 >> 2)) & 0x03ffffff);

 return 0;
}
