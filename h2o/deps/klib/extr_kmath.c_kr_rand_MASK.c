
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krint64_t ;
struct TYPE_4__ {int mti; int* mt; } ;
typedef TYPE_1__ krand_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long long,TYPE_1__*) ;

krint64_t FUNC_1(krand_t *VAR_4)
{
 krint64_t VAR_5;
 static const krint64_t VAR_6[2] = { 0, 0xB5026F5AA96619E9ULL };
    if (VAR_4->mti >= VAR_2) {
  int VAR_7;
  if (VAR_4->mti == VAR_2 + 1) FUNC_0(5489ULL, VAR_4);
        for (VAR_7 = 0; VAR_7 < VAR_2 - VAR_1; ++VAR_7) {
            VAR_5 = (VAR_4->mt[VAR_7] & VAR_3) | (VAR_4->mt[VAR_7+1] & VAR_0);
            VAR_4->mt[VAR_7] = VAR_4->mt[VAR_7 + VAR_1] ^ (VAR_5>>1) ^ VAR_6[(int)(VAR_5&1)];
        }
        for (; VAR_7 < VAR_2 - 1; ++VAR_7) {
            VAR_5 = (VAR_4->mt[VAR_7] & VAR_3) | (VAR_4->mt[VAR_7+1] & VAR_0);
            VAR_4->mt[VAR_7] = VAR_4->mt[VAR_7 + (VAR_1 - VAR_2)] ^ (VAR_5>>1) ^ VAR_6[(int)(VAR_5&1)];
        }
        VAR_5 = (VAR_4->mt[VAR_2 - 1] & VAR_3) | (VAR_4->mt[0] & VAR_0);
        VAR_4->mt[VAR_2 - 1] = VAR_4->mt[VAR_1 - 1] ^ (VAR_5>>1) ^ VAR_6[(int)(VAR_5&1)];
        VAR_4->mti = 0;
    }
    VAR_5 = VAR_4->mt[VAR_4->mti++];
    VAR_5 ^= (VAR_5 >> 29) & 0x5555555555555555ULL;
    VAR_5 ^= (VAR_5 << 17) & 0x71D67FFFEDA60000ULL;
    VAR_5 ^= (VAR_5 << 37) & 0xFFF7EEE000000000ULL;
    VAR_5 ^= (VAR_5 >> 43);
    return VAR_5;
}
