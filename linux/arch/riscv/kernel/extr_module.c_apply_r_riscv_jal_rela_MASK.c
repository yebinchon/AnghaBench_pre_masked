
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct module {int dummy; } ;
typedef int ptrdiff_t ;
typedef scalar_t__ Elf_Addr ;



__attribute__((used)) static int FUNC_0(struct module *VAR_0, u32 *VAR_1,
      Elf_Addr VAR_2)
{
 ptrdiff_t VAR_3 = (void *)VAR_2 - (void *)VAR_1;
 u32 VAR_4 = (VAR_3 & 0x100000) << (31 - 20);
 u32 VAR_5 = (VAR_3 & 0xff000);
 u32 VAR_6 = (VAR_3 & 0x800) << (20 - 11);
 u32 VAR_7 = (VAR_3 & 0x7fe) << (30 - 10);

 *VAR_1 = (*VAR_1 & 0xfff) | VAR_4 | VAR_5 | VAR_6 | VAR_7;
 return 0;
}
