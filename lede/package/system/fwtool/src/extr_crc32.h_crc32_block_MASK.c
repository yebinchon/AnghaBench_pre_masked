
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static inline uint32_t
FUNC_0(uint32_t VAR_0, const void *VAR_1, unsigned VAR_2, uint32_t *VAR_3)
{
 const void *VAR_4 = (uint8_t*)VAR_1 + VAR_2;

 while (VAR_1 != VAR_4) {
  VAR_0 = VAR_3[(uint8_t)VAR_0 ^ *(uint8_t*)VAR_1] ^ (VAR_0 >> 8);
  VAR_1 = (uint8_t*)VAR_1 + 1;
 }
 return VAR_0;
}
