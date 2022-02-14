
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (char const*) ;

uint32_t FUNC_1(const char *VAR_0, int VAR_1)
{
 uint32_t VAR_2 = VAR_1, VAR_3;
 int VAR_4;

 if (VAR_1 <= 0 || VAR_0 == ((void*)0)) return 0;

 VAR_4 = VAR_1 & 3;
 VAR_1 >>= 2;


 for (;VAR_1 > 0; VAR_1--) {
  VAR_2 += FUNC_0(VAR_0);
  VAR_3 = (FUNC_0(VAR_0+2) << 11) ^ VAR_2;
  VAR_2 = (VAR_2 << 16) ^ VAR_3;
  VAR_0 += 2*sizeof(uint16_t);
  VAR_2 += VAR_2 >> 11;
 }


 switch (VAR_4) {
  case 3: VAR_2 += FUNC_0(VAR_0);
   VAR_2 ^= VAR_2 << 16;
   VAR_2 ^= VAR_0[sizeof(uint16_t)] << 18;
   VAR_2 += VAR_2 >> 11;
   break;
  case 2: VAR_2 += FUNC_0(VAR_0);
   VAR_2 ^= VAR_2 << 11;
   VAR_2 += VAR_2 >> 17;
   break;
  case 1: VAR_2 += *VAR_0;
   VAR_2 ^= VAR_2 << 10;
   VAR_2 += VAR_2 >> 1;
 }


 VAR_2 ^= VAR_2 << 3;
 VAR_2 += VAR_2 >> 5;
 VAR_2 ^= VAR_2 << 4;
 VAR_2 += VAR_2 >> 17;
 VAR_2 ^= VAR_2 << 25;
 VAR_2 += VAR_2 >> 6;

 return VAR_2;
}
