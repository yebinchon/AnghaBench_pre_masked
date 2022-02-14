
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct module {int dummy; } ;
typedef scalar_t__ Elf32_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct module *VAR_3, uint32_t *VAR_4,
    Elf32_Addr VAR_5)
{
 int VAR_6;

 if (!(*VAR_4 & 0xffff)) {
  VAR_6 = (int)VAR_5 - VAR_1;
 } else {


  VAR_6 = (int)(short)((int)VAR_5 + VAR_2 +
        (int)(short)(*VAR_4 & 0xffff) - VAR_1);
 }

 if ((VAR_6 > 32768) || (VAR_6 < -32768)) {
  FUNC_0("VPE loader: apply_r_mips_gprel16: relative address 0x%x out of range of gp register\n",
    VAR_6);
  return -VAR_0;
 }

 *VAR_4 = (*VAR_4 & 0xffff0000) | (VAR_6 & 0xffff);

 return 0;
}
