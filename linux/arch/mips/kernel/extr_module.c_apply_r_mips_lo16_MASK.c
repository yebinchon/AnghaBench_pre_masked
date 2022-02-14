
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct mips_hi16* r_mips_hi16_list; } ;
struct module {int name; TYPE_1__ arch; } ;
struct mips_hi16 {int value; unsigned long* addr; struct mips_hi16* next; } ;
typedef int Elf_Addr ;


 int VAR_0 ;
 int FUNC_0 (struct mips_hi16*) ;
 int FUNC_1 (struct mips_hi16*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct module *VAR_1, u32 *VAR_2,
        u32 VAR_3, Elf_Addr VAR_4, bool VAR_5)
{
 unsigned long VAR_6 = VAR_3;
 struct mips_hi16 *VAR_7;
 Elf_Addr VAR_8, VAR_9;

 if (VAR_5) {
  *VAR_2 = (*VAR_2 & 0xffff0000) | (VAR_4 & 0xffff);
  return 0;
 }


 VAR_9 = ((VAR_6 & 0xffff) ^ 0x8000) - 0x8000;

 if (VAR_1->arch.r_mips_hi16_list != ((void*)0)) {
  VAR_7 = VAR_1->arch.r_mips_hi16_list;
  while (VAR_7 != ((void*)0)) {
   struct mips_hi16 *VAR_10;
   unsigned long VAR_11;




   if (VAR_4 != VAR_7->value)
    goto out_danger;







   VAR_11 = *VAR_7->addr;
   VAR_8 = ((VAR_11 & 0xffff) << 16) + VAR_9;
   VAR_8 += VAR_4;





   VAR_8 = ((VAR_8 >> 16) + ((VAR_8 & 0x8000) != 0)) & 0xffff;

   VAR_11 = (VAR_11 & ~0xffff) | VAR_8;
   *VAR_7->addr = VAR_11;

   VAR_10 = VAR_7->next;
   FUNC_1(VAR_7);
   VAR_7 = VAR_10;
  }

  VAR_1->arch.r_mips_hi16_list = ((void*)0);
 }




 VAR_8 = VAR_4 + VAR_9;
 VAR_6 = (VAR_6 & ~0xffff) | (VAR_8 & 0xffff);
 *VAR_2 = VAR_6;

 return 0;

out_danger:
 FUNC_0(VAR_7);
 VAR_1->arch.r_mips_hi16_list = ((void*)0);

 FUNC_2("module %s: dangerous R_MIPS_LO16 relocation\n", VAR_1->name);

 return -VAR_0;
}
