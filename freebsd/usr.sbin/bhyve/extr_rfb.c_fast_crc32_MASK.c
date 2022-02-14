
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static __inline uint32_t
FUNC_0(void *VAR_0, int VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3 = VAR_1 / sizeof(uint32_t);
 uint32_t *VAR_4 = (uint32_t *)VAR_0;

 while (VAR_3--) {
  asm volatile (
   ".byte 0xf2, 0xf, 0x38, 0xf1, 0xf1;"
   :"=S" (VAR_2)
   :"0" (VAR_2), "c" (*VAR_4)
  );
  VAR_4++;
 }

 return (VAR_2);
}
