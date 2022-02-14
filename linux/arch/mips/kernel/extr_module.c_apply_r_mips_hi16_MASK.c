
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct mips_hi16* r_mips_hi16_list; } ;
struct module {TYPE_1__ arch; } ;
struct mips_hi16 {struct mips_hi16* next; scalar_t__ value; scalar_t__* addr; } ;
typedef scalar_t__ Elf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 struct mips_hi16* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct module *VAR_2, u32 *VAR_3,
        u32 VAR_4, Elf_Addr VAR_5, bool VAR_6)
{
 struct mips_hi16 *VAR_7;

 if (VAR_6) {
  *VAR_3 = (*VAR_3 & 0xffff0000) |
       ((((long long) VAR_5 + 0x8000LL) >> 16) & 0xffff);
  return 0;
 }






 VAR_7 = FUNC_0(sizeof *VAR_7, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->addr = (Elf_Addr *)VAR_3;
 VAR_7->value = VAR_5;
 VAR_7->next = VAR_2->arch.r_mips_hi16_list;
 VAR_2->arch.r_mips_hi16_list = VAR_7;

 return 0;
}
