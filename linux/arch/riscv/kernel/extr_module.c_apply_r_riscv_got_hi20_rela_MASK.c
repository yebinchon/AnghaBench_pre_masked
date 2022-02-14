
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
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct module*,scalar_t__) ;
 int FUNC_2 (char*,int ,long long,int*) ;

__attribute__((used)) static int FUNC_3(struct module *VAR_2, u32 *VAR_3,
           Elf_Addr VAR_4)
{
 ptrdiff_t VAR_5 = (void *)VAR_4 - (void *)VAR_3;
 s32 VAR_6;


 if (FUNC_0(VAR_0)) {
  VAR_5 = FUNC_1(VAR_2, VAR_4);
  VAR_5 = (void *)VAR_5 - (void *)VAR_3;
 } else {
  FUNC_2(
    "%s: can not generate the GOT entry for symbol = %016llx from PC = %p\n",
    VAR_2->name, (long long)VAR_4, VAR_3);
  return -VAR_1;
 }

 VAR_6 = (VAR_5 + 0x800) & 0xfffff000;
 *VAR_3 = (*VAR_3 & 0xfff) | VAR_6;
 return 0;
}
