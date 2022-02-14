
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint32_t ;
typedef unsigned int uint16_t ;
typedef scalar_t__ u_int16_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_1(const void *VAR_0, uint16_t VAR_1, uint32_t VAR_2)
{
 const uint8_t *VAR_3 = VAR_0;
 uint32_t VAR_4;


 for (VAR_4 = 0; VAR_4 < (VAR_1 & ~1U); VAR_4 += 2) {
  VAR_2 += (u_int16_t)FUNC_0(*((u_int16_t *)(VAR_3 + VAR_4)));
  if (VAR_2 > 0xFFFF)
   VAR_2 -= 0xFFFF;
 }





 if (VAR_4 < VAR_1) {
  VAR_2 += VAR_3[VAR_4] << 8;
  if (VAR_2 > 0xFFFF)
   VAR_2 -= 0xFFFF;
 }
 return VAR_2;
}
