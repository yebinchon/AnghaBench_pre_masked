
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct module {int dummy; } ;
typedef int s32 ;
typedef scalar_t__ Elf_Addr ;



__attribute__((used)) static int FUNC_0(struct module *VAR_0, u32 *VAR_1,
         Elf_Addr VAR_2)
{

 s32 VAR_3 = ((s32)VAR_2 + 0x800) & 0xfffff000;
 s32 VAR_4 = ((s32)VAR_2 - VAR_3);
 u32 VAR_5 = (VAR_4 & 0xfe0) << (31 - 11);
 u32 VAR_6 = (VAR_4 & 0x1f) << (11 - 4);
 *VAR_1 = (*VAR_1 & 0x1fff07f) | VAR_5 | VAR_6;
 return 0;
}
