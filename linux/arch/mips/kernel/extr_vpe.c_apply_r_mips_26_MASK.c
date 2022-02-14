
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct module {int dummy; } ;
typedef int Elf32_Addr ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct module *VAR_1, uint32_t *VAR_2,
      Elf32_Addr VAR_3)
{
 if (VAR_3 % 4) {
  FUNC_0("VPE loader: apply_r_mips_26: unaligned relocation\n");
  return -VAR_0;
 }
 *VAR_2 = (*VAR_2 & ~0x03ffffff) |
  ((*VAR_2 + (VAR_3 >> 2)) & 0x03ffffff);
 return 0;
}
