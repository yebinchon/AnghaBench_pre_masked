
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct module {int name; } ;
typedef int s32 ;
typedef scalar_t__ Elf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,long long,int*) ;

__attribute__((used)) static int FUNC_2(struct module *VAR_2, u32 *VAR_3,
       Elf_Addr VAR_4)
{
 s32 VAR_5;

 if (FUNC_0(VAR_0)) {
  FUNC_1(
    "%s: target %016llx can not be addressed by the 32-bit offset from PC = %p\n",
    VAR_2->name, (long long)VAR_4, VAR_3);
  return -VAR_1;
 }

 VAR_5 = ((s32)VAR_4 + 0x800) & 0xfffff000;
 *VAR_3 = (*VAR_3 & 0xfff) | VAR_5;
 return 0;
}
