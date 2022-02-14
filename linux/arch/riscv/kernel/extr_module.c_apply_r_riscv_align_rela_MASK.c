
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct module {int name; } ;
typedef int Elf_Addr ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct module *VAR_1, u32 *VAR_2,
        Elf_Addr VAR_3)
{
 FUNC_0(
   "%s: The unexpected relocation type 'R_RISCV_ALIGN' from PC = %p\n",
   VAR_1->name, VAR_2);
 return -VAR_0;
}
