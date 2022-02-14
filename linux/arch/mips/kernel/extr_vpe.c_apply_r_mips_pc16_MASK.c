
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct module {int dummy; } ;
typedef scalar_t__ Elf32_Addr ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct module *VAR_1, uint32_t *VAR_2,
        Elf32_Addr VAR_3)
{
 int VAR_4;
 VAR_4 = (((unsigned int)VAR_3 - (unsigned int)VAR_2));
 VAR_4 >>= 2;
 VAR_4 -= 1;

 if ((VAR_4 > 32768) || (VAR_4 < -32768)) {
  FUNC_0("VPE loader: apply_r_mips_pc16: relative address out of range 0x%x\n",
    VAR_4);
  return -VAR_0;
 }

 *VAR_2 = (*VAR_2 & 0xffff0000) | (VAR_4 & 0xffff);

 return 0;
}
