
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(uint32_t VAR_1,
        const unsigned char *VAR_2,
        unsigned int VAR_3)
{
 VAR_1 = VAR_1 ^ 0xffffffffUL;
 do {
  VAR_1 = VAR_0[((int)VAR_1 ^ (*VAR_2++)) & 0xff] ^ (VAR_1 >> 8);
 } while (--VAR_3);
 return VAR_1 ^ 0xffffffffUL;
}
