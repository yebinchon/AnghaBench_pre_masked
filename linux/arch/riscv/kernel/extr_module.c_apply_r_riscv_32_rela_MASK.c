
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct module {int name; } ;
typedef scalar_t__ Elf_Addr ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,long long) ;

__attribute__((used)) static int FUNC_1(struct module *VAR_1, u32 *VAR_2, Elf_Addr VAR_3)
{
 if (VAR_3 != (u32)VAR_3) {
  FUNC_0("%s: value %016llx out of range for 32-bit field\n",
         VAR_1->name, (long long)VAR_3);
  return -VAR_0;
 }
 *VAR_2 = VAR_3;
 return 0;
}
