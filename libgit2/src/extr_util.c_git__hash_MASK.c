
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 () ;

uint32_t FUNC_1(const void *VAR_0, int VAR_1, uint32_t VAR_2)
{
 const uint8_t *VAR_3 = (const uint8_t*)VAR_0;
 const int VAR_4 = VAR_1 / 4;

 const uint32_t *VAR_5 = (const uint32_t *)(VAR_3 + VAR_4 * 4);
 const uint8_t *VAR_6 = (const uint8_t *)(VAR_3 + VAR_4 * 4);

 uint32_t VAR_7 = 0x971e137b ^ VAR_2;
 uint32_t VAR_8;

 uint32_t VAR_9 = 0x95543787;
 uint32_t VAR_10 = 0x2ad7eb25;

 int VAR_11;

 for (VAR_11 = -VAR_4; VAR_11; VAR_11++) {
  VAR_8 = VAR_5[VAR_11];
  { VAR_8 *= VAR_9; VAR_8 = FUNC_0(VAR_8,11); VAR_8 *= VAR_10; VAR_7 ^= VAR_8; VAR_7 = VAR_7*3 + 0x52dce729; VAR_9 = VAR_9*5 + 0x7b7d159c; VAR_10 = VAR_10*5 + 0x6bce6396;};
 }

 VAR_8 = 0;

 switch(VAR_1 & 3) {
 case 3: VAR_8 ^= VAR_6[2] << 16;

 case 2: VAR_8 ^= VAR_6[1] << 8;

 case 1: VAR_8 ^= VAR_6[0];
  { VAR_8 *= VAR_9; VAR_8 = FUNC_0(VAR_8,11); VAR_8 *= VAR_10; VAR_7 ^= VAR_8; VAR_7 = VAR_7*3 + 0x52dce729; VAR_9 = VAR_9*5 + 0x7b7d159c; VAR_10 = VAR_10*5 + 0x6bce6396;};
 }

 VAR_7 ^= VAR_1;
 VAR_7 ^= VAR_7 >> 16;
 VAR_7 *= 0x85ebca6b;
 VAR_7 ^= VAR_7 >> 13;
 VAR_7 *= 0xc2b2ae35;
 VAR_7 ^= VAR_7 >> 16;

 return VAR_7;
}
