
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int ,int) ;

uint32_t FUNC_1(uint32_t VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = VAR_0;
 uint32_t VAR_3 = 0xffff >> (16 - VAR_1);


 if (VAR_1 < 16) {
  VAR_2 += 1UL << (16 - VAR_1 - 1);
  VAR_2 >>= 16 - VAR_1;
 }

 return FUNC_0(VAR_2, 0, VAR_3);
}
