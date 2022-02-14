
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct module {int name; } ;
typedef int Elf_Addr ;


 long FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*,int ,...) ;

__attribute__((used)) static int FUNC_3(struct module *VAR_1, u32 *VAR_2, u32 VAR_3,
      Elf_Addr VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6 = FUNC_1(VAR_5 - 1, 0);
 unsigned long VAR_7;
 long VAR_8;

 if (VAR_4 % 4) {
  FUNC_2("module %s: dangerous R_MIPS_PC%u relocation\n",
         VAR_1->name, VAR_5);
  return -VAR_0;
 }


 VAR_8 = VAR_3 & VAR_6;
 VAR_8 |= (VAR_8 & FUNC_0(VAR_5 - 1)) ? ~VAR_6 : 0;

 VAR_8 += ((long)VAR_4 - (long)VAR_2) >> 2;


 VAR_7 = (VAR_8 & FUNC_0(VAR_5 - 1)) ? ~0ul : 0;
 if ((VAR_8 & ~VAR_6) != (VAR_7 & ~VAR_6)) {
  FUNC_2("module %s: relocation overflow\n", VAR_1->name);
  return -VAR_0;
 }

 *VAR_2 = (*VAR_2 & ~VAR_6) | (VAR_8 & VAR_6);

 return 0;
}
