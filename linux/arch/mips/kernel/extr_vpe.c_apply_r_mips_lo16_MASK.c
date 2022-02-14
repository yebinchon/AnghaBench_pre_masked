
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32_t ;
struct module {int dummy; } ;
struct mips_hi16 {scalar_t__ value; unsigned long* addr; struct mips_hi16* next; } ;
typedef scalar_t__ Elf32_Addr ;


 int VAR_0 ;
 int FUNC_0 (struct mips_hi16*) ;
 struct mips_hi16* VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct module *VAR_2, uint32_t *VAR_3,
        Elf32_Addr VAR_4)
{
 unsigned long VAR_5 = *VAR_3;
 Elf32_Addr VAR_6, VAR_7;
 struct mips_hi16 *VAR_8, *VAR_9;


 VAR_7 = ((VAR_5 & 0xffff) ^ 0x8000) - 0x8000;

 if (VAR_1 != ((void*)0)) {

  VAR_8 = VAR_1;
  while (VAR_8 != ((void*)0)) {
   unsigned long VAR_10;




   if (VAR_4 != VAR_8->value) {
    FUNC_1("VPE loader: apply_r_mips_lo16/hi16: inconsistent value information\n");
    goto out_free;
   }







   VAR_10 = *VAR_8->addr;
   VAR_6 = ((VAR_10 & 0xffff) << 16) + VAR_7;
   VAR_6 += VAR_4;





   VAR_6 = ((VAR_6 >> 16) + ((VAR_6 & 0x8000) != 0)) & 0xffff;

   VAR_10 = (VAR_10 & ~0xffff) | VAR_6;
   *VAR_8->addr = VAR_10;

   VAR_9 = VAR_8->next;
   FUNC_0(VAR_8);
   VAR_8 = VAR_9;
  }

  VAR_1 = ((void*)0);
 }




 VAR_6 = VAR_4 + VAR_7;
 VAR_5 = (VAR_5 & ~0xffff) | (VAR_6 & 0xffff);
 *VAR_3 = VAR_5;

 return 0;

out_free:
 while (VAR_8 != ((void*)0)) {
  VAR_9 = VAR_8->next;
  FUNC_0(VAR_8);
  VAR_8 = VAR_9;
 }
 VAR_1 = ((void*)0);

 return -VAR_0;
}
