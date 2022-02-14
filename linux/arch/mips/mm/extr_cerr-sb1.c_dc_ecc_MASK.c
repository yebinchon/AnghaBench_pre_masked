
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static uint8_t FUNC_0(uint64_t VAR_2)
{
 uint64_t VAR_3;
 uint32_t VAR_4;
 uint8_t VAR_5;
 int VAR_6;

 VAR_5 = 0;
 for (VAR_6 = 7; VAR_6 >= 0; VAR_6--)
 {
  VAR_5 <<= 1;
  VAR_3 = VAR_2 & VAR_0[VAR_6];
  VAR_4 = (uint32_t)(VAR_3 >> 32);
  VAR_5 ^= (VAR_1[VAR_4>>24] ^ VAR_1[(VAR_4>>16) & 0xFF]
        ^ VAR_1[(VAR_4>>8) & 0xFF] ^ VAR_1[VAR_4 & 0xFF]);
  VAR_4 = (uint32_t)(VAR_3 & 0xFFFFFFFF);
  VAR_5 ^= (VAR_1[VAR_4>>24] ^ VAR_1[(VAR_4>>16) & 0xFF]
        ^ VAR_1[(VAR_4>>8) & 0xFF] ^ VAR_1[VAR_4 & 0xFF]);
 }
 return VAR_5;
}
