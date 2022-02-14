
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct module {int name; } ;
typedef int s32 ;
typedef int ptrdiff_t ;
typedef scalar_t__ Elf_Addr ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,long long,int*) ;

__attribute__((used)) static int FUNC_1(struct module *VAR_1, u32 *VAR_2,
       Elf_Addr VAR_3)
{
 ptrdiff_t VAR_4 = (void *)VAR_3 - (void *)VAR_2;
 s32 VAR_5 = VAR_4;
 u32 VAR_6, VAR_7;

 if (VAR_4 != VAR_5) {
  FUNC_0(
    "%s: target %016llx can not be addressed by the 32-bit offset from PC = %p\n",
    VAR_1->name, (long long)VAR_3, VAR_2);
  return -VAR_0;
 }

 VAR_6 = (VAR_4 + 0x800) & 0xfffff000;
 VAR_7 = (VAR_4 - VAR_6) & 0xfff;
 *VAR_2 = (*VAR_2 & 0xfff) | VAR_6;
 *(VAR_2 + 1) = (*(VAR_2 + 1) & 0xfffff) | (VAR_7 << 20);
 return 0;
}
