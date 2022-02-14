
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct module {int dummy; } ;
typedef int Elf_Addr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct module *VAR_1, u32 *VAR_2,
      u32 VAR_3, Elf_Addr VAR_4, bool VAR_5)
{
 if (FUNC_0(!VAR_5))
  return -VAR_0;

 *(Elf_Addr *)VAR_2 = VAR_4;

 return 0;
}
