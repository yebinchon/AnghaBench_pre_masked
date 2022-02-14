
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct module {int dummy; } ;
typedef int ptrdiff_t ;
typedef scalar_t__ Elf_Addr ;



__attribute__((used)) static int FUNC_0(struct module *VAR_0, u32 *VAR_1,
      Elf_Addr VAR_2)
{
 ptrdiff_t VAR_3 = (void *)VAR_2 - (void *)VAR_1;
 u16 VAR_4 = (VAR_3 & 0x100) << (12 - 8);
 u16 VAR_5 = (VAR_3 & 0xc0) >> (6 - 5);
 u16 VAR_6 = (VAR_3 & 0x20) >> (5 - 2);
 u16 VAR_7 = (VAR_3 & 0x18) << (12 - 5);
 u16 VAR_8 = (VAR_3 & 0x6) << (12 - 10);

 *(u16 *)VAR_1 = (*(u16 *)VAR_1 & 0xe383) |
      VAR_4 | VAR_5 | VAR_6 | VAR_7 | VAR_8;
 return 0;
}
